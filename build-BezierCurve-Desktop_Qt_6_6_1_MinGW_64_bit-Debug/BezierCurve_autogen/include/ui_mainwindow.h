/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Result
{
public:
    QAction *showController;
    QWidget *centralwidget;

    void setupUi(QMainWindow *Result)
    {
        if (Result->objectName().isEmpty())
            Result->setObjectName("Result");
        Result->resize(1600, 900);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Result->sizePolicy().hasHeightForWidth());
        Result->setSizePolicy(sizePolicy);
        Result->setMinimumSize(QSize(1024, 720));
        showController = new QAction(Result);
        showController->setObjectName("showController");
        centralwidget = new QWidget(Result);
        centralwidget->setObjectName("centralwidget");
        Result->setCentralWidget(centralwidget);

        retranslateUi(Result);

        QMetaObject::connectSlotsByName(Result);
    } // setupUi

    void retranslateUi(QMainWindow *Result)
    {
        Result->setWindowTitle(QCoreApplication::translate("Result", "MainWindow", nullptr));
        showController->setText(QCoreApplication::translate("Result", "Show Controller", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Result: public Ui_Result {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
