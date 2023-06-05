#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>

#define DATABASE_NAME "BD_Diapo_Lakartxela"
#define CONNECT_TYPE "QODBC"

class database
{
public:
    database();
    bool openDatabase();
    void closeDatabase();

private :
    QSqlDatabase mydb;
};

#endif // DATABASE_H
