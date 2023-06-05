#include "lecteur.h"
#include <QSqlQuery>

Lecteur::Lecteur()
{
    _numDiaporamaCourant = 0;   // =  le lecteur est vide
}

void Lecteur::avancer()
{
    _posImageCourante = (_posImageCourante + 1) % nbImages();
}

void Lecteur::reculer()
{
    _posImageCourante = (_posImageCourante - 1) % nbImages();
}

void Lecteur::changerDiaporama(unsigned int pNumDiaporama)
{
    // s'il y a un diaporama courant, le vider, puis charger le nouveau Diaporama
    if (numDiaporamaCourant() > 0)
    {
        viderDiaporama();
    }
    _numDiaporamaCourant = pNumDiaporama;
    if (numDiaporamaCourant() > 0)
    {
        chargerDiaporama(); // charge le diaporama courant
    }

}

void Lecteur::chargerDiaporama()
{
    /* Chargement des images associées au diaporama courant
       Dans une version ultérieure, ces données proviendront d'une base de données,
       et correspondront au diaporama choisi */
    Image* imageACharger;

    mydb = new database;
    mydb->openDatabase();

    QSqlQuery query;
    QString laRequete("SELECT Dp.idphoto, F.nomFamille, Dp.titrePhoto, Dp.uriPhoto "
                      "FROM Diapos Dp "
                      "JOIN Familles F ON Dp.idFam = F.idFamille ");

    if (query.exec(laRequete))
    {
        for(int i = 0; query.next(); i++)
        {
            imageACharger = new Image(query.value(0).toInt(),
                                      query.value(1).toString().toStdString(),
                                      query.value(2).toString().toStdString(),
                                      ":/lecteurDiapo" + query.value(3).toString().toStdString());
            _diaporama.push_back(imageACharger);
        }
    }

     // trier le contenu du diaporama par ordre croissant selon le rang de l'image dans le diaporama
     // A FAIRE
    Image* copieImageParcourue;

    for(unsigned int i = 0; i < nbImages() - 1; i++)
    {
        for(unsigned int j = 0; j < nbImages() - 1; j++)
        {
            if (_diaporama[j]->getRang() > _diaporama[j+1]->getRang())
            {
                copieImageParcourue = _diaporama[j];
                _diaporama[j] = _diaporama[j+1];
                _diaporama[j+1] = copieImageParcourue;
            }
        }
    }

     _posImageCourante = 0;

     cout << "Diaporama num. " << numDiaporamaCourant() << " selectionne. " << endl;
     cout << nbImages() << " images chargees dans le diaporama" << endl;

}

void Lecteur::viderDiaporama()
{
    if (nbImages () > 0)
    {
        unsigned int taille = nbImages();
        for (unsigned int i = 0; i < taille ; i++)
        {
            _diaporama.pop_back(); /* Removes the last element in the vector,
                                      effectively reducing the container size by one.
                                      AND deletes the removed element */
        }
     _posImageCourante = 0;
    }
    cout << nbImages() << " images restantes dans le diaporama." << endl;
}

void Lecteur::afficher()
{
    /* affiche les information sur le lecteur :
     * 1) vide (si num. de diaporama = 0) OU BIEN  numéro de diaporama affiché
     * 2) Si un diaporama courant est chargé (num. de diaporama > 0), affiche l'image courante OU BIEN 'diaporama vide'
     *     si ce diaporama n'a aucun image */
    if (numDiaporamaCourant() == 0)
    {
        cout << "Lecteur vide" << endl;
    }
    else
    {
        cout << "Diaporama num. " << numDiaporamaCourant() << endl;

        if (nbImages() == 0)
        {
            cout << "Diaporama vide" << endl;
        }
        else
        {
            cout << "Image courante : ";
            imageCourante()->afficher();
        }
    }
}

unsigned int Lecteur::nbImages()
{
    return _diaporama.size();
}

void Lecteur::setImage(int numImage)
{
    _posImageCourante = numImage % nbImages();
}

Image *Lecteur::imageCourante()
{
    if(numDiaporamaCourant() == 0 || nbImages() == 0)
    {
        return nullptr;
    }
    else
    {
        return _diaporama[_posImageCourante];
    }
}

unsigned int Lecteur::numDiaporamaCourant()
{
    return _numDiaporamaCourant;
}
