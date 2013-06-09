#ifndef WRONG_H
#define WRONG_H
#include <QString>
#include <QDialog>

namespace Ui {
class WRONG;
}

class WRONG : public QDialog
{
    Q_OBJECT
    
public:
    explicit WRONG(QWidget *parent ,QString display);
    ~WRONG();
    
private slots:


    void on_pushButton_clicked();

private:
    Ui::WRONG *ui;
};

#endif // WRONG_H
