#ifndef QUIZWD_H
#define QUIZWD_H

#include <QWidget>

namespace Ui {
class quizWd;
}

class quizWd : public QWidget
{
    Q_OBJECT

public:
    explicit quizWd(QWidget *parent = nullptr);
    ~quizWd();

private:
    Ui::quizWd *ui;
};

#endif // QUIZWD_H
