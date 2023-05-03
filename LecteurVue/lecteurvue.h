
#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QMainWindow>



QT_BEGIN_NAMESPACE
namespace Ui { class lecteurvue; }
QT_END_NAMESPACE

class lecteurvue : public QMainWindow

{
    Q_OBJECT

public:
    lecteurvue(QWidget *parent = nullptr);
    ~lecteurvue();

private:
    Ui::lecteurvue *ui;

public slots :
    void avancer();
    void reculer();
    void activerBoucle();
    void activerModeManuel();
    void activerModeAuto();
};

#endif // LECTEURVUE_H
