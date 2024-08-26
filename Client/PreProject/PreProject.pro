QT       += core gui network sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bookwindow.cpp \
    chattingroomwindow.cpp \
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
    moc_bookwindow.cpp \
    moc_chattingroomwindow.cpp \
    moc_childwd.cpp \
    moc_homewindow.cpp \
    moc_hospitalizationwindow.cpp \
    moc_insidewd.cpp \
    moc_medicalcaseswd.cpp \
    moc_medicalexpensewd.cpp \
    moc_medicinesearchwindow.cpp \
    moc_outwd.cpp \
    moc_personalinfowindow.cpp \
    moc_personalwindow.cpp \
    moc_pmainwindow.cpp \
    moc_pmainwindowhome.cpp \
    moc_quizwd.cpp \
    moc_skinwd.cpp \
    moc_womanwd.cpp \
    outwd.cpp \
    personalinfowindow.cpp \
    personalwindow.cpp \
    pmainwindow.cpp \
    pmainwindowhome.cpp \
    qrc_images.cpp \
    quizwd.cpp \
    registerdialog.cpp \
    resetdialog.cpp \
    skinwd.cpp \
    tcpmgr.cpp \
    timerbtn.cpp \
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
    bookwindow.h \
    chattingroomwindow.h \
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
    moc_predefs.h \
    outwd.h \
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
    ui_bookwindow.h \
    ui_chattingroomwindow.h \
    ui_childwd.h \
    ui_homewindow.h \
    ui_hospitalizationwindow.h \
    ui_insidewd.h \
    ui_medicalcaseswd.h \
    ui_medicalexpensewd.h \
    ui_medicinesearchwindow.h \
    ui_outwd.h \
    ui_personalinfowindow.h \
    ui_personalwindow.h \
    ui_pmainwindow.h \
    ui_pmainwindowhome.h \
    ui_quizwd.h \
    ui_skinwd.h \
    ui_womanwd.h \
    usermgr.h \
    womanwd.h

FORMS += \
    bookwindow.ui \
    chattingroomwindow.ui \
    childwd.ui \
    homewindow.ui \
    hospitalizationwindow.ui \
    insidewd.ui \
    logindialog.ui \
    mainwindow.ui \
    medicalcaseswd.ui \
    medicalexpensewd.ui \
    medicinesearchwindow.ui \
    outwd.ui \
    personalinfowindow.ui \
    personalwindow.ui \
    pmainwindow.ui \
    pmainwindowhome.ui \
    quizwd.ui \
    registerdialog.ui \
    resetdialog.ui \
    skinwd.ui \
    womanwd.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc \
    rcs.qrc \
    rcs.qrc

DISTFILES += \
    Makefile \
    PMainWindow \
    PreProject.pro.user \
    PreProject.pro.user.5814c12 \
    chat-icon.jpg \
    clinic-health-icons.jpg \
    config.ini \
    green.webp \
    medical-expense.jpg \
    medical_report.jpg \
    medicalitem.db \
    personal-profile-icon.jpg \
    prescription.jpg \
    red.webp \
    redcross.jpeg \
    style/stylesheet.qss \
    supporting.jpg

unix:CONFIG(release, debug | release)
{
    # 指定要拷贝的文件目录为工程目录下的 config.ini 文件
    TargetConfig = $${PWD}/config.ini

    # 输出目录
    OutputDir = $${OUT_PWD}/$${DESTDIR}

    # 执行 cp 命令
    QMAKE_POST_LINK += cp -f \"$$TargetConfig\" \"$$OutputDir\"
}


