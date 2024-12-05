/********************************************************************************
** Form generated from reading UI file 'studentform.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTFORM_H
#define UI_STUDENTFORM_H

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

class Ui_studentForm
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_studentCard;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_studentID;
    QLineEdit *lineEdit_studentID;
    QHBoxLayout *horizontalLayout;
    QLabel *label_collegeEnrolled;
    QComboBox *comboBox_colleges;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QLabel *label_other;
    QLineEdit *lineEdit_otherCollege;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_gradYear;
    QComboBox *comboBox_gradYear;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_createStudent;
    QPushButton *pushButton_cancelStudent;

    void setupUi(QDialog *studentForm)
    {
        if (studentForm->objectName().isEmpty())
            studentForm->setObjectName("studentForm");
        studentForm->resize(463, 227);
        verticalLayout = new QVBoxLayout(studentForm);
        verticalLayout->setObjectName("verticalLayout");
        label_studentCard = new QLabel(studentForm);
        label_studentCard->setObjectName("label_studentCard");
        QFont font;
        font.setPointSize(14);
        font.setUnderline(true);
        label_studentCard->setFont(font);

        verticalLayout->addWidget(label_studentCard);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_studentID = new QLabel(studentForm);
        label_studentID->setObjectName("label_studentID");

        horizontalLayout_2->addWidget(label_studentID);

        lineEdit_studentID = new QLineEdit(studentForm);
        lineEdit_studentID->setObjectName("lineEdit_studentID");

        horizontalLayout_2->addWidget(lineEdit_studentID);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_collegeEnrolled = new QLabel(studentForm);
        label_collegeEnrolled->setObjectName("label_collegeEnrolled");

        horizontalLayout->addWidget(label_collegeEnrolled);

        comboBox_colleges = new QComboBox(studentForm);
        comboBox_colleges->addItem(QString());
        comboBox_colleges->addItem(QString());
        comboBox_colleges->addItem(QString());
        comboBox_colleges->addItem(QString());
        comboBox_colleges->addItem(QString());
        comboBox_colleges->addItem(QString());
        comboBox_colleges->addItem(QString());
        comboBox_colleges->setObjectName("comboBox_colleges");

        horizontalLayout->addWidget(comboBox_colleges);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        label_other = new QLabel(studentForm);
        label_other->setObjectName("label_other");

        horizontalLayout_5->addWidget(label_other);

        lineEdit_otherCollege = new QLineEdit(studentForm);
        lineEdit_otherCollege->setObjectName("lineEdit_otherCollege");

        horizontalLayout_5->addWidget(lineEdit_otherCollege);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_gradYear = new QLabel(studentForm);
        label_gradYear->setObjectName("label_gradYear");

        horizontalLayout_3->addWidget(label_gradYear);

        comboBox_gradYear = new QComboBox(studentForm);
        comboBox_gradYear->addItem(QString());
        comboBox_gradYear->addItem(QString());
        comboBox_gradYear->addItem(QString());
        comboBox_gradYear->addItem(QString());
        comboBox_gradYear->addItem(QString());
        comboBox_gradYear->addItem(QString());
        comboBox_gradYear->setObjectName("comboBox_gradYear");

        horizontalLayout_3->addWidget(comboBox_gradYear);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        pushButton_createStudent = new QPushButton(studentForm);
        pushButton_createStudent->setObjectName("pushButton_createStudent");

        horizontalLayout_4->addWidget(pushButton_createStudent);

        pushButton_cancelStudent = new QPushButton(studentForm);
        pushButton_cancelStudent->setObjectName("pushButton_cancelStudent");

        horizontalLayout_4->addWidget(pushButton_cancelStudent);


        verticalLayout->addLayout(horizontalLayout_4);

#if QT_CONFIG(shortcut)
        label_studentID->setBuddy(lineEdit_studentID);
        label_collegeEnrolled->setBuddy(comboBox_colleges);
        label_other->setBuddy(lineEdit_otherCollege);
        label_gradYear->setBuddy(comboBox_gradYear);
#endif // QT_CONFIG(shortcut)

        retranslateUi(studentForm);

        QMetaObject::connectSlotsByName(studentForm);
    } // setupUi

    void retranslateUi(QDialog *studentForm)
    {
        studentForm->setWindowTitle(QCoreApplication::translate("studentForm", "Dialog", nullptr));
        label_studentCard->setText(QCoreApplication::translate("studentForm", "Student Card Information:", nullptr));
        label_studentID->setText(QCoreApplication::translate("studentForm", "Student ID:  @", nullptr));
        label_collegeEnrolled->setText(QCoreApplication::translate("studentForm", "Enrolled College:", nullptr));
        comboBox_colleges->setItemText(0, QCoreApplication::translate("studentForm", "- Please Select -", nullptr));
        comboBox_colleges->setItemText(1, QCoreApplication::translate("studentForm", "U.A. Whitaker College of Engineering", nullptr));
        comboBox_colleges->setItemText(2, QCoreApplication::translate("studentForm", "College of Arts & Sciences", nullptr));
        comboBox_colleges->setItemText(3, QCoreApplication::translate("studentForm", "Lutgert College of Business", nullptr));
        comboBox_colleges->setItemText(4, QCoreApplication::translate("studentForm", "College of Education", nullptr));
        comboBox_colleges->setItemText(5, QCoreApplication::translate("studentForm", "Marieb College of Health & Human Services", nullptr));
        comboBox_colleges->setItemText(6, QCoreApplication::translate("studentForm", "Other - Please Specify", nullptr));

        label_other->setText(QCoreApplication::translate("studentForm", "Other:", nullptr));
        label_gradYear->setText(QCoreApplication::translate("studentForm", "Graduation Year:", nullptr));
        comboBox_gradYear->setItemText(0, QCoreApplication::translate("studentForm", "- Please Select -", nullptr));
        comboBox_gradYear->setItemText(1, QCoreApplication::translate("studentForm", "2024", nullptr));
        comboBox_gradYear->setItemText(2, QCoreApplication::translate("studentForm", "2025", nullptr));
        comboBox_gradYear->setItemText(3, QCoreApplication::translate("studentForm", "2026", nullptr));
        comboBox_gradYear->setItemText(4, QCoreApplication::translate("studentForm", "2027", nullptr));
        comboBox_gradYear->setItemText(5, QCoreApplication::translate("studentForm", "2028", nullptr));

        pushButton_createStudent->setText(QCoreApplication::translate("studentForm", "Create", nullptr));
        pushButton_cancelStudent->setText(QCoreApplication::translate("studentForm", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class studentForm: public Ui_studentForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTFORM_H
