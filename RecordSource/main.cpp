#include "gloable.h"//我是全局变量
#include <QApplication>
//读取配置文件
#ifndef QTlocalcodec_H
#define QTlocalcodec_H

#endif
#include "widget.h"
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    globalvalue * global = new globalvalue;
    QTextCodec *local,*codec;


    Widget w(0,global);
    w.show();
    
    return a.exec();
}
