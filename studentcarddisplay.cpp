#include "studentcarddisplay.h"
#include "ui_studentcarddisplay.h"
#include <QPixmap>

studentCardDisplay::studentCardDisplay(QWidget *parent) : QDialog(parent), ui(new Ui::studentCardDisplay) // Constructor
{
    ui->setupUi(this); // Creates student card

    // Set up style sheets for card
    this->setStyleSheet("background-color: white;");
    ui->label_student->setStyleSheet("color: white; background-color: #0661B6;");
    ui->label_studentCollege->setStyleSheet("color: #039367;");

    // Create FGCU logo
    ui->label_logo->setFixedSize(150,150); // Set label size
    QPixmap logo("C:/Users/abrow/OneDrive/Documents/QT/fgcu_logo.png"); // Shows FGCU logo
    ui->label_logo->setPixmap(logo.scaled(ui->label_logo->size(),Qt::KeepAspectRatio)); // Scales logo to label

}

studentCardDisplay::~studentCardDisplay() // Deconstructor
{
    delete ui;
}

void studentCardDisplay::setInfo(QString &tempCollege, QString &tempId, QString &tempName, QString &tempYear) // Method to get variables from previous form
{
    college = tempCollege;
    id = tempId;
    name = tempName;
    year = tempYear;

    // Set ID card text to temporary variables
    ui->label_studentCollege->setText(college);
    ui->label_studentName->setText(name);
    ui->label_studentID->setText(id);
    ui->label_studentGraduation->setText(year);
}



