#ifndef CHANGE_H
#define CHANGE_H

#include <QWidget>

namespace Ui {
class change;
}

class change : public QWidget
{
    Q_OBJECT

public:
    explicit change(QWidget *parent = nullptr);
    ~change();

signals:
    void dataUpdated();  // 信号：数据更新

private slots:
    void on_pushButtonCommit_clicked();  // 按钮点击事件

private:
    Ui::change *ui;
};

#endif // CHANGE_H
