#include "gloable.h"//我是全局变量
#include "dialog.h"
#include "ui_dialog.h"
#include <QTextFrame>
#include <QTextBlock>
#include <QDebug>
#include <QFile>
#include <QClipboard>

#include "midset.h"
Dialog::Dialog(QWidget *parent,globalvalue *global) :
    QDialog(parent),aparent(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_cancel_clicked()
{
    this->hide();
    aparent->show();
}

void Dialog::on_reset_clicked()
{
    QTextDocument *document = ui->textEdit->document();
    QTextBlock Block = document->firstBlock();
    QFile  AIrecord("./data/midsetting.txt");
    AIrecord.open(QIODevice::WriteOnly|QIODevice::Text);
    qDebug("midsetting is open = %d",AIrecord.isOpen());
    QTextStream recordstream(&AIrecord);
    Block=Block.next();
    int t=0;
    for(int i = 1;i<document->blockCount();i+=2)
    {
        while(Block.text().length()==0&&i<document->blockCount())
        {
            Block=Block.next();
            i++;
        }
        recordstream<<Block.text()<<"\t";
        Block=Block.next();
        recordstream<<Block.text();
        recordstream<<'\n';
        Block=Block.next();
        t++;
    }
    AIrecord.close();
    midset re;
    re.read();
    QClipboard *clipboard = QApplication::clipboard();
    clipboard->setText(re.displaytext());
    ui->textEdit->setText(re.displaytext());

}

void Dialog::on_pushButton_2_clicked()
{
    ui->textEdit->setText("");
}
