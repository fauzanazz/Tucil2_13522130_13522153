/********************************************************************************
** Form generated from reading UI file 'controller.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLLER_H
#define UI_CONTROLLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Controller
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Controller)
    {
        if (Controller->objectName().isEmpty())
            Controller->setObjectName("Controller");
        Controller->resize(400, 300);
        verticalLayoutWidget = new QWidget(Controller);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 190, 201, 101));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout->addWidget(pushButton_4);

        textEdit = new QTextEdit(Controller);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(203, 36, 191, 261));
        lineEdit = new QLineEdit(Controller);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 40, 181, 26));
        label = new QLabel(Controller);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 63, 20));
        label_2 = new QLabel(Controller);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(210, 10, 63, 20));

        retranslateUi(Controller);

        QMetaObject::connectSlotsByName(Controller);
    } // setupUi

    void retranslateUi(QDialog *Controller)
    {
        Controller->setWindowTitle(QCoreApplication::translate("Controller", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Controller", "Brute Force", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Controller", "Divide N Conquer", nullptr));
        label->setText(QCoreApplication::translate("Controller", "Iteration", nullptr));
        label_2->setText(QCoreApplication::translate("Controller", "Point", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Controller: public Ui_Controller {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLLER_H
