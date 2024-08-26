#ifndef INFORMATION_H
#define INFORMATION_H

#include <QWidget>
#include <QPaintEvent>

namespace Ui {
class information;
}

class information : public QWidget
{
    Q_OBJECT

public:
    explicit information(QWidget *parent = nullptr);
    ~information();

signals:
    void goback();

protected:
    void paintEvent(QPaintEvent *event) override; // 声明 paintEvent 方法

private slots:
    void on_pushButton_clicked();

private:
    Ui::information *ui;
};

#endif // INFORMATION_H
