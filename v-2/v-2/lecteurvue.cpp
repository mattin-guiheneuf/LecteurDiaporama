#include "lecteurvue.h"
#include "ui_lecteurvue.h"

#include <QDebug>

lecteurvue::lecteurvue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::lecteurvue)
{
    ui->setupUi(this);
    monLecteur.changerDiaporama(1);


    connect(ui->bAvancer, SIGNAL(clicked()), this, SLOT(avancer()));
    connect(ui->bReculer, SIGNAL(clicked()), this, SLOT(reculer()));
    connect(ui->bLancerDiapo, SIGNAL(clicked()), this, SLOT(lancerDiapo()));
    connect(ui->bArreterDiapo, SIGNAL(clicked()), this, SLOT(arreterDiapo()));
    connect(ui->cbPersonne, SIGNAL(clicked()), this, SLOT(filtrerImages()));
    connect(ui->cbAnimal, SIGNAL(clicked()), this, SLOT(filtrerImages()));
    connect(ui->cbChose, SIGNAL(clicked()), this, SLOT(filtrerImages()));

    connect(ui->actionA_propos_de,SIGNAL(triggered()), this, SLOT(afficherAProposDe()));
}

void lecteurvue::avancer()
{
    // qDebug() << "L'utilisateur avance";
    monLecteur.avancer();
    ui->lImage->setPixmap(QPixmap());

}

void lecteurvue::reculer()
{
    // qDebug() << "L'utilisateur recule";
    monLecteur.reculer();
}

void lecteurvue::lancerDiapo()
{
    qDebug() << "L'utilisateur lance le diaporama";
}

void lecteurvue::arreterDiapo()
{
    qDebug() << "L'utilisateur arrete le diaporama";
}

void lecteurvue::filtrerImages()
{
    qDebug() << "L'utilisateur flitre les images";
}

void lecteurvue::afficherAProposDe()
{
    aProposDe dlgAProposDe(this);
    dlgAProposDe.exec();
}


lecteurvue::~lecteurvue()
{
    delete ui;
}


