#include "wrong.h"
#include "ui_wrong.h"
#include <QString>
WRONG::WRONG(QWidget *parent,QString display) :
    QDialog(parent),
    ui(new Ui::WRONG)
{
    ui->setupUi(this);
    ui->textBrowser->setText(display);
}

WRONG::~WRONG()
{
    delete ui;
}

void WRONG::on_pushButton_clicked()
{
    exit(0);
}
