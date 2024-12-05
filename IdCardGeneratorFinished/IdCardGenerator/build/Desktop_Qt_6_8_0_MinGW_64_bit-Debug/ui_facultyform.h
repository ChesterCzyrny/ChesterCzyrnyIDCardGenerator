/********************************************************************************
** Form generated from reading UI file 'facultyform.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACULTYFORM_H
#define UI_FACULTYFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_facultyForm
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_facultyInfo;
    QHBoxLayout *horizontalLayout;
    QLabel *label_position;
    QLineEdit *lineEdit_position;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_collegeEmployed;
    QComboBox *comboBox_facultyColleges;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_facultyOtherCollege;
    QLineEdit *lineEdit_facultyOtherCollege;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_yearsEmployed;
    QLineEdit *lineEdit_yearsEmployed;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_create;
    QPushButton *pushButton_cancel;

    void setupUi(QDialog *facultyForm)
    {
        if (facultyForm->objectName().isEmpty())
            facultyForm->setObjectName("facultyForm");
        facultyForm->resize(474, 231);
        verticalLayout = new QVBoxLayout(facultyForm);
        verticalLayout->setObjectName("verticalLayout");
        label_facultyInfo = new QLabel(facultyForm);
        label_facultyInfo->setObjectName("label_facultyInfo");
        QFont font;
        font.setPointSize(14);
        font.setUnderline(true);
        label_facultyInfo->setFont(font);

        verticalLayout->addWidget(label_facultyInfo);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_position = new QLabel(facultyForm);
        label_position->setObjectName("label_position");

        horizontalLayout->addWidget(label_position);

        lineEdit_position = new QLineEdit(facultyForm);
        lineEdit_position->setObjectName("lineEdit_position");

        horizontalLayout->addWidget(lineEdit_position);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_collegeEmployed = new QLabel(facultyForm);
        label_collegeEmployed->setObjectName("label_collegeEmployed");

        horizontalLayout_2->addWidget(label_collegeEmployed);

        comboBox_facultyColleges = new QComboBox(facultyForm);
        comboBox_facultyColleges->addItem(QString());
        comboBox_facultyColleges->addItem(QString());
        comboBox_facultyColleges->addItem(QString());
        comboBox_facultyColleges->addItem(QString());
        comboBox_facultyColleges->addItem(QString());
        comboBox_facultyColleges->addItem(QString());
        comboBox_facultyColleges->addItem(QString());
        comboBox_facultyColleges->setObjectName("comboBox_facultyColleges");

        horizontalLayout_2->addWidget(comboBox_facultyColleges);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label_facultyOtherCollege = new QLabel(facultyForm);
        label_facultyOtherCollege->setObjectName("label_facultyOtherCollege");

        horizontalLayout_3->addWidget(label_facultyOtherCollege);

        lineEdit_facultyOtherCollege = new QLineEdit(facultyForm);
        lineEdit_facultyOtherCollege->setObjectName("lineEdit_facultyOtherCollege");

        horizontalLayout_3->addWidget(lineEdit_facultyOtherCollege);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_yearsEmployed = new QLabel(facultyForm);
        label_yearsEmployed->setObjectName("label_yearsEmployed");

        horizontalLayout_5->addWidget(label_yearsEmployed);

        lineEdit_yearsEmployed = new QLineEdit(facultyForm);
        lineEdit_yearsEmployed->setObjectName("lineEdit_yearsEmployed");

        horizontalLayout_5->addWidget(lineEdit_yearsEmployed);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        pushButton_create = new QPushButton(facultyForm);
        pushButton_create->setObjectName("pushButton_create");

        horizontalLayout_4->addWidget(pushButton_create);

        pushButton_cancel = new QPushButton(facultyForm);
        pushButton_cancel->setObjectName("pushButton_cancel");

        horizontalLayout_4->addWidget(pushButton_cancel);


        verticalLayout->addLayout(horizontalLayout_4);

#if QT_CONFIG(shortcut)
        label_position->setBuddy(lineEdit_position);
        label_collegeEmployed->setBuddy(comboBox_facultyColleges);
        label_facultyOtherCollege->setBuddy(lineEdit_facultyOtherCollege);
        label_yearsEmployed->setBuddy(lineEdit_yearsEmployed);
#endif // QT_CONFIG(shortcut)

        retranslateUi(facultyForm);

        QMetaObject::connectSlotsByName(facultyForm);
    } // setupUi

    void retranslateUi(QDialog *facultyForm)
    {
        facultyForm->setWindowTitle(QCoreApplication::translate("facultyForm", "Dialog", nullptr));
        label_facultyInfo->setText(QCoreApplication::translate("facultyForm", "Faculty Card Information:", nullptr));
        label_position->setText(QCoreApplication::translate("facultyForm", "Position:", nullptr));
        label_collegeEmployed->setText(QCoreApplication::translate("facultyForm", "College Employed:", nullptr));
        comboBox_facultyColleges->setItemText(0, QCoreApplication::translate("facultyForm", "- Please Select -", nullptr));
        comboBox_facultyColleges->setItemText(1, QCoreApplication::translate("facultyForm", "U.A. Whitaker College of Engineering", nullptr));
        comboBox_facultyColleges->setItemText(2, QCoreApplication::translate("facultyForm", "College of Arts and Sciences", nullptr));
        comboBox_facultyColleges->setItemText(3, QCoreApplication::translate("facultyForm", "Lutgert College of Business", nullptr));
        comboBox_facultyColleges->setItemText(4, QCoreApplication::translate("facultyForm", "College of Education", nullptr));
        comboBox_facultyColleges->setItemText(5, QCoreApplication::translate("facultyForm", "Marieb College of Health & Human Services", nullptr));
        comboBox_facultyColleges->setItemText(6, QCoreApplication::translate("facultyForm", "Other - Please Specify", nullptr));

        label_facultyOtherCollege->setText(QCoreApplication::translate("facultyForm", "Other:", nullptr));
        label_yearsEmployed->setText(QCoreApplication::translate("facultyForm", "Year Employed:", nullptr));
        pushButton_create->setText(QCoreApplication::translate("facultyForm", "Create", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("facultyForm", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class facultyForm: public Ui_facultyForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACULTYFORM_H
