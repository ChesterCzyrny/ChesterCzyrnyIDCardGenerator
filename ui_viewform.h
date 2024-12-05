/********************************************************************************
** Form generated from reading UI file 'viewform.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWFORM_H
#define UI_VIEWFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ViewForm
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_select;
    QComboBox *comboBox_objects;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_view;
    QPushButton *pushButton_back;

    void setupUi(QDialog *ViewForm)
    {
        if (ViewForm->objectName().isEmpty())
            ViewForm->setObjectName("ViewForm");
        ViewForm->resize(339, 174);
        verticalLayout = new QVBoxLayout(ViewForm);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_select = new QLabel(ViewForm);
        label_select->setObjectName("label_select");

        horizontalLayout->addWidget(label_select);

        comboBox_objects = new QComboBox(ViewForm);
        comboBox_objects->setObjectName("comboBox_objects");

        horizontalLayout->addWidget(comboBox_objects);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_view = new QPushButton(ViewForm);
        pushButton_view->setObjectName("pushButton_view");

        horizontalLayout_2->addWidget(pushButton_view);

        pushButton_back = new QPushButton(ViewForm);
        pushButton_back->setObjectName("pushButton_back");

        horizontalLayout_2->addWidget(pushButton_back);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(ViewForm);

        QMetaObject::connectSlotsByName(ViewForm);
    } // setupUi

    void retranslateUi(QDialog *ViewForm)
    {
        ViewForm->setWindowTitle(QCoreApplication::translate("ViewForm", "Dialog", nullptr));
        label_select->setText(QCoreApplication::translate("ViewForm", "Select Name:", nullptr));
        pushButton_view->setText(QCoreApplication::translate("ViewForm", "View", nullptr));
        pushButton_back->setText(QCoreApplication::translate("ViewForm", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewForm: public Ui_ViewForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWFORM_H
