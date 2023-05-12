#ifndef APROPOSDE_H
#define APROPOSDE_H

#include <QDialog>

namespace Ui {
class aProposDe;
}

class aProposDe : public QDialog
{
    Q_OBJECT

public:
    explicit aProposDe(QWidget *parent = nullptr);
    ~aProposDe();

private:
    Ui::aProposDe *ui;
};

#endif // APROPOSDE_H
