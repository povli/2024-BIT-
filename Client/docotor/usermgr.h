#ifndef USERMGR_H
#define USERMGR_H
#include <QObject>
#include <memory>
#include <singleton.h>

class UserMgr:public QObject,public Singleton<UserMgr>,
        public std::enable_shared_from_this<UserMgr>
{
    Q_OBJECT
public:
    friend class Singleton<UserMgr>;
    ~ UserMgr();
    void SetName(QString name);
    void SetUid(int uid);
    void SetToken(QString token);
    void SetWorkID(QString workID);
    void setEmail(QString email);
    void setPhone(QString phone);
    void setSex(int sex);
    void setYear(QString year);
    void setMonth(QString month);
    void setDay(QString day);
    void setIDcard(QString IDcard);
    void setDepartment_id(int department_id);
    void setIntr(QString intr);
private:
    UserMgr();
    QString _name;
    QString _token;
    int _uid;
    QString _workID;
    QString _email;
    QString _phone;
    int _sex;
    QString _year;
    QString _month;
    QString _day;
    QString _IDcard;
    QString _department_id;
    QString _intr;

};

#endif // USERMGR_H
