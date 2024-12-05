#ifndef FACULTYFORM_H
#define FACULTYFORM_H

#include <QDialog>
#include <QString>

namespace Ui {
class facultyForm;
}

class facultyForm : public QDialog
{
    Q_OBJECT

public:

    QString tempCollege, tempPosition, transferName, tempYear;

    void sendName(QString &tempName);

    explicit facultyForm(QWidget *parent = nullptr);
    ~facultyForm();

private slots:
    void on_pushButton_cancel_clicked();

    void on_pushButton_create_clicked();

    void on_comboBox_facultyColleges_currentIndexChanged(int index);

private:
    Ui::facultyForm *ui;
};

#endif
