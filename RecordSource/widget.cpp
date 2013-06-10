#include "gloable.h"//我是全局变量
#include "readsetting.h"
#include "widget.h"
#include "ui_widget.h"
#include <QProcess>
#include <QStringList>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>

#include <QString>
#include <QDir>
#include <QTextStream>

#include "change.h"
#include "setting.h"
#include "dialog.h"
#include "wrong.h"//输出错误信息


Widget::Widget(QWidget *parent, globalvalue *globalbuf) :
    QWidget(parent),global(globalbuf),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    readsetting(global);
    QDir dir;
    if(dir.exists("./data"))//检测程序文件夹完整性
    {
        qDebug("./data = %d",dir.exists("./data"));
    }
    else
    {
        WRONG *wrong1 = new WRONG(this,trUtf8("抱歉，没能检测到data文件夹，程序可能已经损坏，请重新下载程序"));

        wrong1->exec();
    }
    if(dir.exists("./ini"))
    {
        qDebug("./ini = %d",dir.exists("./ini"));

    }
    else
    {
        WRONG *wrong2 = new WRONG(this,trUtf8("抱歉，没能检测到ini文件夹，程序可能已经损坏，请重新下载程序"));
        wrong2->exec();
    }



if(globalbuf->AIlogo)
{
    ui->checkBox->setChecked(1);
}
codec=QTextCodec::codecForName("GBK");
QTextCodec::setCodecForLocale(codec);
QTextCodec::setCodecForTr(codec);
QTextCodec::setCodecForCStrings(codec);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_setting_clicked()
{
    setting *s = new setting(this,global);
    this->hide();
    s->show();
}

void Widget::on_pushButton_2_clicked()
{
    Dialog *dia= new Dialog(this,global);
    this->hide();
    dia->show();
}

void Widget::on_checkBox_clicked()
{
    QFile t("./ini/checkbox.txt");
    t.open(QIODevice::WriteOnly);
    t.resize(0);
    QTextStream bt(&t);
  //  qDebug("checkbox is open %d",t.isOpen());
    if(ui->checkBox->isChecked())
    {
        bt<<1;
        global->AIlogo = 1;
    }
    else
    {
        bt<<0;
        global->AIlogo = 0;
    }
    t.close();
}

void Widget::on_open_clicked()
{

    if(global->GTDFilename.length()>1)
    {

        GTD timerecord(global->GTDFilename,global);
        QProcess Process;//用于打开GTD文件
        SETGBK(timerecord.fprint(global););


        if(global->sumFilename.length())
        {
            QString fast;
            fast= " start .//data//turn.xls    | start";
            fast+=global->sumFilename;
            system(fast.replace("/","\\").toAscii().data());
        }
        else
        {
            system("start .//data//turn.xls");
        }
    }
    else
    {
        QString GTDFilename = QFileDialog::getOpenFileName(this,trUtf8("打开文件"),"C:",trUtf8("GTD记录文件(*csv);;所有文件(**)"));
        GTD timerecord(GTDFilename,global);
        //qDebug("%s","this is ++++++++++++++++++++");
        timerecord.fprint(global);
        if(global->sumFilename.length())
        {
            QString fast;
            fast= " start .//data//turn.xls    | start";
            fast+=global->sumFilename;
            system(fast.replace("/","\\").toAscii().data());
        }
        else
        {
            system("start .//data//turn.xls");
        }
    }
}
