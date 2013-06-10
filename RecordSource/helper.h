#ifndef HELPER_H
#define HELPER_H

#include <QDialog>

namespace Ui {
class helper;
}

class helper : public QDialog
{
    Q_OBJECT
    
public:
    explicit helper(QString display,QWidget *parent = 0);
    ~helper();
    
private slots:
    void on_returnButton_clicked();

private:
    Ui::helper *ui;
    QWidget *save;
};

#endif // HELPER_H
