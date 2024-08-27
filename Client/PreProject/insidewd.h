#ifndef INSIDEWD_H
#define INSIDEWD_H

#include <QWidget>

namespace Ui {
class InsideWd;
}

class InsideWd : public QWidget
{
    Q_OBJECT

public:
    explicit InsideWd(QWidget *parent = nullptr);
    ~InsideWd();
public:
    QString str;

private slots:
    void showdate();
private:
    Ui::InsideWd *ui;
};

#endif // INSIDEWD_H
