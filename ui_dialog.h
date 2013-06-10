/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Sun Jun 9 20:49:11 2013
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *reset;
    QTextEdit *textEdit;
    QPushButton *cancel;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *copyButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(640, 480);
        reset = new QPushButton(Dialog);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setGeometry(QRect(250, 50, 91, 41));
        textEdit = new QTextEdit(Dialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(150, 130, 291, 271));
        cancel = new QPushButton(Dialog);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(480, 380, 75, 23));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(480, 330, 75, 23));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 50, 91, 41));
        copyButton = new QPushButton(Dialog);
        copyButton->setObjectName(QString::fromUtf8("copyButton"));
        copyButton->setGeometry(QRect(350, 50, 91, 41));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        reset->setText(QApplication::translate("Dialog", "\347\224\237\346\210\220\347\273\237\350\256\241\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        cancel->setText(QApplication::translate("Dialog", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Dialog", "\345\270\256\345\212\251", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Dialog", "\346\270\205\345\261\217", 0, QApplication::UnicodeUTF8));
        copyButton->setText(QApplication::translate("Dialog", "\345\244\215\345\210\266\347\273\237\350\256\241\347\273\223\346\236\234", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
