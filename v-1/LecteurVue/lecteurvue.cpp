#include "lecteurvue.h"
#include "ui_lecteurvue.h"

#include <QDebug>
//#include <QtWidgets>

lecteurvue::lecteurvue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::lecteurvue)
{
    ui->setupUi(this);

    connect(ui->bAvancer, SIGNAL(clicked()), this, SLOT(avancer()));
    connect(ui->bReculer, SIGNAL(clicked()), this, SLOT(reculer()));
    connect(ui->bLancerDiapo, SIGNAL(clicked()), this, SLOT(lancerDiapo()));
    connect(ui->bArreterDiapo, SIGNAL(clicked()), this, SLOT(arreterDiapo()));
    connect(ui->cbPersonne, SIGNAL(clicked()), this, SLOT(filtrerImages()));
    connect(ui->cbAnimal, SIGNAL(clicked()), this, SLOT(filtrerImages()));
    connect(ui->cbChose, SIGNAL(clicked()), this, SLOT(filtrerImages()));
}

void lecteurvue::avancer()
{
    qDebug() << "L'utilisateur avance";
}

void lecteurvue::reculer()
{
    qDebug() << "L'utilisateur recule";
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
    qDebug() << "L'utilisateur filtre les images";
}

lecteurvue::~lecteurvue()
{
    delete ui;
}


