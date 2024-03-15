
#include "controller.h"
#include "mainwindow.h"
#include "ui_controller.h"
#include "bejir.h"

Controller::Controller(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Controller)
{
    ui->setupUi(this);
}

Controller::~Controller()
{
    delete ui;
}

void Controller::on_pushButton_2_clicked()
{

}

void Controller::closeEvent(QCloseEvent *event)
{
    emit closed();
    QDialog::closeEvent(event);
}

void Controller::on_pushButton_4_clicked()
{
    panel = new MainWindow();
    panel->show();
    solveBezierSlot(panel);
}


void Controller::solveBezierSlot(MainWindow* window)
{

    Dot titik1 = Dot(100, 100);
    Dot titik2 = Dot(200, 300);
    Dot titik3 = Dot(400, 200);

    bejir bezierCurve = bejir(10);
    bezierCurve.addLast(titik1);
    bezierCurve.AddBezierCurve(titik1,titik2,titik3,0);
    bezierCurve.addLast(titik3);

    window->addBezierCurve(bezierCurve.getGarisBezier());
}

