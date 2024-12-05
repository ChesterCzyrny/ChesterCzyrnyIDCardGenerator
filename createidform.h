#ifndef CREATEIDFORM_H
#define CREATEIDFORM_H

#include <QDialog>

namespace Ui {
class createIdForm;
}

class createIdForm : public QDialog
{
    Q_OBJECT

public:

    QString fullName; // Create temporary string to hold full name


    explicit createIdForm(QWidget *parent = nullptr);
    ~createIdForm();

private slots:
    void on_pushButton_cancel_clicked();

    void on_pushButton_next_clicked();

private:
    Ui::createIdForm *ui;
};

#endif
