#include "diaporama.h"
#include "ui_diaporama.h"

diaporama::diaporama(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::diaporama)
{
    ui->setupUi(this);
}

diaporama::~diaporama()
{
    delete ui;
}
