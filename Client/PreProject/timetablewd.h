#ifndef TIMETABLEWD_H
#define TIMETABLEWD_H

#include <QWidget>
#include <QMainWindow>
#include <QCalendarWidget>
#include <QLabel>
#include <QComboBox>
#include <QPushButton>

namespace Ui {
class TimetableWd;
}

class TimetableWd : public QWidget
{
    Q_OBJECT

public:
    explicit TimetableWd(QWidget *parent = nullptr);
    ~TimetableWd();

private:
    Ui::TimetableWd *ui;
private slots:
    void onDateChanged();
    void onTimeSlotChanged();
    void onPushButtonClicked();

private:
    QCalendarWidget *calendarWidget;
    QLabel *dateLabel;
    QComboBox *timeSlotComboBox;
    QPushButton *pushButton;
};

#endif // TIMETABLEWD_H
