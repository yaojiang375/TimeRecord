/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created: Sun Jun 9 20:49:11 2013
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setting
{
public:
    QPushButton *pushButton_7;
    QPushButton *pushButton_2;
    QToolBox *toolBox;
    QWidget *page_3;
    QTextEdit *textEdit;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label;
    QWidget *localGTD;
    QPushButton *pushButton;
    QPushButton *pushButton_10;
    QLabel *label_4;
    QWidget *page_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLabel *label_5;
    QWidget *page;
    QPushButton *save;
    QPushButton *reSetting;
    QTextEdit *textEdit_2;
    QLabel *label_2;
    QWidget *page_2;
    QLineEdit *logo_1;
    QLineEdit *logo_2;
    QLineEdit *logo_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *label_3;

    void setupUi(QDialog *setting)
    {
        if (setting->objectName().isEmpty())
            setting->setObjectName(QString::fromUtf8("setting"));
        setting->resize(460, 411);
        pushButton_7 = new QPushButton(setting);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(330, 280, 75, 23));
        pushButton_2 = new QPushButton(setting);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(330, 350, 75, 23));
        toolBox = new QToolBox(setting);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setGeometry(QRect(30, 10, 261, 401));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 261, 271));
        textEdit = new QTextEdit(page_3);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(20, 30, 211, 191));
        pushButton_3 = new QPushButton(page_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 240, 71, 31));
        pushButton_4 = new QPushButton(page_3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(140, 240, 71, 31));
        label = new QLabel(page_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(20, 10, 211, 21));
        label->setMouseTracking(false);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8(""));
        toolBox->addItem(page_3, QString::fromUtf8("\346\231\272\350\203\275\346\227\266\351\227\264\345\210\206\347\261\273"));
        localGTD = new QWidget();
        localGTD->setObjectName(QString::fromUtf8("localGTD"));
        localGTD->setGeometry(QRect(0, 0, 261, 271));
        pushButton = new QPushButton(localGTD);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 50, 160, 70));
        pushButton->setStyleSheet(QString::fromUtf8(""));
        pushButton_10 = new QPushButton(localGTD);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(90, 170, 75, 23));
        label_4 = new QLabel(localGTD);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 10, 161, 21));
        toolBox->addItem(localGTD, QString::fromUtf8("\351\273\230\350\256\244GTD\346\226\207\344\273\266\344\275\215\347\275\256"));
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        page_5->setGeometry(QRect(0, 0, 261, 271));
        pushButton_8 = new QPushButton(page_5);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(50, 30, 160, 70));
        pushButton_9 = new QPushButton(page_5);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(90, 150, 75, 23));
        label_5 = new QLabel(page_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 10, 161, 21));
        toolBox->addItem(page_5, QString::fromUtf8("\351\273\230\350\256\244\346\261\207\346\200\273\346\226\207\344\273\266\344\275\215\347\275\256"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 261, 271));
        save = new QPushButton(page);
        save->setObjectName(QString::fromUtf8("save"));
        save->setGeometry(QRect(30, 260, 75, 23));
        reSetting = new QPushButton(page);
        reSetting->setObjectName(QString::fromUtf8("reSetting"));
        reSetting->setGeometry(QRect(150, 260, 75, 23));
        textEdit_2 = new QTextEdit(page);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(30, 20, 201, 221));
        textEdit_2->setAutoFillBackground(false);
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, -1, 201, 21));
        toolBox->addItem(page, QString::fromUtf8("\345\210\206\347\261\273\347\273\237\350\256\241\344\273\243\345\217\267\350\256\276\347\275\256"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 261, 271));
        logo_1 = new QLineEdit(page_2);
        logo_1->setObjectName(QString::fromUtf8("logo_1"));
        logo_1->setGeometry(QRect(30, 70, 181, 21));
        logo_2 = new QLineEdit(page_2);
        logo_2->setObjectName(QString::fromUtf8("logo_2"));
        logo_2->setGeometry(QRect(30, 100, 181, 21));
        logo_3 = new QLineEdit(page_2);
        logo_3->setObjectName(QString::fromUtf8("logo_3"));
        logo_3->setGeometry(QRect(30, 130, 181, 21));
        pushButton_5 = new QPushButton(page_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 190, 75, 23));
        pushButton_6 = new QPushButton(page_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(150, 190, 75, 23));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 20, 161, 31));
        toolBox->addItem(page_2, QString::fromUtf8("\350\256\260\345\275\225\346\240\207\350\257\206\347\254\246\350\256\276\347\275\256"));

        retranslateUi(setting);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(setting);
    } // setupUi

    void retranslateUi(QDialog *setting)
    {
        setting->setWindowTitle(QApplication::translate("setting", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("setting", "\345\270\256\345\212\251", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("setting", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("setting", "\346\267\273\345\212\240\350\277\233\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("setting", "\351\207\215\347\275\256", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("setting", "\346\231\272\350\203\275\346\227\266\351\227\264\345\210\206\347\261\273", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("setting", "\351\273\230\350\256\244GTD\346\226\207\344\273\266\344\275\215\347\275\256", 0, QApplication::UnicodeUTF8));
        pushButton_10->setText(QApplication::translate("setting", "\351\207\215\347\275\256", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
        toolBox->setItemText(toolBox->indexOf(localGTD), QApplication::translate("setting", "\351\273\230\350\256\244GTD\346\226\207\344\273\266\344\275\215\347\275\256", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("setting", "\351\273\230\350\256\244\346\261\207\346\200\273\346\226\207\344\273\266\344\275\215\347\275\256", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("setting", "\351\207\215\347\275\256", 0, QApplication::UnicodeUTF8));
        label_5->setText(QString());
        toolBox->setItemText(toolBox->indexOf(page_5), QApplication::translate("setting", "\351\273\230\350\256\244\346\261\207\346\200\273\346\226\207\344\273\266\344\275\215\347\275\256", 0, QApplication::UnicodeUTF8));
        save->setText(QApplication::translate("setting", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        reSetting->setText(QApplication::translate("setting", "\351\207\215\347\275\256", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("setting", "\345\210\206\347\261\273\347\273\237\350\256\241\344\273\243\345\217\267\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        logo_1->setInputMask(QString());
        logo_1->setText(QString());
        logo_1->setPlaceholderText(QApplication::translate("setting", "\346\227\266\351\227\264\350\256\260\345\275\225\346\240\207\350\257\206\347\254\246\357\274\214\351\273\230\350\256\244\344\270\272\342\200\234\343\200\202\342\200\235", 0, QApplication::UnicodeUTF8));
        logo_2->setInputMask(QString());
        logo_2->setText(QString());
        logo_2->setPlaceholderText(QApplication::translate("setting", "\351\232\217\346\211\213\350\256\260\346\240\207\350\257\206\347\254\246\357\274\214\351\273\230\350\256\244\344\270\272\342\200\234\357\274\201\342\200\235", 0, QApplication::UnicodeUTF8));
        logo_3->setInputMask(QString());
        logo_3->setText(QString());
        logo_3->setPlaceholderText(QApplication::translate("setting", "\351\201\227\345\277\230\350\256\260\345\217\267\357\274\214\351\273\230\350\256\244\342\200\234\357\274\214\342\200\235", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("setting", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("setting", "\351\207\215\347\275\256", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("setting", "\350\256\260\345\275\225\346\240\207\350\257\206\347\254\246\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class setting: public Ui_setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
