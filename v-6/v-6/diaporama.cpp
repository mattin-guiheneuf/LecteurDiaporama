#include "diaporama.h"
#include "ui_diaporama.h"

#include <QSqlQuery>

diaporama::diaporama(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::diaporama)
{
    ui->setupUi(this);

    QSqlQuery query;
    query.exec("SELECT idDiaporama, 'titre Diaporama' FROM Diaporamas ORDER BY idDiaporama DESC;");
    for(unsigned int i = 0; query.next(); i++)
    {
        ui->tbwChoixDiapo->insertRow(i);

        ui->tbwChoixDiapo->setItem(i, 0, new QTableWidgetItem(query.value(0).toInt()));
        ui->tbwChoixDiapo->setItem(i, 1, new QTableWidgetItem(query.value(1).toString()));

        QHeaderView *headerView = ui->tbwChoixDiapo->horizontalHeader();
        headerView->setSectionResizeMode(QHeaderView::Stretch);
    }

    ui->tbwChoixDiapo->setSelectionBehavior(QAbstractItemView::SelectRows);

    connect(ui->bAnnuler, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->bChoisir, SIGNAL(clicked()), this, SLOT(setDiapoCourant()));
}

void diaporama::setDiapoCourant()
{
    _idDiaporama = ui->tbwChoixDiapo->
    _titreDiaporama = ui->tbwChoixDiapo->
}

diaporama::~diaporama()
{
    delete ui;
}
