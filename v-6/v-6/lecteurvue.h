#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QMainWindow>
#include <QtWidgets>
#include "lecteur.h"
#include "diaporama.h"


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
    int choixVitesseDef = 2;
    QLabel *modeActuel;
    QLabel *valModeActuel;
    QLabel *vitesseActuelle;
    QLabel *valVitesseActuelle;
    enum etatFiltre {pasDeFiltre, pers, anim, obj,
                      persAnim, persObj, animObj, toutFiltres};

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
