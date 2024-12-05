#ifndef STUDENTFORM_H
#define STUDENTFORM_H

#include <QDialog>
#include <QString>

namespace Ui {
class studentForm;
}

class studentForm : public QDialog
{
    Q_OBJECT

public:

    QString transferName, tempID, tempCollege, tempYear;    // Temporary variables for new student info

    void sendName(QString &tempName);

    explicit studentForm(QWidget *parent = nullptr);
    ~studentForm();

private slots:
    void on_pushButton_cancelStudent_clicked();

    void on_pushButton_createStudent_clicked();

    void on_comboBox_colleges_currentIndexChanged(int index);

private:
    Ui::studentForm *ui;
};

#endif
