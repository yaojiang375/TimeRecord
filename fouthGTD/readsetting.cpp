#include "readsetting.h"
#include "gloable.h"//我是全局变量
#include <QFile>
#include <QTextStream>

void readsetting(globalvalue* global)
{
    QFile setting("./ini/logo.txt");
    setting.open(QIODevice::ReadOnly);
    qDebug("4isopen = %d",setting.isOpen());
    QTextStream setting2(&setting);
    if(setting.isOpen())
    {
    global->timelogo = setting2.readLine();
    global->loglogo  = setting2.readLine();
    global->returnlogo=setting2.readLine();
    }
    else
    {
        global->loglogo = "！";
        global->timelogo = "。";
        global->returnlogo= "，";
    }
    qDebug("loglogo = %s\ntimelogo = %s\nreturnlogo = %s\n ",qPrintable(global->loglogo),qPrintable(global->timelogo),qPrintable(global->returnlogo));
    setting.close();

    QFile setting3("./ini/checkbox.txt");
    setting3.open(QIODevice::ReadOnly);
    QTextStream setting4(&setting3);
    if(setting3.isOpen())
    {
        global->AIlogo = setting4.readLine().toInt();
    }
    else
    {
        global->AIlogo = 0;
    }
    qDebug("AIlogo = %d",global->AIlogo);
    setting3.close();

    QFile setting5("./ini/localGTD.txt");
    setting5.open(QIODevice::ReadOnly);
    QTextStream setting6(&setting5);
    if(setting5.isOpen())
    {
        global->GTDFilename = setting6.readLine();
    }
    else
    {
        global->GTDFilename = '\0';
    }
    qDebug("GTDFilename = %s",qPrintable(global->GTDFilename) );
    setting5.close();

    QFile setting7("./ini/sumGTD.txt");
    setting7.open(QIODevice::ReadOnly);
    qDebug("sum is open = %d",setting7.isOpen());
    QTextStream setting8(&setting7);
    if(setting7.isOpen())
    {
        global->sumFilename = setting8.readLine();
    }
    else
    {
        global->sumFilename = '\0';
    }
    qDebug("sumFilename = %s",qPrintable(global->sumFilename) );
    setting7.close();
}
