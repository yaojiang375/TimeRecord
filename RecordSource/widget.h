#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "gloable.h"//我是全局变量
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit Widget(QWidget *parent ,globalvalue *globalbuf);
    ~Widget();
    
private slots:
    void on_setting_clicked();

    void on_pushButton_2_clicked();

    void on_checkBox_clicked();

    void on_open_clicked();

private:
    Ui::Widget *ui;
    globalvalue *global;
};

#endif // WIDGET_H
