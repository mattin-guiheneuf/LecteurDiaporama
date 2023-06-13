#ifndef DIAPORAMA_H
#define DIAPORAMA_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class diaporama;}
QT_END_NAMESPACE

class diaporama : public QDialog
{

    Q_OBJECT

public:
    diaporama(QWidget *parent = nullptr);
    unsigned int getIdDiaporama();
    QString getTitreDiaporama();
    unsigned int getVitesseDeDefilement();
    ~diaporama();

public slots :
    void setDiapoCourant();

private :
    unsigned int _idDiaporama;
    QString _titreDiaporama;
    unsigned int _vitesseDeDefilement;

private :
    Ui::diaporama *ui;
};

#endif // DIAPORAMA_H
