#ifndef DIAPORAMA_H
#define DIAPORAMA_H

class diaporama
{
public:
    diaporama();
    unsigned int getIdDiaporama();
    QString getTitreDiaporama();
    unsigned int getVitesseDeDefilement();

private :
    unsigned int _idDiaporama;
    QString _titreDiaporama;
    unsigned int _vitesseDeDefilement;
};

#endif // DIAPORAMA_H
