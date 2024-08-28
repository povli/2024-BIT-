//
// Created by user on 24-8-23.
//

#include "MysqlMgr.h"


MysqlMgr::~MysqlMgr() {

}

int MysqlMgr::RegUser(const std::string& name, const std::string& email, const std::string& pwd)
{
    return _dao.RegUser(name, email, pwd);
}

bool MysqlMgr::CheckEmail(const std::string& name, const std::string& email) {
    return _dao.CheckEmail(name, email);
}

bool MysqlMgr::UpdatePwd(const std::string& name, const std::string& pwd) {
    return _dao.UpdatePwd(name, pwd);
}

MysqlMgr::MysqlMgr() {
}

bool MysqlMgr::CheckPwd(const std::string& name, const std::string& pwd, UserInfo& userInfo) {
    return _dao.CheckPwd(name, pwd, userInfo);
}

bool MysqlMgr::AddFriendApply(const int& from, const int& to)
{
    return _dao.AddFriendApply(from, to);
}

bool MysqlMgr::AuthFriendApply(const int& from, const int& to) {
    return _dao.AuthFriendApply(from, to);
}

bool MysqlMgr::AddFriend(const int& from, const int& to, std::string back_name) {
    return _dao.AddFriend(from, to, back_name);
}

std::shared_ptr<UserInfo> MysqlMgr::GetUser(int uid)
{
    return _dao.GetUser(uid);
}

std::shared_ptr<UserInfo> MysqlMgr::GetUser(std::string name)
{
    return _dao.GetUser(name);
}
std::shared_ptr<DoctorInfo>  MysqlMgr::GetDoctor(int id) {
    return _dao.GetDoctor(id);
}

bool MysqlMgr::GetApplyList(int touid,
    std::vector<std::shared_ptr<ApplyInfo>>& applyList, int begin, int limit) {

    return _dao.GetApplyList(touid, applyList, begin, limit);
}

bool MysqlMgr::GetGuahaoList(int doctor_uid,
    std::vector<std::shared_ptr<paintInfobase>>& baseList,
    std::vector<std::shared_ptr<paintInfocheck>>& checkList,
    std::vector<std::shared_ptr<paintInfochufang>>& chufangList) {

    return _dao.GetGuahaoList(doctor_uid, baseList, checkList, chufangList);
}

bool MysqlMgr::UpdateDoctorInfo(int id, const std::string &name, const std::string &email, const std::string &department, const std::string &intr,const std::shared_ptr<int> &department_id) {
    return _dao.UpdateDoctorInfo(id, name, email, department, intr,department_id);
}


bool MysqlMgr::GetFriendList(int self_id, std::vector<std::shared_ptr<UserInfo> >& user_info) {
    return _dao.GetFriendList(self_id, user_info);
}
