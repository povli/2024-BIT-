QT       += core gui network sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    basewindow.cpp \
    bookwindow.cpp \
    chattingroomwindow.cpp \
    chatwindow.cpp \
    childwd.cpp \
    clickedlabel.cpp \
    global.cpp \
    homewindow.cpp \
    hospitalizationwindow.cpp \
    httpmgr.cpp \
    insidewd.cpp \
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
    skinwd.cpp \
    tcpmgr.cpp \
    timerbtn.cpp \
    timetablewd.cpp \
    usermgr.cpp \
    womanwd.cpp

HEADERS += \
    ChildDoc.h \
    GlobalData.h \
    InsideDoc.h \
    MedicineItem.h \
    OutDoc.h \
    SkinDoc.h \
    WomanDoc.h \
    basewindow.h \
    bookwindow.h \
    chattingroomwindow.h \
    chatwindow.h \
    childwd.h \
    clickedlabel.h \
    global.h \
    homewindow.h \
    hospitalizationwindow.h \
    httpmgr.h \
    insidewd.h \
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
    singleton.h \
    skinwd.h \
    tcpmgr.h \
    timerbtn.h \
    timetablewd.h \
    usermgr.h \
    womanwd.h

FORMS += \
    basewindow.ui \
    bookwindow.ui \
    chattingroomwindow.ui \
    chatwindow.ui \
    childwd.ui \
    homewindow.ui \
    hospitalizationwindow.ui \
    insidewd.ui \
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


