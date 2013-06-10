/********************************************************************************
** Form generated from reading UI file 'helper.ui'
**
** Created: Sun Jun 9 20:49:11 2013
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPER_H
#define UI_HELPER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_helper
{
public:
    QPushButton *returnButton;
    QTextBrowser *helperBrowser;

    void setupUi(QDialog *helper)
    {
        if (helper->objectName().isEmpty())
            helper->setObjectName(QString::fromUtf8("helper"));
        helper->resize(568, 428);
        returnButton = new QPushButton(helper);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(230, 340, 75, 23));
        helperBrowser = new QTextBrowser(helper);
        helperBrowser->setObjectName(QString::fromUtf8("helperBrowser"));
        helperBrowser->setGeometry(QRect(80, 40, 391, 251));

        retranslateUi(helper);

        QMetaObject::connectSlotsByName(helper);
    } // setupUi

    void retranslateUi(QDialog *helper)
    {
        helper->setWindowTitle(QApplication::translate("helper", "Dialog", 0, QApplication::UnicodeUTF8));
        returnButton->setText(QApplication::translate("helper", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class helper: public Ui_helper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPER_H
