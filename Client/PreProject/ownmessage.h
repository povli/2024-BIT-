#ifndef OWNMESSAGE_H
#define OWNMESSAGE_H

#include <QWidget>

class QLineEdit;
class QPushButton;
class QVBoxLayout;
class QFormLayout;

class OwnMessage : public QWidget {
    Q_OBJECT

public:
    OwnMessage(QWidget *parent = nullptr);

private slots:
    void confirm();
    void goBack();

private:
    QLineEdit *nameEdit;
    QLineEdit *dobEdit;
    QLineEdit *idEdit;
    QLineEdit *phoneEdit;
    QLineEdit *emailEdit;
};

#endif // OWNMESSAGE_H
