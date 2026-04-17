/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLineEdit *pantalla;
    QPushButton *btn_7;
    QPushButton *btn_8;
    QPushButton *btn_9;
    QPushButton *btn_div;
    QPushButton *btn_4;
    QPushButton *btn_5;
    QPushButton *btn_6;
    QPushButton *btn_mul;
    QPushButton *btn_1;
    QPushButton *btn_2;
    QPushButton *btn_3;
    QPushButton *btn_res;
    QPushButton *btn_c;
    QPushButton *btn_0;
    QPushButton *btn_eq;
    QPushButton *btn_sum;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(250, 300);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pantalla = new QLineEdit(centralwidget);
        pantalla->setObjectName(QString::fromUtf8("pantalla"));
        pantalla->setAlignment(Qt::AlignRight);

        gridLayout->addWidget(pantalla, 0, 0, 1, 4);

        btn_7 = new QPushButton(centralwidget);
        btn_7->setObjectName(QString::fromUtf8("btn_7"));

        gridLayout->addWidget(btn_7, 1, 0, 1, 1);

        btn_8 = new QPushButton(centralwidget);
        btn_8->setObjectName(QString::fromUtf8("btn_8"));

        gridLayout->addWidget(btn_8, 1, 1, 1, 1);

        btn_9 = new QPushButton(centralwidget);
        btn_9->setObjectName(QString::fromUtf8("btn_9"));

        gridLayout->addWidget(btn_9, 1, 2, 1, 1);

        btn_div = new QPushButton(centralwidget);
        btn_div->setObjectName(QString::fromUtf8("btn_div"));

        gridLayout->addWidget(btn_div, 1, 3, 1, 1);

        btn_4 = new QPushButton(centralwidget);
        btn_4->setObjectName(QString::fromUtf8("btn_4"));

        gridLayout->addWidget(btn_4, 2, 0, 1, 1);

        btn_5 = new QPushButton(centralwidget);
        btn_5->setObjectName(QString::fromUtf8("btn_5"));

        gridLayout->addWidget(btn_5, 2, 1, 1, 1);

        btn_6 = new QPushButton(centralwidget);
        btn_6->setObjectName(QString::fromUtf8("btn_6"));

        gridLayout->addWidget(btn_6, 2, 2, 1, 1);

        btn_mul = new QPushButton(centralwidget);
        btn_mul->setObjectName(QString::fromUtf8("btn_mul"));

        gridLayout->addWidget(btn_mul, 2, 3, 1, 1);

        btn_1 = new QPushButton(centralwidget);
        btn_1->setObjectName(QString::fromUtf8("btn_1"));

        gridLayout->addWidget(btn_1, 3, 0, 1, 1);

        btn_2 = new QPushButton(centralwidget);
        btn_2->setObjectName(QString::fromUtf8("btn_2"));

        gridLayout->addWidget(btn_2, 3, 1, 1, 1);

        btn_3 = new QPushButton(centralwidget);
        btn_3->setObjectName(QString::fromUtf8("btn_3"));

        gridLayout->addWidget(btn_3, 3, 2, 1, 1);

        btn_res = new QPushButton(centralwidget);
        btn_res->setObjectName(QString::fromUtf8("btn_res"));

        gridLayout->addWidget(btn_res, 3, 3, 1, 1);

        btn_c = new QPushButton(centralwidget);
        btn_c->setObjectName(QString::fromUtf8("btn_c"));

        gridLayout->addWidget(btn_c, 4, 0, 1, 1);

        btn_0 = new QPushButton(centralwidget);
        btn_0->setObjectName(QString::fromUtf8("btn_0"));

        gridLayout->addWidget(btn_0, 4, 1, 1, 1);

        btn_eq = new QPushButton(centralwidget);
        btn_eq->setObjectName(QString::fromUtf8("btn_eq"));

        gridLayout->addWidget(btn_eq, 4, 2, 1, 1);

        btn_sum = new QPushButton(centralwidget);
        btn_sum->setObjectName(QString::fromUtf8("btn_sum"));

        gridLayout->addWidget(btn_sum, 4, 3, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        btn_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btn_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btn_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btn_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        btn_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btn_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btn_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btn_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        btn_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btn_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btn_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btn_res->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btn_c->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        btn_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btn_eq->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        btn_sum->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        (void)MainWindow;
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
