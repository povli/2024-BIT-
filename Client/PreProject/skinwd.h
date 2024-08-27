#ifndef SKINWD_H
#define SKINWD_H

#include <QWidget>

namespace Ui {
class SkinWd;
}

class SkinWd : public QWidget
{
    Q_OBJECT

public:
    explicit SkinWd(QWidget *parent = nullptr);
    ~SkinWd();
public:
    QString str;

private slots:
    void showdate();
private:
    Ui::SkinWd *ui;
};

#endif // SKINWD_H
