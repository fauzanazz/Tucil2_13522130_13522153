#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPainterPath>
#include <iostream>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Result)
    , t(0)
    , brutegweh(0)
    , garis()
{
    ui->setupUi(this);

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::drawNextSegment);
    timer->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::addBezierCurve(Line curve, bool brute, int iteration)
{
    garis = curve;
    isBrute = brute;
    iter = iteration - 1;

    numPoints = garis.length();
    int tempIter = iterAnim;
    while (tempIter > 0) {
        numPoints += numPoints - 1;
        tempIter--;
    }

    exec.start();
    qint64 timeTaken;
    if (isBrute){
        // Hitung waktu eksekusi
        Line solve = brutegweh.calculateBezierPoint(garis.getVector(),iter);
        solve += garis[garis.length()-1];
        brutegweh.setGarisBezier(solve);
        timeTaken = exec.elapsed();
        solve.show();
    } else {
        Line solve = brutegweh.DnCBezierPoint(garis.getVector(),iter);
        brutegweh.setGarisBezier(solve);
        timeTaken = exec.elapsed();
    }
    QString timeString = QString::number(timeTaken);
    // Set the window title to display the time taken in QT
    setWindowTitle("Time taken: " + timeString + " miliseconds");
    

    update();
}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    Line resultInterpolated;
    Line temp;

    // Titik hasil
    Line solve = brutegweh.DnCBezierPoint(garis.getVector(),iterAnim);
    for (int i = 0; i < solve.length() ; ++i){
        painter.setPen(QPen(Qt::green, 2));
        painter.drawEllipse(solve[i].getX(),solve[i].getY(),3,3);

        if (i < solve.length() - 1){
            painter.setPen(QPen(Qt::darkGreen, 1));
            painter.drawLine(solve[i].getX(), solve[i].getY(), solve[i+1].getX(),solve[i+1].getY());
        }

    }

    // Garis Control
    painter.setPen(QPen(Qt::black, 2));
    for (int i = 0; i < garis.length()-1; i++){
        painter.drawLine(garis[i].getX(), garis[i].getY(), garis[i+1].getX(), garis[i+1].getY());
    }


    painter.setPen(QPen(Qt::red, 3));
    Line temp_garis = garis;

    // Garis Pembantu
    while (temp_garis.length() != 2){
        temp.clear();

        for (size_t i = 0; i < temp_garis.length() - 1; ++i) {
            temp += Line::interpolate(temp_garis[i], temp_garis[i+1], t);
        }

        temp_garis = temp;

        for (size_t i = 0; i < temp.length() - 1; ++i) {
            painter.drawLine(temp[i].getX(), temp[i].getY(), temp[i+1].getX(), temp[i+1].getY());
        }

    }

    painter.setPen(QPen(Qt::blue, 5));
    Dot point1 = brutegweh.calculateBezierPoint(t, garis.getVector());
    Dot point2 = brutegweh.calculateBezierPoint(t + 0.01, garis.getVector());
    painter.drawLine(point1.getX(),point1.getY(),point2.getX(),point2.getY());
}

void MainWindow::drawNextSegment()
{
    t += (double) 1 / (double)(numPoints - 1);
    if (t > 1) {
        t = 0;
        if (iterAnim < iter) {
            iterAnim++;
        } else {
            iterAnim = 0;
        }
        numPoints = garis.length();
        int tempIter = iterAnim;
        while (tempIter > 0) {
            numPoints += numPoints - 1;
            tempIter--;
        }
    }
    std::cout << numPoints - 1 << " : numPoints - 1" << std::endl;
    std::cout << t << " : T" << std::endl;
    update();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    delete timer;
    timer = nullptr;

    QMainWindow::closeEvent(event);
}
