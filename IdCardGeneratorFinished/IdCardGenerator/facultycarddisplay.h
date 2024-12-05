#ifndef FACULTYCARDDISPLAY_H
#define FACULTYCARDDISPLAY_H

#include <QDialog>

namespace Ui {
class facultyCardDisplay;
}

class facultyCardDisplay : public QDialog
{
    Q_OBJECT

public:

    QString college, name, position, year;

    void setInfo(QString &tempCollege, QString &tempName, QString &tempPosition, QString &tempYear);

    explicit facultyCardDisplay(QWidget *parent = nullptr);
    ~facultyCardDisplay();

private:
    Ui::facultyCardDisplay *ui;
};

#endif
