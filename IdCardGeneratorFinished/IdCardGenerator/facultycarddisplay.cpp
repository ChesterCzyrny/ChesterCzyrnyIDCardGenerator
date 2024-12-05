#include "facultycarddisplay.h"
#include "ui_facultycarddisplay.h"

facultyCardDisplay::facultyCardDisplay(QWidget *parent) : QDialog(parent), ui(new Ui::facultyCardDisplay) // Constructor
{
    ui->setupUi(this); // Creates faculty card

    // Set up style sheets for card
    this->setStyleSheet("background-color: white;");
    ui->label_faculty->setStyleSheet("color: white; background-color: #0661B6;");
    ui->label_facultyCollege->setStyleSheet("color: #039367;");

    ui->label_logo->setFixedSize(150,150); // Set label size
    QPixmap logo("C:/Users/abrow/OneDrive/Documents/QT/fgcu_logo.png"); // Shows FGCU logo
    ui->label_logo->setPixmap(logo.scaled(ui->label_logo->size(),Qt::KeepAspectRatio)); // Scales logo to label


}

facultyCardDisplay::~facultyCardDisplay() // Deconstructor
{
    delete ui;
}

void facultyCardDisplay::setInfo(QString &tempCollege, QString &tempName, QString &tempPosition, QString &tempYear) // Method to get variables from previous form
{
    college = tempCollege;
    name = tempName;
    position = tempPosition;
    year = tempYear;
    // Set ID card text to temporary variables
    ui->label_facultyCollege->setText(college);
    ui->label_facultyName->setText(name);
    ui->label_facultyPosition->setText(position);
    ui->label_facultyStarted->setText(year);
}

