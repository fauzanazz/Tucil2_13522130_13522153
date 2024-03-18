#ifndef CONTROLLER_H
#define CONTROLLER_H


#include <QDialog>
#include "mainwindow.h"
#include "Line.h"

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
    void on_pushButton_4_clicked();
    void solveBezierDnC(MainWindow* window);
    void solveBezierBrute(MainWindow* window);
    void on_textEdit_textChanged();
    void transformDot();
    void on_pushButton_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::Controller *ui;
    MainWindow *panel;
    Line GarisControl;
    int iteration = 0;
};

#endif // CONTROLLER_H
