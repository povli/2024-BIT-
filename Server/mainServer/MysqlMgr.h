//
// Created by user on 24-8-23.
//

#ifndef MYSQLMGR_H
#define MYSQLMGR_H



#include "const.h"
#include "MysqlDao.h"
#include "Singleton.h"
#include <vector>

class MysqlMgr: public Singleton<MysqlMgr>
{
    friend class Singleton<MysqlMgr>;
public:
    ~MysqlMgr();
    int RegUser(const std::string& name, const std::string& email,  const std::string& pwd);
    bool CheckEmail(const std::string& name, const std::string & email);
    bool UpdatePwd(const std::string& name, const std::string& email);
    bool CheckPwd(const std::string& name, const std::string& pwd, UserInfo& userInfo);
    bool AddFriendApply(const int& from, const int& to);
    bool GetGuahaoList(int doctor_uid,
    std::vector<std::shared_ptr<paintInfobase>>& baseList,
    std::vector<std::shared_ptr<paintInfocheck>>& checkList,
    std::vector<std::shared_ptr<paintInfochufang>>& chufangList);
    bool AuthFriendApply(const int& from, const int& to);
    bool AddFriend(const int& from, const int& to, std::string back_name);
    bool UpdateDoctorInfo(int id, const std::string& name, const std::string& email, const std::string& department, const std::string& intr,const std::shared_ptr<int> &department_id);
    std::shared_ptr<UserInfo> GetUser(int uid);
    std::shared_ptr<UserInfo> GetUser(std::string name);
    bool GetApplyList(int touid, std::vector<std::shared_ptr<ApplyInfo>>& applyList, int begin, int limit=10);
    bool GetFriendList(int self_id, std::vector<std::shared_ptr<UserInfo> >& user_info);
    std::shared_ptr<DoctorInfo>  GetDoctor(int id);
private:
    MysqlMgr();
    MysqlDao  _dao;
};


#endif //MYSQLMGR_H
