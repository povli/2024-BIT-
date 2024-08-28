//
// Created by user on 24-8-23.
//

#ifndef DATA_H
#define DATA_H



#include <string>
struct UserInfo {
    UserInfo():name(""), pwd(""),uid(0),email("")/*,nick(""),desc(""),sex(0), icon(""), back("")*/ {}
    std::string name;
    std::string pwd;
    int uid;
    std::string email;
    //std::string nick;
    //std::string desc;
    //int sex;
    //std::string icon;
    //std::string back;
};

struct DoctorInfo {
    //DoctorInfo():
    int id;
    std::string workID;
    std::string name;
    std::string pwd;
    std::string email;
    int sex;
    std::string year;
    std::string month;
    std::string day;
    std::string IDcard;
    std::string phone;
    int department_id;
    std::string intr;
};

struct ApplyInfo {
    ApplyInfo(int uid, std::string name, std::string desc,
        std::string icon, std::string nick, int sex, int status)
        :_uid(uid),_name(name),_desc(desc),
        _icon(icon),_nick(nick),_sex(sex),_status(status){}

    int _uid;
    std::string _name;
    std::string _desc;
    std::string _icon;
    std::string _nick;
    int _sex;
    int _status;
};
struct paintInfobase {
    paintInfobase(int uid, std::string name, std::string email, int sex, std::string age, std::string orderdata, std::string info)
        : _uid(uid), _name(name), _email(email), _sex(sex), _age(age), _orderdata(orderdata), _info(info) {}

    int _uid;
    std::string _name;
    std::string _email;
    int _sex;
    std::string _age;
    std::string _orderdata;
    std::string _info;
};

struct paintInfocheck {
    paintInfocheck(int uid, std::string name, std::string email, int sex, std::string age, std::string orderdata, std::string info, std::string checkresult)
        : _uid(uid), _name(name), _email(email), _sex(sex), _age(age), _orderdata(orderdata), _info(info), _checkresult(checkresult) {}

    int _uid;
    std::string _name;
    std::string _email;
    int _sex;
    std::string _age;
    std::string _orderdata;
    std::string _info;
    std::string _checkresult;
};

struct paintInfochufang {
    paintInfochufang(int uid, std::string name, std::string email, int sex, std::string age, std::string orderdata, std::string info, std::string checkresult, std::string chufang)
        : _uid(uid), _name(name), _email(email), _sex(sex), _age(age), _orderdata(orderdata), _info(info), _checkresult(checkresult), _chufang(chufang) {}

    int _uid;
    std::string _name;
    std::string _email;
    int _sex;
    std::string _age;
    std::string _orderdata;
    std::string _info;
    std::string _checkresult;
    std::string _chufang;
};


#endif //DATA_H
