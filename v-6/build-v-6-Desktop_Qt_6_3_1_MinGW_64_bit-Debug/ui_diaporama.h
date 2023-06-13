/********************************************************************************
** Form generated from reading UI file 'diaporama.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIAPORAMA_H
#define UI_DIAPORAMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_diaporama
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lTitreChoixDiapo;
    QTableWidget *tbwChoixDiapo;
    QHBoxLayout *hLayoutBoutDiapo;
    QSpacerItem *horizontalSpacer;
    QPushButton *bAnnuler;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *bChoisir;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *diaporama)
    {
        if (diaporama->objectName().isEmpty())
            diaporama->setObjectName(QString::fromUtf8("diaporama"));
        diaporama->resize(594, 286);
        verticalLayout = new QVBoxLayout(diaporama);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lTitreChoixDiapo = new QLabel(diaporama);
        lTitreChoixDiapo->setObjectName(QString::fromUtf8("lTitreChoixDiapo"));
        QFont font;
        font.setBold(true);
        lTitreChoixDiapo->setFont(font);
        lTitreChoixDiapo->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lTitreChoixDiapo);

        tbwChoixDiapo = new QTableWidget(diaporama);
        tbwChoixDiapo->setObjectName(QString::fromUtf8("tbwChoixDiapo"));

        verticalLayout->addWidget(tbwChoixDiapo);

        hLayoutBoutDiapo = new QHBoxLayout();
        hLayoutBoutDiapo->setObjectName(QString::fromUtf8("hLayoutBoutDiapo"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayoutBoutDiapo->addItem(horizontalSpacer);

        bAnnuler = new QPushButton(diaporama);
        bAnnuler->setObjectName(QString::fromUtf8("bAnnuler"));

        hLayoutBoutDiapo->addWidget(bAnnuler);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayoutBoutDiapo->addItem(horizontalSpacer_3);

        bChoisir = new QPushButton(diaporama);
        bChoisir->setObjectName(QString::fromUtf8("bChoisir"));

        hLayoutBoutDiapo->addWidget(bChoisir);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayoutBoutDiapo->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(hLayoutBoutDiapo);


        retranslateUi(diaporama);

        QMetaObject::connectSlotsByName(diaporama);
    } // setupUi

    void retranslateUi(QDialog *diaporama)
    {
        diaporama->setWindowTitle(QCoreApplication::translate("diaporama", "Dialog", nullptr));
        lTitreChoixDiapo->setText(QCoreApplication::translate("diaporama", "TextLabel", nullptr));
        bAnnuler->setText(QCoreApplication::translate("diaporama", "Annuler", nullptr));
        bChoisir->setText(QCoreApplication::translate("diaporama", "Choisir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class diaporama: public Ui_diaporama {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIAPORAMA_H
