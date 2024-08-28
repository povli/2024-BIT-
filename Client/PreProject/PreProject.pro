QT       += core gui network sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    BubbleFrame.cpp \
    ChatItemBase.cpp \
    ChatView.cpp \
    MessageTextEdit.cpp \
    PictureBubble.cpp \
    TextBubble.cpp \
    adduseritem.cpp \
    applyfriend.cpp \
    applyfrienditem.cpp \
    applyfriendlist.cpp \
    applyfriendpage.cpp \
    authenfriend.cpp \
    basewindow.cpp \
    bookwindow.cpp \
    chatdialog.cpp \
    chatpage.cpp \
    chattingroomwindow.cpp \
    chatuserlist.cpp \
    chatuserwid.cpp \
    chatwindow.cpp \
    childwd.cpp \
    clickedbtn.cpp \
    clickedlabel.cpp \
    clickedoncelabel.cpp \
    contactuserlist.cpp \
    conuseritem.cpp \
    customizeedit.cpp \
    findfaildlg.cpp \
    findsuccessdlg.cpp \
    friendinfopage.cpp \
    friendlabel.cpp \
    global.cpp \
    grouptipitem.cpp \
    homewindow.cpp \
    hospitalizationwindow.cpp \
    httpmgr.cpp \
    insidewd.cpp \
    invaliditem.cpp \
    lineitem.cpp \
    listitembase.cpp \
    loadingdlg.cpp \
    logindialog.cpp \
    main.cpp \
    mainwindow.cpp \
    medicalcaseswd.cpp \
    medicalexpensewd.cpp \
    medicinesearchwindow.cpp \
    misearchsonwd.cpp \
    outwd.cpp \
    owndeal.cpp \
    ownillness.cpp \
    ownmessage.cpp \
    ownwindow.cpp \
    personalinfowindow.cpp \
    personalwindow.cpp \
    pmainwindow.cpp \
    pmainwindowhome.cpp \
    quizwd.cpp \
    registerdialog.cpp \
    resetdialog.cpp \
    searchlist.cpp \
    skinwd.cpp \
    statelabel.cpp \
    statewidget.cpp \
    tcpmgr.cpp \
    timerbtn.cpp \
    timetablewd.cpp \
    userdata.cpp \
    usermgr.cpp \
    womanwd.cpp

HEADERS += \
    BubbleFrame.h \
    ChatItemBase.h \
    ChatView.h \
    ChildDoc.h \
    GlobalData.h \
    InsideDoc.h \
    MedicineItem.h \
    MessageTextEdit.h \
    OutDoc.h \
    PictureBubble.h \
    RegisterDataTransmit.h \
    SkinDoc.h \
    TextBubble.h \
    WomanDoc.h \
    adduseritem.h \
    applyfriend.h \
    applyfrienditem.h \
    applyfriendlist.h \
    applyfriendpage.h \
    authenfriend.h \
    basewindow.h \
    bookwindow.h \
    chatdialog.h \
    chatpage.h \
    chattingroomwindow.h \
    chatuserlist.h \
    chatuserwid.h \
    chatwindow.h \
    childwd.h \
    clickedbtn.h \
    clickedlabel.h \
    clickedoncelabel.h \
    contactuserlist.h \
    conuseritem.h \
    customizeedit.h \
    findfaildlg.h \
    findsuccessdlg.h \
    friendinfopage.h \
    friendlabel.h \
    global.h \
    grouptipitem.h \
    homewindow.h \
    hospitalizationwindow.h \
    httpmgr.h \
    insidewd.h \
    invaliditem.h \
    lineitem.h \
    listitembase.h \
    loadingdlg.h \
    logindialog.h \
    mainwindow.h \
    medicalcaseswd.h \
    medicalexpensewd.h \
    medicinesearchwindow.h \
    misearchsonwd.h \
    outwd.h \
    owndeal.h \
    ownillness.h \
    ownmessage.h \
    ownwindow.h \
    personalinfowindow.h \
    personalwindow.h \
    pmainwindow.h \
    pmainwindowhome.h \
    quizwd.h \
    registerdialog.h \
    resetdialog.h \
    searchlist.h \
    singleton.h \
    skinwd.h \
    statelabel.h \
    statewidget.h \
    tcpmgr.h \
    timerbtn.h \
    timetablewd.h \
    userdata.h \
    usermgr.h \
    womanwd.h

FORMS += \
    adduseritem.ui \
    applyfriend.ui \
    applyfrienditem.ui \
    applyfriendpage.ui \
    authenfriend.ui \
    basewindow.ui \
    bookwindow.ui \
    chatdialog.ui \
    chatpage.ui \
    chattingroomwindow.ui \
    chatuserwid.ui \
    chatwindow.ui \
    childwd.ui \
    conuseritem.ui \
    findfaildlg.ui \
    findsuccessdlg.ui \
    friendinfopage.ui \
    friendlabel.ui \
    grouptipitem.ui \
    homewindow.ui \
    hospitalizationwindow.ui \
    insidewd.ui \
    lineitem.ui \
    loadingdlg.ui \
    logindialog.ui \
    mainwindow.ui \
    medicalcaseswd.ui \
    medicalexpensewd.ui \
    medicinesearchwindow.ui \
    misearchsonwd.ui \
    outwd.ui \
    owndeal.ui \
    ownillness.ui \
    ownmessage.ui \
    ownwindow.ui \
    personalinfowindow.ui \
    personalwindow.ui \
    pmainwindow.ui \
    pmainwindowhome.ui \
    quizwd.ui \
    registerdialog.ui \
    resetdialog.ui \
    skinwd.ui \
    timetablewd.ui \
    womanwd.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    rcs.qrc

DISTFILES += \
    config.ini \
    style/stylesheet.qss

unix:CONFIG(release, debug | release)
{
    # 指定要拷贝的文件目录为工程目录下的 config.ini 文件
    TargetConfig = $${PWD}/config.ini

    # 输出目录
    OutputDir = $${OUT_PWD}/$${DESTDIR}

    # 执行 cp 命令
    QMAKE_POST_LINK += cp -f \"$$TargetConfig\" \"$$OutputDir\"
}


