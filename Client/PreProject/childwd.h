#ifndef CHILDWD_H
#define CHILDWD_H

#include <QWidget>

namespace Ui {
class ChildWd;
}

class ChildWd : public QWidget
{
    Q_OBJECT

public:
    explicit ChildWd(QWidget *parent = nullptr);
    ~ChildWd();

private:
    Ui::ChildWd *ui;
};

#endif // CHILDWD_H
