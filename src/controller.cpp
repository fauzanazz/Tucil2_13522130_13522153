
#include "controller.h"
#include "mainwindow.h"
#include "ui_controller.h"
#include "bejir.h"
#include <QRegularExpression>
#include <math.h>

Controller::Controller(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Controller)
    , GarisControl()
{
    ui->setupUi(this);
}

Controller::~Controller()
{
    delete ui;
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
    solveBezierDnC(panel);
}

void Controller::solveBezier3DnC(MainWindow* window)
{
    if(GarisControl.isEmpty()){
        return;
    }
    transformDot();
    window->addBezierCurve(GarisControl, false , true , false , iteration);
}


void Controller::solveBezierDnC(MainWindow* window)
{
    if(GarisControl.isEmpty()){
        return;
    }
    transformDot();
    window->addBezierCurve(GarisControl, false, false , true , iteration);
}

void Controller::solveBezierBrute(MainWindow* window)
{
    if(GarisControl.isEmpty()){
        return;
    }
    transformDot();
    window->addBezierCurve(GarisControl, true,false,false, iteration);
}

void Controller::transformDot(){
    // Calculate bounding box
    double minX = GarisControl.minX();
    double maxX = GarisControl.maxX();
    double minY = GarisControl.minY();
    double maxY = GarisControl.maxY();

    // Calculate center of bounding box
    double centerX = (minX + maxX) / 2;
    double centerY = (minY + maxY) / 2;

    // Calculate scale factor
    double scaleX = (1024 - 2 * 100) / (maxX - minX);
    double scaleY = (720 - 2 * 100) / (maxY - minY);
    double scale = fmin(scaleX, scaleY);

    // Calculate translation
    double translateX = ((1024 - 100) / 2) - (centerX * scale);
    double translateY = ((720 - 100) / 2) - (centerY * scale);

    // Apply scale and translation
    for (Dot& dot : *GarisControl.changeVector()) {
        dot.setX((dot.getX() * scale) + translateX);
        dot.setY((dot.getY() * scale) + translateY);
    }
}


void Controller::on_textEdit_textChanged()
{
    QString text = ui->textEdit->toPlainText();
    QStringList lines = text.split("\n");

    GarisControl.clear();

    QRegularExpression rx("\\(([^,]*),([^)]*)\\)"); // Regular expression to match (x,y)

    for (QString line : lines) {
        QRegularExpressionMatchIterator i = rx.globalMatch(line);

        while (i.hasNext()) {
            QRegularExpressionMatch match = i.next();
            int x = match.captured(1).toInt();
            int y = match.captured(2).toInt();

            Dot dot(x, y);
            GarisControl += dot;
        }
    }
}


void Controller::on_pushButton_clicked()
{
    panel = new MainWindow();
    panel->show();
    solveBezierBrute(panel);
}


void Controller::on_lineEdit_textChanged(const QString &arg1)
{
    QString text = ui->lineEdit->text();
    iteration = text.toInt();
}


void Controller::on_pushButton_2_clicked()
{
    panel = new MainWindow();
    panel->show();
    solveBezierBrute(panel);
}

