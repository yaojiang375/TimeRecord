#ifndef SETTING_H
#define SETTING_H
#include "gloable.h"//我是全局变量
#include <QDialog>

namespace Ui {
class setting;
}

class setting : public QDialog
{
    Q_OBJECT
    
public:
    explicit setting(QWidget *parent ,globalvalue *a);
    ~setting();
    
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_save_clicked();

    void on_reSetting_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::setting *ui;
    QWidget *aparent;
    globalvalue *global;
};

#endif // SETTING_H
