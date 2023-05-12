#include "aproposde.h"
#include "ui_aproposde.h"

aProposDe::aProposDe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aProposDe)
{
    ui->setupUi(this);
}

aProposDe::~aProposDe()
{
    delete ui;
}
