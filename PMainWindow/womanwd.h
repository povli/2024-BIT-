#ifndef WOMANWD_H
#define WOMANWD_H

#include <QWidget>

namespace Ui {
class WomanWd;
}

class WomanWd : public QWidget
{
    Q_OBJECT

public:
    explicit WomanWd(QWidget *parent = nullptr);
    ~WomanWd();

private:
    Ui::WomanWd *ui;
};

#endif // WOMANWD_H
