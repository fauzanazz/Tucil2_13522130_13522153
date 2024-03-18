#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "bejir.h"
#include <QPainter>
#include <QTimer>
#include <QWidget>
#include <QElapsedTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class Result;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void addBezierCurve(Line curve, bool brute,int iteration);
    void drawNextSegment();


protected:
    void paintEvent(QPaintEvent *event) override;
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::Result *ui;
    bool isBrute = false;
    int iter = 0;
    int numPoints;

    double t; // Parameter for the Bezier curve
    QTimer *timer; // Timer for the animation
    QElapsedTimer exec; //  Timer for exec time

    Line garis;
    bejir brutegweh;

    int iterAnim = 0;
};

#endif // MAINWINDOW_H
