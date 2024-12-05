#ifndef VIEWFORM_H
#define VIEWFORM_H

#include <QDialog>

namespace Ui {
class ViewForm;
}

class ViewForm : public QDialog
{
    Q_OBJECT

public:
    explicit ViewForm(QWidget *parent = nullptr);
    ~ViewForm();

private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_view_clicked();

private:
    Ui::ViewForm *ui;
};

#endif // VIEWFORM_H
