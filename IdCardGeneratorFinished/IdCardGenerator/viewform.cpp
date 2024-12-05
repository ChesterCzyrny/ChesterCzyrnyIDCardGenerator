#include "viewform.h"
#include "ui_viewform.h"
#include "globalstorage.h"
#include "student.h"
#include "faculty.h"
#include "studentcarddisplay.h"
#include "facultycarddisplay.h"
#include <QMessageBox>

ViewForm::ViewForm(QWidget *parent) // Constructor
    : QDialog(parent)
    , ui(new Ui::ViewForm)
{
    ui->setupUi(this);

    ui->comboBox_objects->clear(); // Clear any items in the combo box

    for (Student& student : GlobalStorage::studentsVector) { // Add names from the student array
        ui->comboBox_objects->addItem(student.getName());
    }

    for (Faculty& faculty : GlobalStorage::facultyVector) { // Add names from the faculty array
        ui->comboBox_objects->addItem(faculty.getName());
    }

}

ViewForm::~ViewForm() // Deconstructor
{
    delete ui;
}

void ViewForm::on_pushButton_back_clicked() // User presses back button
{
    this->hide();
}


void ViewForm::on_pushButton_view_clicked()
{
    bool found = false;

    QString selectedName = ui->comboBox_objects->currentText();  // Get selected name from combo box
    QString tempName, tempCollege, positionOrId, tempYear;

    // Search for the selected name in the students and faculty arrays
    for (Student &searchStudent : GlobalStorage::studentsVector)
    {
        if (searchStudent.getName() == selectedName) // If selected name matches a student
        {
            tempName = searchStudent.getName(); tempCollege = searchStudent.getCollege(); // Set temp variables to send to card
            positionOrId = searchStudent.getId(); tempYear = searchStudent.getYear();

            studentCardDisplay card; // Create new card
            card.setInfo(tempCollege, positionOrId, tempName, tempYear); // Set card info

            this->hide();
            card.setModal(true);
            card.exec();
            found = true;
        }
    }

    for (Faculty &searchFaculty : GlobalStorage::facultyVector)
    {
        if (searchFaculty.getName() == selectedName) // If selected name matches a faculty
        {
            tempName = searchFaculty.getName(); tempCollege = searchFaculty.getCollege(); // Set temp variables to send to card
            positionOrId = searchFaculty.getPosition(); tempYear = searchFaculty.getYear();

            facultyCardDisplay card; // Create new card
            card.setInfo(tempCollege, tempName, positionOrId, tempYear); // Set card info

            this->hide();
            card.setModal(true);
            card.exec();
            found = true;
        }
    }

    if (!found)
    {
        QMessageBox::warning(this, "Error", "No matching entry found!"); // If no match found
    }
    this ->hide();

}

