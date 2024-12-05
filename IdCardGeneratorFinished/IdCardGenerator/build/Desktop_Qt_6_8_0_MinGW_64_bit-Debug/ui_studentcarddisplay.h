/********************************************************************************
** Form generated from reading UI file 'studentcarddisplay.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTCARDDISPLAY_H
#define UI_STUDENTCARDDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_studentCardDisplay
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label_student;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label_logo;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_name;
    QLabel *label_studentName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_id;
    QLabel *label_studentID;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_graduation;
    QLabel *label_studentGraduation;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_studentCollege;

    void setupUi(QDialog *studentCardDisplay)
    {
        if (studentCardDisplay->objectName().isEmpty())
            studentCardDisplay->setObjectName("studentCardDisplay");
        studentCardDisplay->resize(504, 327);
        studentCardDisplay->setAutoFillBackground(false);
        verticalLayout_2 = new QVBoxLayout(studentCardDisplay);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_student = new QLabel(studentCardDisplay);
        label_student->setObjectName("label_student");
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        label_student->setFont(font);
        label_student->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_student);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        label_logo = new QLabel(studentCardDisplay);
        label_logo->setObjectName("label_logo");
        label_logo->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_4->addWidget(label_logo);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_name = new QLabel(studentCardDisplay);
        label_name->setObjectName("label_name");
        QFont font1;
        font1.setPointSize(12);
        label_name->setFont(font1);
        label_name->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(label_name);

        label_studentName = new QLabel(studentCardDisplay);
        label_studentName->setObjectName("label_studentName");
        label_studentName->setFont(font1);
        label_studentName->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label_studentName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_id = new QLabel(studentCardDisplay);
        label_id->setObjectName("label_id");
        label_id->setFont(font1);
        label_id->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_2->addWidget(label_id);

        label_studentID = new QLabel(studentCardDisplay);
        label_studentID->setObjectName("label_studentID");
        label_studentID->setFont(font1);
        label_studentID->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(label_studentID);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_graduation = new QLabel(studentCardDisplay);
        label_graduation->setObjectName("label_graduation");
        label_graduation->setFont(font1);
        label_graduation->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_3->addWidget(label_graduation);

        label_studentGraduation = new QLabel(studentCardDisplay);
        label_studentGraduation->setObjectName("label_studentGraduation");
        label_studentGraduation->setFont(font1);
        label_studentGraduation->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(label_studentGraduation);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_4);

        label_studentCollege = new QLabel(studentCardDisplay);
        label_studentCollege->setObjectName("label_studentCollege");
        label_studentCollege->setFont(font);
        label_studentCollege->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_studentCollege);


        retranslateUi(studentCardDisplay);

        QMetaObject::connectSlotsByName(studentCardDisplay);
    } // setupUi

    void retranslateUi(QDialog *studentCardDisplay)
    {
        studentCardDisplay->setWindowTitle(QCoreApplication::translate("studentCardDisplay", "Dialog", nullptr));
        label_student->setText(QCoreApplication::translate("studentCardDisplay", "---- STUDENT ----", nullptr));
        label_logo->setText(QString());
        label_name->setText(QCoreApplication::translate("studentCardDisplay", "Name:", nullptr));
        label_studentName->setText(QCoreApplication::translate("studentCardDisplay", "Allison", nullptr));
        label_id->setText(QCoreApplication::translate("studentCardDisplay", "ID:", nullptr));
        label_studentID->setText(QCoreApplication::translate("studentCardDisplay", "@12345", nullptr));
        label_graduation->setText(QCoreApplication::translate("studentCardDisplay", "Graduation:", nullptr));
        label_studentGraduation->setText(QCoreApplication::translate("studentCardDisplay", "2027", nullptr));
        label_studentCollege->setText(QCoreApplication::translate("studentCardDisplay", "College of Engineering", nullptr));
    } // retranslateUi

};

namespace Ui {
    class studentCardDisplay: public Ui_studentCardDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTCARDDISPLAY_H
