#ifndef USERMGR_H
#define USERMGR_H
#include <QObject>
#include <memory>
#include "userdata.h"
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

    bool IsLoadChatFin();//新添加
    QString GetIcon();
    void AppendApplyList(QJsonArray array);
    void AppendFriendList(QJsonArray array);
    std::vector<std::shared_ptr<FriendInfo>> GetChatListPerPage();
    std::vector<std::shared_ptr<FriendInfo>> GetConListPerPage();
    void UpdateChatLoadedCount();
    void UpdateContactLoadedCount();
    bool AlreadyApply(int uid);
    bool CheckFriendById(int uid);
    void AddFriend(std::shared_ptr<AuthRsp> auth_rsp);
    void AddFriend(std::shared_ptr<AuthInfo> auth_info);
    void AddApplyList(std::shared_ptr<ApplyInfo> app);
    std::shared_ptr<FriendInfo> GetFriendById(int uid);
    void AppendFriendChatMsg(int friend_id,std::vector<std::shared_ptr<TextChatData>>);
    std::shared_ptr<UserInfo> GetUserInfo();
    void SetUserInfo(std::shared_ptr<UserInfo> user_info);
        int GetUid();
        QString GetName();
        std::vector<std::shared_ptr<ApplyInfo>> GetApplyList();
        bool IsLoadConFin();

private:
    UserMgr();
    QString _name;
    QString _token;
    int _uid;
    std::shared_ptr<UserInfo> _user_info;
    std::vector<std::shared_ptr<ApplyInfo>> _apply_list;
    std::vector<std::shared_ptr<FriendInfo>> _friend_list;
    QMap<int, std::shared_ptr<FriendInfo>> _friend_map;
    int _chat_loaded;
    int _contact_loaded;
public slots:
    void SlotAddFriendRsp(std::shared_ptr<AuthRsp> rsp);
    void SlotAddFriendAuth(std::shared_ptr<AuthInfo> auth);
};

#endif // USERMGR_H
