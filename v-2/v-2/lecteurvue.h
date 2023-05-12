#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QMainWindow>
#include "lecteur.h"
#include "aproposde.h"


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
    Lecteur monLecteur;
    aProposDe *dlgAProposDe;

public slots :
    void avancer();
    void reculer();
    void lancerDiapo();
    void arreterDiapo();
    void filtrerImages();
    void afficherAProposDe();
};

#endif // LECTEURVUE_H
