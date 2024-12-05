/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_logo;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_welcome;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_viewCard;
    QPushButton *pushButton_createMain;
    QPushButton *pushButton_quitMain;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(552, 355);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_logo = new QLabel(centralwidget);
        label_logo->setObjectName("label_logo");

        horizontalLayout_2->addWidget(label_logo);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        label_welcome = new QLabel(centralwidget);
        label_welcome->setObjectName("label_welcome");
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label_welcome->setFont(font);
        label_welcome->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_welcome);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_viewCard = new QPushButton(centralwidget);
        pushButton_viewCard->setObjectName("pushButton_viewCard");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_viewCard->sizePolicy().hasHeightForWidth());
        pushButton_viewCard->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_viewCard);

        pushButton_createMain = new QPushButton(centralwidget);
        pushButton_createMain->setObjectName("pushButton_createMain");
        sizePolicy.setHeightForWidth(pushButton_createMain->sizePolicy().hasHeightForWidth());
        pushButton_createMain->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_createMain);

        pushButton_quitMain = new QPushButton(centralwidget);
        pushButton_quitMain->setObjectName("pushButton_quitMain");
        sizePolicy.setHeightForWidth(pushButton_quitMain->sizePolicy().hasHeightForWidth());
        pushButton_quitMain->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_quitMain);


        verticalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 552, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_logo->setText(QString());
        label_welcome->setText(QCoreApplication::translate("MainWindow", "Welcome to the ID Card Creator!", nullptr));
        pushButton_viewCard->setText(QCoreApplication::translate("MainWindow", "View an ID Card", nullptr));
        pushButton_createMain->setText(QCoreApplication::translate("MainWindow", "Create New ID Card", nullptr));
        pushButton_quitMain->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
