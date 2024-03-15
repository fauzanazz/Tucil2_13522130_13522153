#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPainterPath>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Result)
    , bezierCurve()
    , t(0)
    , brutegweh(0)
{
    ui->setupUi(this);

    garis += Dot(300,500);
    garis += Dot(500,200);
    garis += Dot(700,300);

    brutegweh = bejir(0);
    Line solve = brutegweh.calculateBezierPoint(garis.getVector(), 100);
    brutegweh.setGarisBezier(solve);

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::drawNextSegment);
    timer->start(1000 / 30);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::addBezierCurve(Line curve)
{
    bezierCurve = curve;
    update();
}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(QPen(Qt::green, 2));

    Line resultInterpolated;
    Line temp;

    Line solve = brutegweh.getGarisBezier();
    for (int i = 0; i < brutegweh.getGarisBezier().length() - 1; ++i){
        painter.drawEllipse(solve[i].getX(),solve[i].getY(),3,3);
    }

    Line temp_garis = garis;
    painter.setPen(QPen(Qt::black, 2));
    for (int i = 0; i < garis.length()-1; i++){
        painter.drawLine(garis[i].getX(), garis[i].getY(), garis[i+1].getX(), garis[i+1].getY());
    }

    painter.setPen(QPen(Qt::red, 3));
    // Interpolate garis
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
    t += 0.01;
    if (t > 1) {
        t = 0;
    }
    update();
}
