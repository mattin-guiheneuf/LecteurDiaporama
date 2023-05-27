#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QMainWindow>
#include <QtWidgets>
#include "lecteur.h"


QT_BEGIN_NAMESPACE
namespace Ui { class lecteurvue; }
QT_END_NAMESPACE

class lecteurvue : public QMainWindow

{
    Q_OBJECT

public:
    lecteurvue(QWidget *parent = nullptr);
    ~lecteurvue();

private:
    Ui::lecteurvue *ui;
    Lecteur* monLecteur = new Lecteur();

    QTimer *monTimer;

private :
    QString titreImg;
    QString rangImg;
    QString cheminImg;
    QString nbrImage;

public slots :
    void avancer();
    void reculer();
    void majImage();
    void lancerDiapo();
    void arreterDiapo();
    void filtrerImages();

    void chargerDiapo();
    void changerVitesseDiapo();
    void enleverDiapo();
    void afficherAProposDe();
};

#endif // LECTEURVUE_H
