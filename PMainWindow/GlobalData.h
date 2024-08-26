#ifndef GLOBALDATA_H
#define GLOBALDATA_H
#include <QString>
class GlobalData
{
public:
    static int isSearch; //全局变量要加上static关键字
    static int ChildDocnum;
    static int WomanDocnum;
    static int OutDocnum;
    static int InsideDocnum;
    static int SkinDocnum;
    static QString str1;
};

#endif // GLOBALDATA_H
