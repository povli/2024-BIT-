QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bookwindow.cpp \
    chattingroomwindow.cpp \
    childwd.cpp \
    homewindow.cpp \
    insidewd.cpp \
    main.cpp \
    medicalcaseswd.cpp \
    medicalexpensewd.cpp \
    medicinesearchwindow.cpp \
    outwd.cpp \
    personalinfowindow.cpp \
    personalwindow.cpp \
    pmainwindow.cpp \
    pmainwindowhome.cpp \
    quizwd.cpp \
    skinwd.cpp \
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
    homewindow.h \
    insidewd.h \
    medicalcaseswd.h \
    medicalexpensewd.h \
    medicinesearchwindow.h \
    outwd.h \
    personalinfowindow.h \
    personalwindow.h \
    pmainwindow.h \
    pmainwindowhome.h \
    quizwd.h \
    skinwd.h \
    womanwd.h

FORMS += \
    bookwindow.ui \
    chattingroomwindow.ui \
    childwd.ui \
    homewindow.ui \
    insidewd.ui \
    medicalcaseswd.ui \
    medicalexpensewd.ui \
    medicinesearchwindow.ui \
    outwd.ui \
    personalinfowindow.ui \
    personalwindow.ui \
    pmainwindow.ui \
    pmainwindowhome.ui \
    quizwd.ui \
    skinwd.ui \
    womanwd.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc
