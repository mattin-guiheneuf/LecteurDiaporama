/********************************************************************************
** Form generated from reading UI file 'aproposde.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APROPOSDE_H
#define UI_APROPOSDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_aProposDe
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *hLayoutVersion;
    QSpacerItem *horizontalSpacer;
    QLabel *lVersion;
    QLabel *lValeurVersion;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *hLayoutDateCreation;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lDateCreation;
    QLabel *lValeurDateCreation;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gLayoutAuteurs;
    QLabel *lAuteurMattin;
    QLabel *lAuteurs;
    QLabel *lAuteurAxel;
    QSpacerItem *horizontalSpacer_5;
    QLabel *lAuteurAlex;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *aProposDe)
    {
        if (aProposDe->objectName().isEmpty())
            aProposDe->setObjectName(QString::fromUtf8("aProposDe"));
        aProposDe->resize(400, 300);
        verticalLayout = new QVBoxLayout(aProposDe);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        hLayoutVersion = new QHBoxLayout();
        hLayoutVersion->setObjectName(QString::fromUtf8("hLayoutVersion"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayoutVersion->addItem(horizontalSpacer);

        lVersion = new QLabel(aProposDe);
        lVersion->setObjectName(QString::fromUtf8("lVersion"));

        hLayoutVersion->addWidget(lVersion);

        lValeurVersion = new QLabel(aProposDe);
        lValeurVersion->setObjectName(QString::fromUtf8("lValeurVersion"));

        hLayoutVersion->addWidget(lValeurVersion);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayoutVersion->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(hLayoutVersion);

        hLayoutDateCreation = new QHBoxLayout();
        hLayoutDateCreation->setObjectName(QString::fromUtf8("hLayoutDateCreation"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayoutDateCreation->addItem(horizontalSpacer_3);

        lDateCreation = new QLabel(aProposDe);
        lDateCreation->setObjectName(QString::fromUtf8("lDateCreation"));

        hLayoutDateCreation->addWidget(lDateCreation);

        lValeurDateCreation = new QLabel(aProposDe);
        lValeurDateCreation->setObjectName(QString::fromUtf8("lValeurDateCreation"));

        hLayoutDateCreation->addWidget(lValeurDateCreation);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayoutDateCreation->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(hLayoutDateCreation);

        gLayoutAuteurs = new QGridLayout();
        gLayoutAuteurs->setObjectName(QString::fromUtf8("gLayoutAuteurs"));
        lAuteurMattin = new QLabel(aProposDe);
        lAuteurMattin->setObjectName(QString::fromUtf8("lAuteurMattin"));

        gLayoutAuteurs->addWidget(lAuteurMattin, 1, 2, 1, 1);

        lAuteurs = new QLabel(aProposDe);
        lAuteurs->setObjectName(QString::fromUtf8("lAuteurs"));

        gLayoutAuteurs->addWidget(lAuteurs, 0, 1, 1, 1);

        lAuteurAxel = new QLabel(aProposDe);
        lAuteurAxel->setObjectName(QString::fromUtf8("lAuteurAxel"));

        gLayoutAuteurs->addWidget(lAuteurAxel, 0, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gLayoutAuteurs->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        lAuteurAlex = new QLabel(aProposDe);
        lAuteurAlex->setObjectName(QString::fromUtf8("lAuteurAlex"));

        gLayoutAuteurs->addWidget(lAuteurAlex, 2, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gLayoutAuteurs->addItem(horizontalSpacer_6, 0, 3, 1, 1);


        verticalLayout->addLayout(gLayoutAuteurs);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(aProposDe);

        QMetaObject::connectSlotsByName(aProposDe);
    } // setupUi

    void retranslateUi(QDialog *aProposDe)
    {
        aProposDe->setWindowTitle(QCoreApplication::translate("aProposDe", "Dialog", nullptr));
        lVersion->setText(QCoreApplication::translate("aProposDe", " Version :", nullptr));
        lValeurVersion->setText(QCoreApplication::translate("aProposDe", "2", nullptr));
        lDateCreation->setText(QCoreApplication::translate("aProposDe", "Date de Cr\303\251ation : ", nullptr));
        lValeurDateCreation->setText(QCoreApplication::translate("aProposDe", "07/05/2023", nullptr));
        lAuteurMattin->setText(QCoreApplication::translate("aProposDe", "Mattin Guiheneuf", nullptr));
        lAuteurs->setText(QCoreApplication::translate("aProposDe", "Auteurs :", nullptr));
        lAuteurAxel->setText(QCoreApplication::translate("aProposDe", "Axel Ambroise", nullptr));
        lAuteurAlex->setText(QCoreApplication::translate("aProposDe", "Alexandre Picoulet-Sonder", nullptr));
    } // retranslateUi

};

namespace Ui {
    class aProposDe: public Ui_aProposDe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APROPOSDE_H
