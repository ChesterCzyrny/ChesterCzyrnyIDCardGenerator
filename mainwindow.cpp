#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "createidform.h"
#include "viewform.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Set up style sheets for main menu
    this->setStyleSheet("background-color: white;");  // Set the main background color

    // Set up button styles
    ui->pushButton_createMain->setStyleSheet(
        "QPushButton {"
        "background-color: white;"
        "border: 2px solid #039367;"
        "color: #039367;"
        "padding: 5px 10px;"
        "border-radius: 5px;"
        "}"
        "QPushButton:hover {"
        "background-color: #039367;"     // Green background on hover
        "color: white;"                // White text on hover
        "}"
        );
    ui->pushButton_quitMain->setStyleSheet(
        "QPushButton {"
        "background-color: white;"
        "border: 2px solid #039367;"
        "color: #039367;"
        "padding: 5px 10px;"
        "border-radius: 5px;"
        "}"
        "QPushButton:hover {"
        "background-color: #039367;"     // Green background on hover
        "color: white;"                // White text on hover
        "}"
        );
    ui->pushButton_viewCard->setStyleSheet(
        "QPushButton {"
        "background-color: white;"
        "border: 2px solid #039367;"
        "color: #039367;"
        "padding: 5px 10px;"
        "border-radius: 5px;"
        "}"
        "QPushButton:hover {"
        "background-color: #039367;"     // Green background on hover
        "color: white;"                // White text on hover
        "}"
        );
    // Set style for the label
    ui->label_welcome->setStyleSheet("color: #0661B6;");

    // Create FGCU logo
    ui->label_logo->setFixedSize(150, 150); // Set label size
    QPixmap logo("C:/Users/abrow/OneDrive/Documents/QT/fgcu_logo.png"); // Shows FGCU logo
    ui->label_logo->setPixmap(logo.scaled(ui->label_logo->size(), Qt::KeepAspectRatio)); // Scales logo to label

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_quitMain_clicked() // Main Menu Quit Button
{
    QApplication::quit();

}


void MainWindow::on_pushButton_createMain_clicked() // Main Menu Create ID Card button (pulls up new window)
{
    createIdForm form;
    form.setModal(true);
    form.exec();
    return;
}

void MainWindow::on_pushButton_viewCard_clicked()
{
    ViewForm form;
    form.setModal(true);
    form.exec();
    return;
}

