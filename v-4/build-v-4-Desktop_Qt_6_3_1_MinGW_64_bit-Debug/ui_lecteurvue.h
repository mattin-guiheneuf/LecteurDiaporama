/********************************************************************************
** Form generated from reading UI file 'lecteurvue.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTEURVUE_H
#define UI_LECTEURVUE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lecteurvue
{
public:
    QAction *actionCharger_Diaporama;
    QAction *actionVitesse_de_defilement;
    QAction *actionEnlever_Diaporama;
    QAction *actionQuitter;
    QAction *actionA_propos_de;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gLayoutInfoImageDiapo;
    QHBoxLayout *hLayoutRang;
    QSpacerItem *horizontalSpacer_5;
    QLabel *lRang;
    QLabel *lSlash;
    QLabel *lTotalImage;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *hLayoutTitreDiapo_2;
    QSpacerItem *horizontalSpacer;
    QLabel *lTitreDiapo;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *hLayoutTitreImage;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lTitreImage;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_7;
    QLabel *lImage;
    QHBoxLayout *hLayoutMenuInter;
    QHBoxLayout *hLayoutChangerImage;
    QPushButton *bReculer;
    QPushButton *bAvancer;
    QHBoxLayout *hLayoutLancArretDiapo;
    QPushButton *bArreterDiapo;
    QPushButton *bLancerDiapo;
    QGridLayout *hLayoutFiltrage;
    QLabel *lCategorie;
    QCheckBox *cbPersonne;
    QLabel *lFiltrage;
    QCheckBox *cbObjet;
    QCheckBox *cbAnimal;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QMenu *menuParam_tres;
    QMenu *menuA_propos_de;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *lecteurvue)
    {
        if (lecteurvue->objectName().isEmpty())
            lecteurvue->setObjectName(QString::fromUtf8("lecteurvue"));
        lecteurvue->resize(762, 432);
        actionCharger_Diaporama = new QAction(lecteurvue);
        actionCharger_Diaporama->setObjectName(QString::fromUtf8("actionCharger_Diaporama"));
        actionVitesse_de_defilement = new QAction(lecteurvue);
        actionVitesse_de_defilement->setObjectName(QString::fromUtf8("actionVitesse_de_defilement"));
        actionEnlever_Diaporama = new QAction(lecteurvue);
        actionEnlever_Diaporama->setObjectName(QString::fromUtf8("actionEnlever_Diaporama"));
        actionQuitter = new QAction(lecteurvue);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionA_propos_de = new QAction(lecteurvue);
        actionA_propos_de->setObjectName(QString::fromUtf8("actionA_propos_de"));
        centralwidget = new QWidget(lecteurvue);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gLayoutInfoImageDiapo = new QGridLayout();
        gLayoutInfoImageDiapo->setObjectName(QString::fromUtf8("gLayoutInfoImageDiapo"));
        hLayoutRang = new QHBoxLayout();
        hLayoutRang->setObjectName(QString::fromUtf8("hLayoutRang"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayoutRang->addItem(horizontalSpacer_5);

        lRang = new QLabel(centralwidget);
        lRang->setObjectName(QString::fromUtf8("lRang"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(9);
        lRang->setFont(font);

        hLayoutRang->addWidget(lRang);

        lSlash = new QLabel(centralwidget);
        lSlash->setObjectName(QString::fromUtf8("lSlash"));
        lSlash->setFont(font);

        hLayoutRang->addWidget(lSlash);

        lTotalImage = new QLabel(centralwidget);
        lTotalImage->setObjectName(QString::fromUtf8("lTotalImage"));
        lTotalImage->setFont(font);

        hLayoutRang->addWidget(lTotalImage);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayoutRang->addItem(horizontalSpacer_8);


        gLayoutInfoImageDiapo->addLayout(hLayoutRang, 3, 1, 1, 1);

        hLayoutTitreDiapo_2 = new QHBoxLayout();
        hLayoutTitreDiapo_2->setObjectName(QString::fromUtf8("hLayoutTitreDiapo_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayoutTitreDiapo_2->addItem(horizontalSpacer);

        lTitreDiapo = new QLabel(centralwidget);
        lTitreDiapo->setObjectName(QString::fromUtf8("lTitreDiapo"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(14);
        font1.setBold(true);
        lTitreDiapo->setFont(font1);

        hLayoutTitreDiapo_2->addWidget(lTitreDiapo);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayoutTitreDiapo_2->addItem(horizontalSpacer_2);


        gLayoutInfoImageDiapo->addLayout(hLayoutTitreDiapo_2, 0, 1, 1, 1);

        hLayoutTitreImage = new QHBoxLayout();
        hLayoutTitreImage->setObjectName(QString::fromUtf8("hLayoutTitreImage"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayoutTitreImage->addItem(horizontalSpacer_3);

        lTitreImage = new QLabel(centralwidget);
        lTitreImage->setObjectName(QString::fromUtf8("lTitreImage"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(12);
        lTitreImage->setFont(font2);

        hLayoutTitreImage->addWidget(lTitreImage);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayoutTitreImage->addItem(horizontalSpacer_4);


        gLayoutInfoImageDiapo->addLayout(hLayoutTitreImage, 1, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gLayoutInfoImageDiapo->addItem(horizontalSpacer_6, 2, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gLayoutInfoImageDiapo->addItem(horizontalSpacer_7, 2, 2, 1, 1);

        lImage = new QLabel(centralwidget);
        lImage->setObjectName(QString::fromUtf8("lImage"));
        lImage->setPixmap(QPixmap(QString::fromUtf8(":/lecteurDiapo/cartesDisney/Disney_tapis.gif")));
        lImage->setAlignment(Qt::AlignCenter);
        lImage->setOpenExternalLinks(false);

        gLayoutInfoImageDiapo->addWidget(lImage, 2, 1, 1, 1);


        verticalLayout->addLayout(gLayoutInfoImageDiapo);

        hLayoutMenuInter = new QHBoxLayout();
        hLayoutMenuInter->setObjectName(QString::fromUtf8("hLayoutMenuInter"));
        hLayoutChangerImage = new QHBoxLayout();
        hLayoutChangerImage->setObjectName(QString::fromUtf8("hLayoutChangerImage"));
        bReculer = new QPushButton(centralwidget);
        bReculer->setObjectName(QString::fromUtf8("bReculer"));

        hLayoutChangerImage->addWidget(bReculer);

        bAvancer = new QPushButton(centralwidget);
        bAvancer->setObjectName(QString::fromUtf8("bAvancer"));

        hLayoutChangerImage->addWidget(bAvancer);


        hLayoutMenuInter->addLayout(hLayoutChangerImage);

        hLayoutLancArretDiapo = new QHBoxLayout();
        hLayoutLancArretDiapo->setObjectName(QString::fromUtf8("hLayoutLancArretDiapo"));
        bArreterDiapo = new QPushButton(centralwidget);
        bArreterDiapo->setObjectName(QString::fromUtf8("bArreterDiapo"));

        hLayoutLancArretDiapo->addWidget(bArreterDiapo);

        bLancerDiapo = new QPushButton(centralwidget);
        bLancerDiapo->setObjectName(QString::fromUtf8("bLancerDiapo"));

        hLayoutLancArretDiapo->addWidget(bLancerDiapo);


        hLayoutMenuInter->addLayout(hLayoutLancArretDiapo);

        hLayoutFiltrage = new QGridLayout();
        hLayoutFiltrage->setObjectName(QString::fromUtf8("hLayoutFiltrage"));
        lCategorie = new QLabel(centralwidget);
        lCategorie->setObjectName(QString::fromUtf8("lCategorie"));

        hLayoutFiltrage->addWidget(lCategorie, 0, 1, 1, 1);

        cbPersonne = new QCheckBox(centralwidget);
        cbPersonne->setObjectName(QString::fromUtf8("cbPersonne"));

        hLayoutFiltrage->addWidget(cbPersonne, 3, 0, 1, 1);

        lFiltrage = new QLabel(centralwidget);
        lFiltrage->setObjectName(QString::fromUtf8("lFiltrage"));

        hLayoutFiltrage->addWidget(lFiltrage, 2, 0, 1, 1);

        cbObjet = new QCheckBox(centralwidget);
        cbObjet->setObjectName(QString::fromUtf8("cbObjet"));

        hLayoutFiltrage->addWidget(cbObjet, 3, 2, 1, 1);

        cbAnimal = new QCheckBox(centralwidget);
        cbAnimal->setObjectName(QString::fromUtf8("cbAnimal"));

        hLayoutFiltrage->addWidget(cbAnimal, 3, 1, 1, 1);


        hLayoutMenuInter->addLayout(hLayoutFiltrage);


        verticalLayout->addLayout(hLayoutMenuInter);

        verticalLayout->setStretch(0, 1);
        lecteurvue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(lecteurvue);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 762, 26));
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuParam_tres = new QMenu(menubar);
        menuParam_tres->setObjectName(QString::fromUtf8("menuParam_tres"));
        menuA_propos_de = new QMenu(menubar);
        menuA_propos_de->setObjectName(QString::fromUtf8("menuA_propos_de"));
        lecteurvue->setMenuBar(menubar);
        statusbar = new QStatusBar(lecteurvue);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        lecteurvue->setStatusBar(statusbar);

        menubar->addAction(menuFichier->menuAction());
        menubar->addAction(menuParam_tres->menuAction());
        menubar->addAction(menuA_propos_de->menuAction());
        menuFichier->addAction(actionQuitter);
        menuParam_tres->addAction(actionCharger_Diaporama);
        menuParam_tres->addAction(actionVitesse_de_defilement);
        menuParam_tres->addAction(actionEnlever_Diaporama);
        menuA_propos_de->addAction(actionA_propos_de);

        retranslateUi(lecteurvue);

        QMetaObject::connectSlotsByName(lecteurvue);
    } // setupUi

    void retranslateUi(QMainWindow *lecteurvue)
    {
        lecteurvue->setWindowTitle(QCoreApplication::translate("lecteurvue", "lecteurvue", nullptr));
        actionCharger_Diaporama->setText(QCoreApplication::translate("lecteurvue", "Charger Diaporama", nullptr));
        actionVitesse_de_defilement->setText(QCoreApplication::translate("lecteurvue", "Vitesse de d\303\251filement", nullptr));
        actionEnlever_Diaporama->setText(QCoreApplication::translate("lecteurvue", "Enlever Diaporama", nullptr));
        actionQuitter->setText(QCoreApplication::translate("lecteurvue", "Quitter", nullptr));
        actionA_propos_de->setText(QCoreApplication::translate("lecteurvue", "A propos de ...", nullptr));
        lRang->setText(QCoreApplication::translate("lecteurvue", "Rang", nullptr));
        lSlash->setText(QCoreApplication::translate("lecteurvue", "/", nullptr));
        lTotalImage->setText(QCoreApplication::translate("lecteurvue", "nbTotalImages", nullptr));
        lTitreDiapo->setText(QCoreApplication::translate("lecteurvue", "Aucun Diapo charg\303\251", nullptr));
        lTitreImage->setText(QCoreApplication::translate("lecteurvue", "Titre Image", nullptr));
        lImage->setText(QString());
        bReculer->setText(QCoreApplication::translate("lecteurvue", "Reculer", nullptr));
        bAvancer->setText(QCoreApplication::translate("lecteurvue", "Avancer", nullptr));
        bArreterDiapo->setText(QCoreApplication::translate("lecteurvue", "Arr\303\252ter Diaporama", nullptr));
        bLancerDiapo->setText(QCoreApplication::translate("lecteurvue", "Lancer Diaporama", nullptr));
        lCategorie->setText(QCoreApplication::translate("lecteurvue", "Cat\303\251gorie", nullptr));
        cbPersonne->setText(QCoreApplication::translate("lecteurvue", "Personnes", nullptr));
        lFiltrage->setText(QCoreApplication::translate("lecteurvue", "Filtrer par :", nullptr));
        cbObjet->setText(QCoreApplication::translate("lecteurvue", "Objets", nullptr));
        cbAnimal->setText(QCoreApplication::translate("lecteurvue", "Animaux", nullptr));
        menuFichier->setTitle(QCoreApplication::translate("lecteurvue", "Fichier", nullptr));
        menuParam_tres->setTitle(QCoreApplication::translate("lecteurvue", "Param\303\250tres", nullptr));
        menuA_propos_de->setTitle(QCoreApplication::translate("lecteurvue", "Aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lecteurvue: public Ui_lecteurvue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTEURVUE_H
