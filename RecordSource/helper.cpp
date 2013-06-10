#include "helper.h"
#include "ui_helper.h"

helper::helper(QString display, QWidget *parent) :
    QDialog(parent),save(parent),
    ui(new Ui::helper)
{
    ui->setupUi(this);
    ui->helperBrowser->setText(display);
}

helper::~helper()
{
    delete ui;
}

void helper::on_returnButton_clicked()
{
    save->show();
    this->hide();
}
