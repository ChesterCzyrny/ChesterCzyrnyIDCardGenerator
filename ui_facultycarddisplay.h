/********************************************************************************
** Form generated from reading UI file 'facultycarddisplay.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACULTYCARDDISPLAY_H
#define UI_FACULTYCARDDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_facultyCardDisplay
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label_faculty;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label_logo;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_name;
    QLabel *label_facultyName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_position;
    QLabel *label_facultyPosition;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_started;
    QLabel *label_facultyStarted;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_facultyCollege;

    void setupUi(QDialog *facultyCardDisplay)
    {
        if (facultyCardDisplay->objectName().isEmpty())
            facultyCardDisplay->setObjectName("facultyCardDisplay");
        facultyCardDisplay->resize(536, 336);
        verticalLayout_2 = new QVBoxLayout(facultyCardDisplay);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_faculty = new QLabel(facultyCardDisplay);
        label_faculty->setObjectName("label_faculty");
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        label_faculty->setFont(font);
        label_faculty->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_faculty);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        label_logo = new QLabel(facultyCardDisplay);
        label_logo->setObjectName("label_logo");

        horizontalLayout_4->addWidget(label_logo);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_name = new QLabel(facultyCardDisplay);
        label_name->setObjectName("label_name");
        QFont font1;
        font1.setPointSize(12);
        label_name->setFont(font1);
        label_name->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(label_name);

        label_facultyName = new QLabel(facultyCardDisplay);
        label_facultyName->setObjectName("label_facultyName");
        label_facultyName->setFont(font1);
        label_facultyName->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label_facultyName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_position = new QLabel(facultyCardDisplay);
        label_position->setObjectName("label_position");
        label_position->setFont(font1);
        label_position->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_2->addWidget(label_position);

        label_facultyPosition = new QLabel(facultyCardDisplay);
        label_facultyPosition->setObjectName("label_facultyPosition");
        label_facultyPosition->setFont(font1);
        label_facultyPosition->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(label_facultyPosition);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_started = new QLabel(facultyCardDisplay);
        label_started->setObjectName("label_started");
        label_started->setFont(font1);
        label_started->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_3->addWidget(label_started);

        label_facultyStarted = new QLabel(facultyCardDisplay);
        label_facultyStarted->setObjectName("label_facultyStarted");
        label_facultyStarted->setFont(font1);
        label_facultyStarted->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(label_facultyStarted);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        label_facultyCollege = new QLabel(facultyCardDisplay);
        label_facultyCollege->setObjectName("label_facultyCollege");
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        label_facultyCollege->setFont(font2);
        label_facultyCollege->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_facultyCollege);


        retranslateUi(facultyCardDisplay);

        QMetaObject::connectSlotsByName(facultyCardDisplay);
    } // setupUi

    void retranslateUi(QDialog *facultyCardDisplay)
    {
        facultyCardDisplay->setWindowTitle(QCoreApplication::translate("facultyCardDisplay", "Dialog", nullptr));
        label_faculty->setText(QCoreApplication::translate("facultyCardDisplay", "---- FACULTY ----", nullptr));
        label_logo->setText(QString());
        label_name->setText(QCoreApplication::translate("facultyCardDisplay", "Name:", nullptr));
        label_facultyName->setText(QCoreApplication::translate("facultyCardDisplay", "Paul Allen", nullptr));
        label_position->setText(QCoreApplication::translate("facultyCardDisplay", "Position:", nullptr));
        label_facultyPosition->setText(QCoreApplication::translate("facultyCardDisplay", "Professor", nullptr));
        label_started->setText(QCoreApplication::translate("facultyCardDisplay", "Started:", nullptr));
        label_facultyStarted->setText(QCoreApplication::translate("facultyCardDisplay", "2021", nullptr));
        label_facultyCollege->setText(QCoreApplication::translate("facultyCardDisplay", "College of Engineering", nullptr));
    } // retranslateUi

};

namespace Ui {
    class facultyCardDisplay: public Ui_facultyCardDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACULTYCARDDISPLAY_H
