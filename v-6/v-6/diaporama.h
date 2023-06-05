#ifndef DIAPORAMA_H
#define DIAPORAMA_H

class diaporama
{
public:
    diaporama();
    unsigned int getIdDiaporama();
    string getTitreDiaporama();
    unsigned int getVitesseDeDefilement();

private :
    unsigned int _idDiaporama;
    string _titreDiaporama;
    unsigned int _vitesseDeDefilement;
};

#endif // DIAPORAMA_H
