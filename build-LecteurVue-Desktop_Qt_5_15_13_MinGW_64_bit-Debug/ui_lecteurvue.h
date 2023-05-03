/********************************************************************************
** Form generated from reading UI file 'lecteurvue.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTEURVUE_H
#define UI_LECTEURVUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lecteurvue
{
public:
    QAction *actionChanger_Diaporama;
    QAction *actionVitesse_de_d_filement;
    QAction *actionEnlever_Diaporama;
    QAction *actionQuitter;
    QAction *actionA_propos_de;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *l_categorie;
    QLabel *l_rang;
    QLabel *l_titreImage;
    QLabel *l_titreDiapo;
    QHBoxLayout *horizontalLayout;
    QPushButton *b_Reculer;
    QOpenGLWidget *openGLWidget;
    QPushButton *b_Avancer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *b_ActiverModeAuto;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *b_ActiverModeManuel;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *b_ActiverBoucle;
    QSpacerItem *horizontalSpacer_3;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QMenu *menuParam_tres;
    QMenu *menuA_propos_de;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *lecteurvue)
    {
        if (lecteurvue->objectName().isEmpty())
            lecteurvue->setObjectName(QString::fromUtf8("lecteurvue"));
        lecteurvue->resize(1195, 531);
        actionChanger_Diaporama = new QAction(lecteurvue);
        actionChanger_Diaporama->setObjectName(QString::fromUtf8("actionChanger_Diaporama"));
        actionVitesse_de_d_filement = new QAction(lecteurvue);
        actionVitesse_de_d_filement->setObjectName(QString::fromUtf8("actionVitesse_de_d_filement"));
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
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        l_categorie = new QLabel(centralwidget);
        l_categorie->setObjectName(QString::fromUtf8("l_categorie"));

        gridLayout->addWidget(l_categorie, 1, 1, 1, 1);

        l_rang = new QLabel(centralwidget);
        l_rang->setObjectName(QString::fromUtf8("l_rang"));

        gridLayout->addWidget(l_rang, 1, 2, 1, 1);

        l_titreImage = new QLabel(centralwidget);
        l_titreImage->setObjectName(QString::fromUtf8("l_titreImage"));

        gridLayout->addWidget(l_titreImage, 1, 0, 1, 1);

        l_titreDiapo = new QLabel(centralwidget);
        l_titreDiapo->setObjectName(QString::fromUtf8("l_titreDiapo"));

        gridLayout->addWidget(l_titreDiapo, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        b_Reculer = new QPushButton(centralwidget);
        b_Reculer->setObjectName(QString::fromUtf8("b_Reculer"));

        horizontalLayout->addWidget(b_Reculer);

        openGLWidget = new QOpenGLWidget(centralwidget);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));

        horizontalLayout->addWidget(openGLWidget);

        b_Avancer = new QPushButton(centralwidget);
        b_Avancer->setObjectName(QString::fromUtf8("b_Avancer"));

        horizontalLayout->addWidget(b_Avancer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        b_ActiverModeAuto = new QPushButton(centralwidget);
        b_ActiverModeAuto->setObjectName(QString::fromUtf8("b_ActiverModeAuto"));

        horizontalLayout_2->addWidget(b_ActiverModeAuto);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        b_ActiverModeManuel = new QPushButton(centralwidget);
        b_ActiverModeManuel->setObjectName(QString::fromUtf8("b_ActiverModeManuel"));

        horizontalLayout_2->addWidget(b_ActiverModeManuel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        b_ActiverBoucle = new QPushButton(centralwidget);
        b_ActiverBoucle->setObjectName(QString::fromUtf8("b_ActiverBoucle"));

        horizontalLayout_2->addWidget(b_ActiverBoucle);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        lecteurvue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(lecteurvue);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1195, 26));
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
        menuParam_tres->addAction(actionChanger_Diaporama);
        menuParam_tres->addAction(actionVitesse_de_d_filement);
        menuParam_tres->addAction(actionEnlever_Diaporama);
        menuA_propos_de->addAction(actionA_propos_de);

        retranslateUi(lecteurvue);

        QMetaObject::connectSlotsByName(lecteurvue);
    } // setupUi

    void retranslateUi(QMainWindow *lecteurvue)
    {
        lecteurvue->setWindowTitle(QCoreApplication::translate("lecteurvue", "lecteurvue", nullptr));
        actionChanger_Diaporama->setText(QCoreApplication::translate("lecteurvue", "Changer Diaporama", nullptr));
        actionVitesse_de_d_filement->setText(QCoreApplication::translate("lecteurvue", "Vitesse de d\303\251filement", nullptr));
        actionEnlever_Diaporama->setText(QCoreApplication::translate("lecteurvue", "Enlever Diaporama", nullptr));
        actionQuitter->setText(QCoreApplication::translate("lecteurvue", "Quitter", nullptr));
        actionA_propos_de->setText(QCoreApplication::translate("lecteurvue", "A propos de ...", nullptr));
        l_categorie->setText(QCoreApplication::translate("lecteurvue", "Cat\303\251gorie", nullptr));
        l_rang->setText(QCoreApplication::translate("lecteurvue", "Rang", nullptr));
        l_titreImage->setText(QCoreApplication::translate("lecteurvue", "Titre Image", nullptr));
        l_titreDiapo->setText(QCoreApplication::translate("lecteurvue", "Titre Diapo", nullptr));
        b_Reculer->setText(QCoreApplication::translate("lecteurvue", "Reculer", nullptr));
        b_Avancer->setText(QCoreApplication::translate("lecteurvue", "Avancer", nullptr));
        b_ActiverModeAuto->setText(QCoreApplication::translate("lecteurvue", "Mode Auto", nullptr));
        b_ActiverModeManuel->setText(QCoreApplication::translate("lecteurvue", "Mode Manuel", nullptr));
        b_ActiverBoucle->setText(QCoreApplication::translate("lecteurvue", "Boucle", nullptr));
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
