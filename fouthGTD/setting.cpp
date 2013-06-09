#include "gloable.h"//我是全局变量
#include "readsetting.h"
#include "setting.h"
#include "ui_setting.h"
#include <QFile>
#include <QTextFrame>
#include <QTextBlock>
#include <QTextStream>
#include <QDateTime>
#include <QFileDialog>
#include <QDir>
setting::setting(QWidget *parent,globalvalue *a) :
    QDialog(parent),aparent(parent),global(a),
    ui(new Ui::setting)
{
    ui->setupUi(this);
    ui->label->hide();
    ui->label_2->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->label_5->hide();
    QDir tasdasd;//临时一用
    if(tasdasd.exists("./ini"))
    {

    }
    else
    {
        tasdasd.mkdir("./ini");

    }
}

setting::~setting()
{
    delete ui;
}

void setting::on_pushButton_2_clicked()
{
    ui->label->hide();
    ui->label_2->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->label_5->hide();
    this->hide();
    readsetting(global);
    aparent->show();
}

void setting::on_pushButton_3_clicked()
{
    QTextDocument *document = ui->textEdit->document();
    QTextBlock Block = document->firstBlock();
    QFile  AIrecord("./ini/AI.txt");
    AIrecord.open(QIODevice::Append|QIODevice::Text);//必须要有文本模式才能自动换行，参考http://www.oschina.net/question/234345_52662
    qDebug("AI is open = %d",AIrecord.isOpen());
    QTextStream recordstream(&AIrecord);
    QDateTime time;
    time = time.currentDateTime();
    recordstream<<"//"<<"记录时间"<<time.toString("yyyy/MM/dd hh:mm:ss")<<"\n";
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
    ui->label->show();

    QString str2;
    str2.setNum(t);

    ui->label->setText(trUtf8("成功录入")+str2+trUtf8("条记录"));
    document->clear();
}

void setting::on_pushButton_4_clicked()
{
    QFile a("./AI.txt");
    a.resize(0);
    a.close();
    ui->label->show();
    ui->label->setText(trUtf8("AI配置文件已删除"));
}

void setting::on_save_clicked()//分类时间统计代号
{
    QTextDocument *document = ui->textEdit_2->document();
    QTextBlock Block = document->firstBlock();
    QFile  AIrecord("./ini/midsetting.txt");
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
    ui->label->show();

    QString str2;
    str2.setNum(t);

    ui->label_2->setText(trUtf8("成功录入")+str2+trUtf8("条记录"));
    document->clear();

}

void setting::on_reSetting_clicked()
{
    QFile a("./ini/midsetting.txt");
    a.resize(0);
    a.close();
    ui->label_2->show();
    ui->label_2->setText(trUtf8("AI配置文件已删除"));
}

void setting::on_pushButton_5_clicked()
{
    QFile  AIrecord("./ini/logo.txt");
    AIrecord.open(QIODevice::WriteOnly|QIODevice::Text);
    qDebug("midsetting is open = %d",AIrecord.isOpen());
    QTextStream recordstream(&AIrecord);
    QString buf;
    if(ui->logo_1->text().length()==0)
    {
        buf=trUtf8("。\n");//输出字符串时要用trUtf8进行转换，否则会输出乱码。
    }
    else
    {
        buf+=ui->logo_1->text()+"\n";
    }
    if(ui->logo_2->text().length()==0)
    {
        buf+=trUtf8("！\n");
    }
    else
    {
        buf+=ui->logo_2->text()+"\n";
    }
    if(ui->logo_3->text().length()==0)
    {
        buf+=trUtf8("，\n");
    }
    else
    {
        buf+=ui->logo_3->text()+"\n";
    }
    recordstream<<buf;
    ui->label_3->show();
    ui->label_3->setText(trUtf8("保存成功"));
    AIrecord.close();
}

void setting::on_pushButton_6_clicked()
{
    QFile a("./ini/logo.txt");
    a.resize(0);
    a.close();
    ui->label_3->show();
    ui->label_3->setText(trUtf8("标记符配置文件已删除"));
}

void setting::on_pushButton_clicked()
{
    QFile localGTD("./ini/localGTD.txt");
    localGTD.open(QIODevice::WriteOnly|QIODevice::Text);
    localGTD.resize(0);
    QTextStream a(&localGTD);
    QString GTFilename = QFileDialog::getOpenFileName(this,trUtf8("打开文件"),"C:",trUtf8("GTD记录文件(*csv);;所有文件(**)"));//&&话说QT中有全局变量吗？
    a<<GTFilename;
    localGTD.close();
    ui->label_4->show();
    ui->label_4->setText(trUtf8("默认GTD文件位置已保存"));
}

void setting::on_pushButton_10_clicked()
{
    QFile a("./ini/localGTD.txt");
    a.resize(0);
    a.close();
    ui->label_4->show();
    ui->label_4->setText(trUtf8("GTD位置已清空"));
}

void setting::on_pushButton_8_clicked()
{
    QFile sumGTD("./ini/sumGTD.txt");
    sumGTD.open(QIODevice::WriteOnly|QIODevice::Text);
    sumGTD.resize(0);
    QTextStream a(&sumGTD);
    QString suFilename = QFileDialog::getOpenFileName(this,trUtf8("打开文件"),"C:",trUtf8("GTD汇总文件(*xls *xlsx);;所有文件(**)"));//&&话说QT中有全局变量吗？
    a<<suFilename;
    sumGTD.close();
    ui->label_5->show();
    ui->label_5->setText(trUtf8("汇总文件位置已保存"));
}

void setting::on_pushButton_9_clicked()
{
    QFile a("./ini/sumGTD.txt");
    a.resize(0);
    a.close();
    ui->label_5->show();
    ui->label_5->setText(trUtf8("汇总文件位置已清空"));
}
