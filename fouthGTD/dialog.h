#ifndef DIALOG_H
#define DIALOG_H
#include "gloable.h"//我是全局变量
#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog(QWidget *parent , globalvalue *global);
    ~Dialog();
    
private slots:
    void on_cancel_clicked();

    void on_reset_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialog *ui;
    QWidget *aparent;
};

#endif // DIALOG_H
