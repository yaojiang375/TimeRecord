#ifndef GLOABLE_H
#define GLOABLE_H
#include <QString>
#include <QTextCodec>

#define SETGBK(function) \
     local=QTextCodec::codecForLocale();\
     codec=QTextCodec::codecForName("GBK");\
    QTextCodec::setCodecForLocale(codec);\
    QTextCodec::setCodecForTr(codec);\
    QTextCodec::setCodecForCStrings(codec);\
    function;\
    QTextCodec::setCodecForLocale(local);\
    QTextCodec::setCodecForTr(local);\
    QTextCodec::setCodecForCStrings(local);

#define SETUTF(function) \
local=QTextCodec::codecForLocale();\
codec=QTextCodec::codecForName("utf-8");\
QTextCodec::setCodecForLocale(codec);\
QTextCodec::setCodecForTr(codec);\
QTextCodec::setCodecForCStrings(codec);\
function;\
QTextCodec::setCodecForLocale(local);\
QTextCodec::setCodecForTr(local);\
QTextCodec::setCodecForCStrings(local);
typedef struct
{
    QString loglogo ;
    QString timelogo ;
    QString returnlogo;
    QString GTDFilename;
    QString sumFilename;
    bool     AIlogo;
} globalvalue;


#endif // GLOABLE_H
