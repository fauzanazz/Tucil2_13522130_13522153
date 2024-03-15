#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "bejir.h"
#include <QPainter>
#include <QTimer>
#include <QWidget>

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
    void addBezierCurve(Line curve);
    void drawNextSegment();


protected:
    void paintEvent(QPaintEvent *event) override;

private:
    Ui::Result *ui;
    Line bezierCurve;
    double t; // Parameter for the Bezier curve
    QTimer *timer; // Timer for the animation
    Line garis;
    bejir brutegweh;
};

#endif // MAINWINDOW_H
