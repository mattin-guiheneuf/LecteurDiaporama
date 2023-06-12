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
    mydb.setUserName("mguiheneuf_bd");
    mydb.setPassword("mguiheneuf_bd");

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

void database::tableDiapo()
{
    if(!this->openDatabase())
    {
        this->openDatabase();
    }

    QSqlQuery query;
    query.prepare("SELECT idDiaporama, titreDiaporama FROM Diaporamas;");

    if(!query.exec())
    {
        qDebug() << "Problème requête table";
    }
    else
    {
        for(int i = 0; query.next(); i++)
        {

        }
    }
}


void database::choixDiapo()
{

}

void database::chargementImages()
{

}

void database::closeDatabase()
{
    mydb.close();
}

