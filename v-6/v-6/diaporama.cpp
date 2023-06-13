#include "diaporama.h"
#include "ui_diaporama.h"

diaporama::diaporama(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::diaporama)
{
    ui->setupUi(this);

    QSqlQuery query;
    query.exec("SELECT idDiaporama, ");
    for(unsigned int i = 0; query.next(); i++)
    {
        ui->tbwChoixDiapo->insertRow(i);


    }
}

diaporama::~diaporama()
{
    delete ui;
}
