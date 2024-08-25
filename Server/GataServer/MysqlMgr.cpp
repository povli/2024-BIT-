//
// Created by user on 24-8-19.
//

#include "MysqlMgr.h"


MysqlMgr::~MysqlMgr() {

}

int MysqlMgr::RegUser(const std::string& name, const std::string& email, const std::string& pwd)
{
    return _dao.RegUser(name, email, pwd);
}

MysqlMgr::MysqlMgr() {
}

bool MysqlMgr::CheckEmail(const std::string& name, const std::string& email) {
    return _dao.CheckEmail(name, email);
}

bool MysqlMgr::UpdatePwd(const std::string& name, const std::string& pwd) {
    return _dao.UpdatePwd(name, pwd);
}

bool MysqlMgr::CheckPwd(const std::string& email, const std::string& pwd, UserInfo& userInfo) {
    return _dao.CheckPwd(email, pwd, userInfo);
}

bool MysqlMgr::UpdateUserDetails(int uid, const std::string& realname, int sex, const std::string& year, const std::string& month, const std::string& data, const std::string& IDcard, const std::string& phone) {
    return _dao.UpdateUserDetails(uid,realname,sex, year, month, data,  IDcard, phone);
}
