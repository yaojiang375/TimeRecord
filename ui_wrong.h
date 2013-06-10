/********************************************************************************
** Form generated from reading UI file 'wrong.ui'
**
** Created: Sun Jun 9 20:49:11 2013
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRONG_H
#define UI_WRONG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_WRONG
{
public:
    QPushButton *pushButton;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *WRONG)
    {
        if (WRONG->objectName().isEmpty())
            WRONG->setObjectName(QString::fromUtf8("WRONG"));
        WRONG->resize(320, 240);
        pushButton = new QPushButton(WRONG);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 180, 75, 23));
        textBrowser = new QTextBrowser(WRONG);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 10, 291, 151));

        retranslateUi(WRONG);

        QMetaObject::connectSlotsByName(WRONG);
    } // setupUi

    void retranslateUi(QDialog *WRONG)
    {
        WRONG->setWindowTitle(QApplication::translate("WRONG", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("WRONG", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WRONG: public Ui_WRONG {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRONG_H
