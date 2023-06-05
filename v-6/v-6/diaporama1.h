#ifndef DIAPORAMA1_H
#define DIAPORAMA1_H

#include <QDialog>

namespace Ui {
class diaporama1;
}

class diaporama1 : public QDialog
{
    Q_OBJECT

public:
    explicit diaporama1(QWidget *parent = nullptr);
    ~diaporama1();

private:
    Ui::diaporama1 *ui;
};

#endif // DIAPORAMA1_H
