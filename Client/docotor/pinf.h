#ifndef PINF_H
#define PINF_H

#include <QWidget>
#include <QTableView>
#include <QTableWidgetItem>
#include <QPainter>
#include "pbd.h"
#include <QStandardItemModel>
#include <QVector>

namespace Ui {
class pinf;
}

class pinf : public QWidget
{
    Q_OBJECT

public:
    explicit pinf(QWidget *parent = nullptr);
    ~pinf();
    pbd *windowp = nullptr;

    // 设置每个表格的数据的方法
    void setRecordationData(const QVector<QVector<QString>> &data);
    void setUserData(const QVector<QVector<QString>> &data);
    void setGoodsData(const QVector<QVector<QString>> &data);
    void setStatisticsData(const QVector<QVector<QString>> &data);

signals:
    void goback();

private slots:
    void on_pushButton_clicked();
    void on_tableViewRecordation_2_doubleClicked(const QModelIndex &index);

    //void on_tabWidget_currentChanged(int index);

    void on_tabWidget_tabBarClicked(int index);



private:
    Ui::pinf *ui;
    void setupTableViewStyle(QTableView *tableView);
};

#endif // PINF_H


