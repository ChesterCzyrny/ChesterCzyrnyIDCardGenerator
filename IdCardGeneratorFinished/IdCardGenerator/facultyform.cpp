#include "facultyform.h"
#include "ui_facultyform.h"
#include "facultycarddisplay.h"
#include "faculty.h"
#include "globalstorage.h"

#include "QMessageBox" // For input warnings
#include <QString>
#include <stdexcept> // For invalid employment year warning

facultyForm::facultyForm(QWidget *parent) : QDialog(parent), ui(new Ui::facultyForm) // Constructor
{
    ui->setupUi(this); // Creates window

    ui->lineEdit_facultyOtherCollege->setReadOnly(true);
}

facultyForm::~facultyForm() // Deconstructor
{
    delete ui;
}

void facultyForm::sendName(QString &tempName) // Method to set temporary name variable
{
    transferName = tempName; // Sets name from previous window to temporary name variable
}

void facultyForm::on_pushButton_cancel_clicked() // User presses cancel button
{
    this->hide(); // Hides current window
}

void facultyForm::on_pushButton_create_clicked() // User presses create button
{
    if(!ui->lineEdit_position->text().isEmpty()) // If position entered
    {
        tempPosition = ui->lineEdit_position->text(); // Sets temporary Position Title variable
        if(!ui->lineEdit_yearsEmployed->text().isEmpty()) // If years employed entered
        {
            tempYear = ui->lineEdit_yearsEmployed->text(); // Sets temporary Year Started variable

            // Try-Catch block to ensure employment year is an integer
            try {
                bool ok;
                int id = tempYear.toInt(&ok); // Try to convert lineEdit text to integer
                if (!ok) {
                    throw std::invalid_argument("Employment year is not a valid number.");
                }
            } catch (const std::invalid_argument& e) {
                QMessageBox::warning(this, "Invalid Input", e.what()); // Show error if not an integer
                return; // Exit the function if year is not an integer
            }

            // If/If Else chain for colleges combobox
            if (ui->comboBox_facultyColleges->currentIndex() == 0) // If "please specify" selected
            {
                QMessageBox::warning(this, "Warning", "You must select a college."); // Warning to select college
            }
            else if (ui->comboBox_facultyColleges->currentIndex() == 1) // Selects index 1
            {
                tempCollege = "U.A. Whitaker College of Engineering";

                Faculty newFaculty; // Create new faculty object
                newFaculty.setAttributes(transferName, tempCollege, tempPosition, tempYear); // Set new faculty attributes
                GlobalStorage::facultyVector.append(newFaculty); // Add new faculty to vector

                facultyCardDisplay card;
                card.setInfo(tempCollege, transferName, tempPosition, tempYear); // Send info to card
                this->hide(); // Hide current window
                card.setModal(true);
                card.exec();

            }
            else if (ui->comboBox_facultyColleges->currentIndex()==2) // Selects index 2
            {
                tempCollege = "College of Arts and Sciences";

                Faculty newFaculty; // Create new faculty object
                newFaculty.setAttributes(transferName, tempCollege, tempPosition, tempYear); // Set new faculty attributes
                GlobalStorage::facultyVector.append(newFaculty); // Add new faculty to vector

                facultyCardDisplay card;
                card.setInfo(tempCollege, transferName, tempPosition, tempYear); // Send info to card

                this->hide(); // Hide current window
                card.setModal(true);
                card.exec();
            }
            else if (ui->comboBox_facultyColleges->currentIndex() == 3) // Selects index 3
            {
                tempCollege = "Lutgert College of Business";

                Faculty newFaculty; // Create new faculty object
                newFaculty.setAttributes(transferName, tempCollege, tempPosition, tempYear); // Set new faculty attributes
                GlobalStorage::facultyVector.append(newFaculty); // Add new faculty to vector

                facultyCardDisplay card;
                card.setInfo(tempCollege, transferName, tempPosition, tempYear); // Send info to card

                this->hide(); // Hide current window
                card.setModal(true);
                card.exec();
            }
            else if (ui->comboBox_facultyColleges->currentIndex() == 4) // Selects index 4
            {
                tempCollege = "College of Education";

                Faculty newFaculty; // Create new faculty object
                newFaculty.setAttributes(transferName, tempCollege, tempPosition, tempYear); // Set new faculty attributes
                GlobalStorage::facultyVector.append(newFaculty); // Add new faculty to vector

                facultyCardDisplay card;
                card.setInfo(tempCollege, transferName, tempPosition, tempYear); // Send info to card

                this->hide(); // Hide current window
                card.setModal(true);
                card.exec();
            }
            else if (ui->comboBox_facultyColleges->currentIndex() == 5) // Selects index 5
            {
                tempCollege = "Marieb College of Health & Human Services";

                Faculty newFaculty; // Create new faculty object
                newFaculty.setAttributes(transferName, tempCollege, tempPosition, tempYear); // Set new faculty attributes
                GlobalStorage::facultyVector.append(newFaculty); // Add new faculty to vector

                facultyCardDisplay card;
                card.setInfo(tempCollege, transferName, tempPosition, tempYear); // Send info to card

                this->hide(); // Hide current window
                card.setModal(true);
                card.exec();
            }
            else if (ui->comboBox_facultyColleges->currentIndex() == 6) // If "other" selected
            {
                if (!ui->lineEdit_facultyOtherCollege->text().isEmpty()) // If "other" lineEdit is not empty
                {
                    tempCollege = ui->lineEdit_facultyOtherCollege->text(); // Sets text from "other" line edit to temporary college variable

                    Faculty newFaculty; // Create new faculty object
                    newFaculty.setAttributes(transferName, tempCollege, tempPosition, tempYear); // Set new faculty attributes
                    GlobalStorage::facultyVector.append(newFaculty); // Add new faculty to vector

                    facultyCardDisplay card;
                    card.setInfo(tempCollege, transferName, tempPosition, tempYear); // Send info to card

                    this->hide(); // Hide current window
                    card.setModal(true);
                    card.exec();
                }
                else { QMessageBox::warning(this, "Warning", "You must enter another college."); } // Warning to enter another college
            }
        }
        else { QMessageBox::warning(this, "Warning", "You must enter years employed."); } // Warning to enter years employed
    }
    else { QMessageBox::warning(this, "Warning", "You must enter your position."); } // Warning to enter position
}

void facultyForm::on_comboBox_facultyColleges_currentIndexChanged(int index) // User selects a college
{
    if (index == 6) // If user selects "other college"
    {
        ui->lineEdit_facultyOtherCollege->setReadOnly(false); // Allow user to write in lineEdit box
    }
}

