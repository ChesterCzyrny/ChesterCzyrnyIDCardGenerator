#ifndef STUDENTCARDDISPLAY_H
#define STUDENTCARDDISPLAY_H

#include <QDialog>

namespace Ui {
class studentCardDisplay;
}

class studentCardDisplay : public QDialog
{
    Q_OBJECT

public:

    QString college, id, name, year;

    void setInfo(QString &tempCollege, QString &tempId, QString &tempName, QString &tempYear);

    explicit studentCardDisplay(QWidget *parent = nullptr);
    ~studentCardDisplay();

private:
    Ui::studentCardDisplay *ui;
};

#endif
