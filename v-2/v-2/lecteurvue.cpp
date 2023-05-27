#include "lecteurvue.h"
#include "ui_lecteurvue.h"

#include <QDebug>

#include "QMessageBox"

#include "lecteur.h"
#include "image.h"

lecteurvue::lecteurvue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::lecteurvue)
{
    ui->setupUi(this);

    connect(ui->bAvancer, SIGNAL(clicked()), this, SLOT(avancer()));
    connect(ui->bReculer, SIGNAL(clicked()), this, SLOT(reculer()));
    connect(ui->bLancerDiapo, SIGNAL(clicked()), this, SLOT(lancerDiapo()));
    connect(ui->bArreterDiapo, SIGNAL(clicked()), this, SLOT(arreterDiapo()));
    connect(ui->cbPersonne, SIGNAL(clicked(bool)), this, SLOT(filtrerImages()));
    connect(ui->cbAnimal, SIGNAL(clicked(bool)), this, SLOT(filtrerImages()));
    connect(ui->cbObjet, SIGNAL(clicked(bool)), this, SLOT(filtrerImages()));

    connect(ui->actionQuitter, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->actionCharger_Diaporama, SIGNAL(triggered()), this, SLOT(chargerDiapo()));
    connect(ui->actionVitesse_de_defilement, SIGNAL(triggered()), this, SLOT(changerVitesseDiapo()));
    connect(ui->actionEnlever_Diaporama, SIGNAL(triggered()), this, SLOT(enleverDiapo()));
    connect(ui->actionA_propos_de,SIGNAL(triggered()), this, SLOT(afficherAProposDe()));

    if(monLecteur->numDiaporamaCourant()==0)
    {
        ui->bAvancer->setEnabled(false);
        ui->bReculer->setEnabled(false);
        ui->cbAnimal->setEnabled(false);
        ui->cbObjet->setEnabled(false);
        ui->cbPersonne->setEnabled(false);
        ui->bLancerDiapo->setEnabled(false);
        ui->bArreterDiapo->setEnabled(false);
    }
}

void lecteurvue::avancer()
{
    // qDebug() << "L'utilisateur avance";
    monLecteur->avancer();
    this->majImage();
}

void lecteurvue::reculer()
{
    // qDebug() << "L'utilisateur recule";
    monLecteur->reculer();
    this->majImage();
}

void lecteurvue::majImage()
{
    // MAJ Titre
    titreImg = QString::fromStdString(monLecteur->imageCourante()->getTitre());
    ui->lTitreImage->setText(titreImg);

    // MAJ Rang
    rangImg.setNum(monLecteur->imageCourante()->getRang());
    ui->lRang->setText(rangImg);

    // MAJ Chemin
    cheminImg = QString::fromStdString(monLecteur->imageCourante()->getChemin());
    ui->lImage->setPixmap(QPixmap(cheminImg));
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
    qDebug() << "L'utlisateur filtre les images";
    /*
    if (etat){
        qDebug() << "L'utilisateur flitre les images par Animaux";
    }
    else if (etat){
        qDebug() << "L'utilisateur flitre les images par Objets";
    }
    else{
        qDebug() << "L'utilisateur flitre les images par Personnes";
    }
    */
}

void lecteurvue::chargerDiapo()
{
    // qDebug() << "L'utilisateur charge un diaporama";
    // Changement de l'affichage des boutons
    ui->bAvancer->setEnabled(true);
    ui->bReculer->setEnabled(true);
    ui->cbAnimal->setEnabled(true);
    ui->cbObjet->setEnabled(true);
    ui->cbPersonne->setEnabled(true);
    ui->bLancerDiapo->setEnabled(true);

    // Chargement du diaporama
    monLecteur->changerDiaporama(1);

    // Récupérer le nombre max d'images
    nbrImage.setNum(monLecteur->nbImages());
    ui->lTotalImage->setText(nbrImage);

    // Mise à jour de l'affichage
    this->majImage();
}

void lecteurvue::changerVitesseDiapo()
{
    qDebug() << "L'utilisateur change de vitesse de diaporama";
}

void lecteurvue::enleverDiapo()
{
    // qDebug() << "L'utilisateur enlève le diaporama";

    monLecteur->changerDiaporama(0);

    ui->bAvancer->setEnabled(false);
    ui->bReculer->setEnabled(false);
    ui->cbAnimal->setEnabled(false);
    ui->cbObjet->setEnabled(false);
    ui->cbPersonne->setEnabled(false);
    ui->bLancerDiapo->setEnabled(false);
}

void lecteurvue::afficherAProposDe()
{
    QMessageBox::information(this, "A propos de ", "Version : 2\n"
                                                   "Date de Création : 07/05/2023\n"
                                                   "Auteurs : Axel Ambroise\n"
                                                   "          Mattin Guiheneuf\n"
                                                   "          Alexandre Picoulet--Sonder");
}

lecteurvue::~lecteurvue()
{
    delete ui;
}
