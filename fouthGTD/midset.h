#ifndef MIDSET_H
#define MIDSET_H
#include <QFile>
#include <QMap>
#include <QString>
#include <QTextStream>
class midset
{
public:
    midset(){};
    void read(QString local = "./ini/midsetting.txt")
    {
        QFile file(local);
        file.open(QIODevice::ReadOnly|QIODevice::Text);
        int         i;//分类代号
        QString     record;//代号对应名
        if(file.isOpen())
        {
            QTextStream filein(&file);
            while(!filein.atEnd())
            {
                i = filein.read(1).toInt();
                filein.read(1);
                record = filein.readLine();
                map.insert(i,record);
            }
        }
        return;
    }

  QString displaytext(QString local = "./data/midsetting.txt")
  {
      QString display="\0";
      noname timerecord[10]={0,0};
      QFile file(local);
      int key;
      int hkey;
      int mkey;
      file.open(QIODevice::ReadOnly|QIODevice::Text);
      if(file.isOpen())
      {
          QTextStream filein(&file);
          while(!filein.atEnd())
          {
          filein>>hkey>>buff>>mkey>>buff>>key;
         timerecord[key].h+=hkey;
         timerecord[key].m+=mkey;
          if(timerecord[key].m>60)
          {
             timerecord[key].h+=timerecord[key].m/60;
             timerecord[key].m=timerecord[key].m%60;
          }
          }
          key = 0;
          while(key<10)
          {
              if(map.contains(key)&&map.value(key)!="")
              {
                  QString buf1;
                  QString buf2;
                  display+=map.value(key);
                  display+="\t";
                  display+=buf1.setNum(timerecord[key].h);
                  display+=":";
                  display+=buf2.setNum(timerecord[key].m);
                  display+="\n";
              }
              key++;
          }
          return display;
      }
      qDebug("wrong : can't open the midsetting file ");
      return display;
  }


private:


    typedef struct
    {
        int h;
        int m;
    } noname;
    char buff;
    QMap <int,QString> map;
   //只支持0~9
};






#endif // MIDSET_H
