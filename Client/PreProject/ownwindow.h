#ifndef OWNWINDOW_H
#define OWNWINDOW_H

#include <QWidget>

class OwnDeal;     // 前向声明
class OwnIllness;  // 前向声明
class OwnMessage;  // 前向声明

class OwnWindow : public QWidget {
    Q_OBJECT

public:
    OwnWindow();
    OwnIllness *illnessWindow = NULL;
    OwnDeal *dealWindow = NULL;
    OwnMessage *messageWindow = NULL;
    ~OwnWindow();

private slots:
    void showOwnIllness();
    void showOwnDeal();
    void showOwnMessage();
};

#endif // OWNWINDOW_H
