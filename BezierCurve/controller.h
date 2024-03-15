#ifndef CONTROLLER_H
#define CONTROLLER_H


#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class Controller;
}

class Controller : public QDialog
{
    Q_OBJECT

public:
    explicit Controller(QWidget *parent = nullptr);
    ~Controller();

signals:
    void closed();

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_4_clicked();
    void solveBezierSlot(MainWindow* window);

protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::Controller *ui;
    MainWindow *panel;
};

#endif // CONTROLLER_H
