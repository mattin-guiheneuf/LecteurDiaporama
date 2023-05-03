
#include "Error in " Util.relativeFilePath('C:/Users/matti/OneDrive/Bureau/BUTInfo/S2/S2.01 - Développement d'une application/lecteurvue.h', 'C:/Users/matti/OneDrive/Bureau/BUTInfo/S2/S2.01 - Développement d'une application' + '/' + Util.path('lecteurvue.cpp'))": SyntaxError: Expected token `)'"
#include "ui_lecteurvue.h"


lecteurvue::lecteurvue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::lecteurvue)
{
    ui->setupUi(this);

    connect(b_Avancer, SIGNAL(clicked()), this, SLOT(avancer()));
    connect(b_Reculer, SIGNAL(clicked()), this, SLOT(reculer()));
    connect(b_ActiverBoucle, SIGNAL(clicked()), this, SLOT(activerBoucle()));
    connect(b_ActiverModeManuel, SIGNAL(clicked()), this, SLOT(activerModeManuel()));
    connect(b_ActiverModeAuto, SIGNAL(clicked()), this, SLOT(activerModeAuto()));
}

void avancer()
{
    QDebug << "L'utilisateur avance" << endl;
}

void reculer()
{
    QDebug << "L'utilisateur recule" << endl;
}

void activerBoucle()
{
    QDebug << "L'utilisateur active la boucle" << endl;
}

void activerModeManuel()
{
    QDebug << "L'utilisateur active le mode Manuel" << endl;
}

void activerModeAuto()
{
    QDebug << "L'utilisateur active le mode Auto" << endl;
}

lecteurvue::~lecteurvue()
{
    delete ui;
}


