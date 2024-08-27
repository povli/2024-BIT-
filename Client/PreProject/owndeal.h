#ifndef OWNDEAL_H
#define OWNDEAL_H

#include <QWidget>
#include <QPushButton>
#include <QTableView>
#include <QStandardItemModel>
#include <QCloseEvent>

class OwnDeal : public QWidget {
    Q_OBJECT

public:
    OwnDeal(QWidget *parent = nullptr);

signals:
    void back();
private slots:
    void showDetails();
    void goBack();

private:
    void initializeTable();

    QPushButton *backButton;
    QTableView *tableView;
    QStandardItemModel *model;
};

#endif // OWNDEAL_H
