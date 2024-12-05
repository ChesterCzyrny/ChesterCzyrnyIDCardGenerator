#include "createidform.h"
#include "ui_createidform.h"
#include "studentform.h"
#include "facultyform.h"
#include <QString>
#include <QMessageBox> // For input warnings

createIdForm::createIdForm(QWidget *parent) : QDialog(parent), ui(new Ui::createIdForm) // Constructor
{
    ui->setupUi(this); // Creates window
}

createIdForm::~createIdForm() // Deconstructor
{
    delete ui;
}

void createIdForm::on_pushButton_cancel_clicked() // User presses cancel button on create form
{
    this->hide(); // Hides current window
}

void createIdForm::on_pushButton_next_clicked() // User presses next button on create form
{
    if(!ui->lineEdit_firstName->text().isEmpty() && !ui->lineEdit_lastName->text().isEmpty()) { // If first/last name entered
        if (ui->radioButton_faculty->isChecked()) { // If selected faulty
            facultyForm faculty; // Create new faculty window
            fullName = ui->lineEdit_firstName->text() + " " + ui->lineEdit_lastName->text(); // Sets temporary fullName = line edit texts
            faculty.sendName(fullName); // Send name to next window class
            this->hide(); // Hide current window
            faculty.setModal(true); // Open new window
            faculty.exec();
        }
        else if (ui->radioButton_student->isChecked()) { // If selected student
            studentForm student; // Create new window
            fullName = ui->lineEdit_firstName->text() + " " + ui->lineEdit_lastName->text(); // Sets temporary fullName = line edit texts
            student.sendName(fullName); // Send name to next window class
            this->hide(); // Hide current window
            student.setModal(true); // Open new student window
            student.exec();
        }
        else { // If no card type chosen
            QMessageBox::warning(this, "Warning", "You must choose a card type.");
        }
    }
    else { // If no first/last name entered
        QMessageBox::warning(this, "Warning", "You must enter a first and last name.");
    }
}

