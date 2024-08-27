#ifndef OUTWD_H
#define OUTWD_H

#include <QWidget>

namespace Ui {
class OutWd;
}

class OutWd : public QWidget
{
    Q_OBJECT

public:
    explicit OutWd(QWidget *parent = nullptr);
    ~OutWd();
public:
    QString str;

private slots:
    void showdate();
private:
    Ui::OutWd *ui;
};

#endif // OUTWD_H
