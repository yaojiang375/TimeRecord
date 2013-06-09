#ifndef CHANGE_H
#define CHANGE_H
#include "gloable.h"//我是全局变量
#include <QFile>
#include <QList>
#include <QDir>
#include <QMap>
#include <QTextStream>
#include <cstdlib>
#include <fstream>
#include <QString>
#include <QDebug>
#include "wrong.h"//输出错误信息
QTextCodec *local,*codec;//$此处相当有问题，涉及多重定义
class GTD
{
public:

    GTD(QString Filename,globalvalue *global)
    {
        read(Filename,global);
    }
    void read(QString Filename,globalvalue *global)
    {
        QList<key>::size_type Firstpos =  0;
        QList<key>::size_type Secondpos = 0;
        qDebug("%s\n\n",Filename.toAscii().data());
        QFile in(Filename);
        in.open(QIODevice::ReadOnly);
        if(in.isOpen()!=1)
        {
            qDebug()<<"GTD文件打开失败";
            return ;
        }
        QTextStream into(&in);
        name = into.readAll();
        i= 0;

        while((Secondpos = name.indexOf(",",Firstpos)) != -1)
        {
            i++;

            switch(i%8)
            {
            case 0:
                if(record.log=="submit")
                {
                    record.log = name.mid(Firstpos,Secondpos-Firstpos-5);//要求timelog只能是一个字符
                    if(record.log.mid(0,1).indexOf(global->timelogo)!=-1)
                    {
                        if(record.log.mid(0,2).indexOf(global->returnlogo)!= -1)//QT中半角全角字符均视为一个字符，或者是utf-8编码的问题？
                        {
                            int cor = record.log.indexOf(global->returnlogo);
                           int wow = record.log.indexOf(global->loglogo);
                            bufferrecord.time = record.log.mid(cor+1,5);
                            *(bufferrecord.time.begin()+2)=':';
                            bufferrecord.log = record.log.mid(cor+6,wow-cor-6);
                            list.push_back(bufferrecord);
                            record.log.remove(cor,wow-cor+1);
                        }
                        record.log.remove(0,1);
                        list.push_back(record);
                    }

                    if(record.log.mid(0,3).indexOf(global->loglogo)!=-1)
                    {
                        loglist.push_back(record);
                    }

                } Secondpos-=4; break;
            case 2:
                if(name.mid(Firstpos,6).indexOf("submit")==-1&&name.mid(Firstpos,6).indexOf("delive")==-1)
                {
                    SETUTF(qDebug("出现问题，在%s处出现多余的半角逗号，请删除后再运行本程序",qPrintable(name.mid(Firstpos-10,26))));       //这个bug太难发现了啊，移动居然会用可能用半角“，”我勒个去。。。此时应该弹出一个错误提示框013. 6. 2  0:47,109,"尊敬的客户，您已成功办理自动-5元/月，您设置的WLAN登录密码为565,请在中国移动WLAN网络覆盖区域登录使用，感谢您的支持!"
                    QString wro = "出现问题，在"+(name.mid(Firstpos-10,26))+"处出现多余的半角逗号，请删除后再运行本程序\n删除方法：在GTD文件上点击右键——打开方式——选择用记事本打开，然后 编辑——查找——输入提示框中的语句定位到那一行，删除掉多余的半角“,”，关闭，保存";
                    WRONG *multicomma=new WRONG(0,QObject::trUtf8(wro.toAscii().data()));//不会说冗余
                           multicomma->exec();
                }
                else
                {
                    record.log = name.mid(Firstpos,6);
                }
                break;
            case 6:if(record.log=="submit")
                {
                    record.time = name.mid(Firstpos+11,5);
                    while((k = record.time.indexOf(" "))!=-1)
                    {
                        record.time.remove(k,1);
            //            qDebug("i = %d",k);
                        //qDebug("log = %s",qPrintable(record.log));
                    }

                }break;
            }
            Firstpos = Secondpos +1;
        }

        fenge = QObject::trUtf8("\n\n待办记事\n");
    }
    void readAIrecord(QString Filein= "./ini/AI.txt")//读取智能时间分类记录
    {
        QFile rre(Filein);
        rre.open(QIODevice::ReadOnly);
        QTextStream in(&rre);
        QString buf1;
        QString buf2;

        buf1 =in.readLine();
        int why = 5;
      //  qDebug("rre = %d\n",rre.isOpen());
        while(!in.atEnd())
        {
            buf2 =in.readLine();

            if(buf2.indexOf("//") == -1&&buf1.indexOf("//") == -1)
            {
                  SETUTF(why =buf2.indexOf("？"););//进行格式转换，否则无法识别，注：凡是涉及到indexof的部分都要用utf8格式，否则查找不到，补注：因为读取时用的utf
               // qDebug("%d",why);
                if(why)
                {
                    //首字符不是问号,应该以问号为准

                    SETUTF(     QString keystring = buf2.mid((buf2.indexOf("？"))+1,(buf2.indexOf("\t"))-(buf2.indexOf("？"))-1);
                                int keyint    =    buf2.mid(buf2.indexOf("\t")+1,1).toInt()
                            );

                     SETGBK(            map.insert(keystring,keyint);\


                     //qDebug("%s\n然后，buf2.indexof=%d\n",qPrintable(buf2),buf2.indexOf("？"));qDebug("%sagg  = %d\n",qPrintable(buf2.mid((buf2.indexOf("？"))+1,(buf2.indexOf("\t"))-(buf2.indexOf("？"))-1)),buf2.mid(buf2.indexOf("\t")+1,1).toInt());

);
                }
                else
                {
                    SETUTF(     QString keystring = buf1.mid((buf1.indexOf("？"))+1,(buf1.indexOf("\t"))-(buf1.indexOf("？"))-1);
                                int keyint    =    buf2.mid(buf2.indexOf("\t")+1,1).toInt()
                            );

                              SETGBK(   map.insert(keystring,keyint);\

                           //qDebug("%s cdd = %d\n",qPrintable(buf1.mid((buf1.indexOf("？"))+1,(buf1.indexOf("\t"))-(buf1.indexOf("？"))-1)),buf1.mid(buf2.indexOf("\t")+1,1).toInt());
);
                }
            }
            else
            {

            }

            buf1=buf2;
        }
        rre.close();
    }
    void fprint(globalvalue *global,QString Save = "./data/turn.xls")
    {


        QFile buf(Save);
        buf.open(QIODevice::WriteOnly);
        if(buf.exists(Save))
        {

        }
            else
        {
            buf.close();
            buf.open(QIODevice::WriteOnly);
        }
        buf.resize(0);
        buf.close();
        if(buf.exists("./ini/AI.txt"))
        {
             readAIrecord();//$，没有文件怎么办?
        }
        else
        {
            qDebug("%s","ini/AI.txt not exist");
        }
        QFile outbuf(Save);
        outbuf.open(QIODevice::WriteOnly|QIODevice::Text);
        QTextStream out(&outbuf);
        QString str;
        QString str2;
        QString str3;
        QList<key>::const_iterator it=list.begin();
        i = 1;
        while(it != list.end())
        {

       //     qDebug("list.count() = %d",list.count());
                name=((*it).time);
                if(global->AIlogo)
                {
                    name+="\t"+it->log+"\t=if(l"+str.setNum(i)+">0,l"+str.setNum(i)+",l"+str.setNum(i)+"+24)\t";
                                 //$如果没有map如何？
                    it++;//$2013年6月9日01:55:02，关机前注：此处不成功，待改进。如何进一步改进识别效果？比如当下一个记录更新前一条记录时，自动更正前面的记录
                    if(it!=list.end())
                    {
                    SETUTF(int aks =it->log.indexOf("？") );
                    if(aks)
                    {
                        SETUTF(QString keystring = it->log.mid(0,it->log.indexOf("？")));//为indexof做临时转换
                        if(map.contains(keystring ))
                        {
                            name += str3.setNum(map.value(keystring ))+"\t";
                        }
                        else
                        {
                            name += "\t";
                        }
                        it--;
                    }
                    else
                    {
                                 it--;
                                 SETUTF(QString keystring = it->log.mid(it->log.indexOf("？")+1,-1));//为indexof做临时转换
                                 if(map.contains(keystring))
                                 {
                                     name += str3.setNum(map.value(keystring))+"\t";
                                 }
                                 else
                                 {
                                     name += "\t";
                                 }
                    }

                    }
                    else//为处理最后一个值专门设立
                    {
                        it--;
                                 SETUTF(QString keystring = it->log.mid(it->log.indexOf("？")+1,-1));//为indexof做临时转换
                                 if(map.contains(keystring))
                                 {
                                     name += str3.setNum(map.value(keystring))+"\t";
                                 }
                                 else
                                 {
                                     name += "\t";
                                 }
                    }          
                                 name+="=if(l"+str.setNum(i)+">0,\" \",\"#####\")\t";
                                 name+="\t\t\t\t\t\t=A"+str.setNum(i)+"-A"+str2.setNum(i-1)+"\t\n";
                }
                else
                {
                name+=(      "\t"+it->log+"\t=if(l"+str.setNum(i)+">0,l"+str.setNum(i)+",l"+str.setNum(i)+"+24)\t\t=if(l"+str.setNum(i)+">0,\" \",\"#####\")\t\t\t\t\t\t\t=A"+str.setNum(i)+"-A"+str2.setNum(i-1)+"\t\n");
                }

                out<<name;

                it++;
                i++;
                    }

            out<<fenge;
            it = loglist.begin();
        while(it != loglist.end())
        {

            out<<it->time<<'\t'<<it->log<<'\t'<<'\n';
            it++;
        }

    }
    private:

    char a[50000];
    int i;
    int k;
    //QTextStream out;
    QMap<QString, int> map;//存放AI记录
    QDir  dir;
    QString savename;
    QString name;
    typedef struct
    {
        QString time;
        QString log;
    }key;
    key record;
    QList<key>  list;
    QList<key>  loglist;
    QString fenge;
    key bufferrecord;
};

#endif // CHANGE_H
