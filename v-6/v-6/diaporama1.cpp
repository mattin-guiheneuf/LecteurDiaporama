#include "diaporama1.h"
#include "ui_diaporama1.h"

diaporama1::diaporama1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::diaporama1)
{
    ui->setupUi(this);
}

diaporama1::~diaporama1()
{
    delete ui;
}
