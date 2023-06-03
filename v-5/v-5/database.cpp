#include "database.h"

#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>

database::database()
{

}

bool database::openDatabase()
{
    mydb = QSqlDatabase::addDatabase(CONNECT_TYPE);
    mydb.setDatabaseName(DATABASE_NAME);
    if(mydb.open())
    {
        return true;
    }
    else
    {
        qDebug() << mydb.lastError().text();
        return false;
    }
}

void database::closeDatabase()
{
    mydb.close();
}

