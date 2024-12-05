#include "studentform.h"
#include "ui_studentform.h"
#include "studentcarddisplay.h"
#include "student.h"
#include "globalstorage.h"

#include "QMessageBox" // For warnings
#include "QString"
#include <stdexcept> // For StudentID errors

studentForm::studentForm(QWidget *parent) : QDialog(parent), ui(new Ui::studentForm) // Constructor
{
    ui->setupUi(this); // Creates window
    ui->lineEdit_otherCollege->setReadOnly(true);

}

studentForm::~studentForm() // Deconstructor
{
  delete ui;
}

void studentForm::sendName(QString &tempName) // Method to set temporary name variable
{
    transferName = tempName; // Sets name from previous window to temporary name variable
}

void studentForm::on_pushButton_cancelStudent_clicked() // User pressses cancel button on student info form
{
    this->hide(); // Hides current window
}

void studentForm::on_pushButton_createStudent_clicked() // User presses create button on student form
{
    if (!ui->lineEdit_studentID->text().isEmpty()) // If student ID entered
    {
        tempID = ui->lineEdit_studentID->text(); // Sets temporary Student ID variable

        // Try-Catch block to ensure student ID is an integer
        try {
            bool ok;
            int id = tempID.toInt(&ok); // Try to convert lineEdit text to integer
            if (!ok) {
                throw std::invalid_argument("Student ID is not a valid number.");
            }
        } catch (const std::invalid_argument& e) {
            QMessageBox::warning(this, "Invalid Input", e.what()); // Show error if not an integer
            return; // Exit the function if ID is not an integer
        }

        if (ui->comboBox_gradYear->currentIndex() != 0)
        {
            // Switch-Case to set graduation year temporary variable
            switch (ui->comboBox_gradYear->currentIndex())
            {
            case 1: // 2024
                tempYear = "2024";
                break;
            case 2: // 2025
                tempYear = "2025";
                break;
            case 3: // 2026
                tempYear = "2026";
                break;
            case 4: // 2027
                tempYear = "2027";
                break;
            case 5: // 2028
                tempYear = "2028";
                break;
            }
            // If/If Else chain for colleges combobox
            if (ui->comboBox_colleges->currentIndex() == 0) // If "please specify" selected (no choice)
            {
                QMessageBox::warning(this, "Warning", "You must select a college."); // Warning to select college
            }
            else if (ui->comboBox_colleges->currentIndex() == 1) // Selects index 1
            {
                tempCollege = "U.A. Whitaker College of Engineering";

                Student newStudent; // Create new student
                newStudent.setAttributes(transferName, tempCollege, tempID, tempYear); // Set new student attributes
                GlobalStorage::studentsVector.append(newStudent); // Add new student to vector

                studentCardDisplay card; // Create new card window
                card.setInfo(tempCollege, tempID, transferName, tempYear); // Send info to card

                this->hide();
                card.setModal(true); // Open new window
                card.exec();
            }
            else if (ui->comboBox_colleges->currentIndex()==2) // Selects index 2
            {
                tempCollege = "College of Arts and Sciences";

                Student newStudent; // Create new student
                newStudent.setAttributes(transferName, tempCollege, tempID, tempYear); // Set new student attributes
                GlobalStorage::studentsVector.append(newStudent); // Add new student to vector

                studentCardDisplay card;
                card.setInfo(tempCollege, tempID, transferName, tempYear); // Send info to card

                this->hide();
                card.setModal(true); // Open new window
                card.exec();
            }
            else if (ui->comboBox_colleges->currentIndex() == 3) // Selects index 3
            {
                tempCollege = "Lutgert College of Business";

                Student newStudent; // Create new student
                newStudent.setAttributes(transferName, tempCollege, tempID, tempYear); // Set new student attributes
                GlobalStorage::studentsVector.append(newStudent); // Add new student to vector

                studentCardDisplay card;
                card.setInfo(tempCollege, tempID, transferName, tempYear);

                this->hide();
                card.setModal(true); // Open new window
                card.exec();
            }
            else if (ui->comboBox_colleges->currentIndex() == 4) // Selects index 4
            {
                tempCollege = "College of Education";

                Student newStudent; // Create new student
                newStudent.setAttributes(transferName, tempCollege, tempID, tempYear); // Set new student attributes
                GlobalStorage::studentsVector.append(newStudent); // Add new student to vector

                studentCardDisplay card;
                card.setInfo(tempCollege, tempID, transferName, tempYear); // Send info to card

                this->hide();
                card.setModal(true); // Open new window
                card.exec();
            }
            else if (ui->comboBox_colleges->currentIndex() == 5)
            {
                tempCollege = "Marieb College of Health & Human Services";

                Student newStudent; // Create new student
                newStudent.setAttributes(transferName, tempCollege, tempID, tempYear); // Set new student attributes
                GlobalStorage::studentsVector.append(newStudent); // Add new student to vector

                studentCardDisplay card;
                card.setInfo(tempCollege, tempID, transferName, tempYear); // Send info to card

                this->hide();
                card.setModal(true); // Open new window
                card.exec();
            }
            else if (ui->comboBox_colleges->currentIndex() == 6) // If "other" selected
            {
                if (!ui->lineEdit_otherCollege->text().isEmpty()) // If "other" lineEdit is not empty
                {
                    tempCollege = ui->lineEdit_otherCollege->text();

                    Student newStudent; // Create new student
                    newStudent.setAttributes(transferName, tempCollege, tempID, tempYear); // Set new student attributes
                    GlobalStorage::studentsVector.append(newStudent); // Add new student to vector

                    studentCardDisplay card;
                    card.setInfo(tempCollege, tempID, transferName, tempYear); // Send info to card

                    this->hide();
                    card.setModal(true); // Open new window
                    card.exec();
                }
                else { QMessageBox::warning(this, "Warning", "You must enter another college."); } // Warning to enter another college
        }
        else { QMessageBox::warning(this, "Warning", "You must enter your position."); } // Warning to  select grad year
    }
    else { QMessageBox::warning(this, "Warning", "You must enter your position."); } // Warning to enter student ID
    }
}

void studentForm::on_comboBox_colleges_currentIndexChanged(int index) // When user selects a college
{
    if (index == 6) // If user selects "other college"
    {
        ui->lineEdit_otherCollege->setReadOnly(false); // Allow user to type in lineEdit box
    }
    return;
}

