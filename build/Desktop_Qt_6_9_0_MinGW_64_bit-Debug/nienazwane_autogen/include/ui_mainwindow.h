/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *screen;
    QPushButton *mc;
    QPushButton *mr;
    QPushButton *msub;
    QPushButton *madd;
    QPushButton *div;
    QPushButton *mod;
    QPushButton *clear;
    QPushButton *dwa;
    QPushButton *jeden;
    QPushButton *piec;
    QPushButton *minus;
    QPushButton *trzy;
    QPushButton *szesc;
    QPushButton *plus;
    QPushButton *cztery;
    QPushButton *zero;
    QPushButton *kropka;
    QPushButton *Equal;
    QPushButton *osiem;
    QPushButton *multiply;
    QPushButton *dziewiec;
    QPushButton *siedem;
    QPushButton *information;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(272, 472);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        screen = new QLabel(centralwidget);
        screen->setObjectName("screen");
        screen->setGeometry(QRect(10, 10, 251, 71));
        mc = new QPushButton(centralwidget);
        mc->setObjectName("mc");
        mc->setGeometry(QRect(20, 100, 51, 51));
        mr = new QPushButton(centralwidget);
        mr->setObjectName("mr");
        mr->setGeometry(QRect(80, 100, 51, 51));
        msub = new QPushButton(centralwidget);
        msub->setObjectName("msub");
        msub->setGeometry(QRect(200, 100, 51, 51));
        madd = new QPushButton(centralwidget);
        madd->setObjectName("madd");
        madd->setGeometry(QRect(140, 100, 51, 51));
        div = new QPushButton(centralwidget);
        div->setObjectName("div");
        div->setGeometry(QRect(200, 160, 51, 51));
        mod = new QPushButton(centralwidget);
        mod->setObjectName("mod");
        mod->setGeometry(QRect(140, 160, 51, 51));
        clear = new QPushButton(centralwidget);
        clear->setObjectName("clear");
        clear->setGeometry(QRect(20, 160, 111, 51));
        dwa = new QPushButton(centralwidget);
        dwa->setObjectName("dwa");
        dwa->setGeometry(QRect(80, 340, 51, 51));
        jeden = new QPushButton(centralwidget);
        jeden->setObjectName("jeden");
        jeden->setGeometry(QRect(20, 340, 51, 51));
        piec = new QPushButton(centralwidget);
        piec->setObjectName("piec");
        piec->setGeometry(QRect(80, 280, 51, 51));
        minus = new QPushButton(centralwidget);
        minus->setObjectName("minus");
        minus->setGeometry(QRect(200, 280, 51, 51));
        trzy = new QPushButton(centralwidget);
        trzy->setObjectName("trzy");
        trzy->setGeometry(QRect(140, 340, 51, 51));
        szesc = new QPushButton(centralwidget);
        szesc->setObjectName("szesc");
        szesc->setGeometry(QRect(140, 280, 51, 51));
        plus = new QPushButton(centralwidget);
        plus->setObjectName("plus");
        plus->setGeometry(QRect(200, 340, 51, 51));
        cztery = new QPushButton(centralwidget);
        cztery->setObjectName("cztery");
        cztery->setGeometry(QRect(20, 280, 51, 51));
        zero = new QPushButton(centralwidget);
        zero->setObjectName("zero");
        zero->setGeometry(QRect(20, 400, 111, 51));
        kropka = new QPushButton(centralwidget);
        kropka->setObjectName("kropka");
        kropka->setGeometry(QRect(140, 400, 51, 51));
        Equal = new QPushButton(centralwidget);
        Equal->setObjectName("Equal");
        Equal->setGeometry(QRect(200, 400, 51, 51));
        osiem = new QPushButton(centralwidget);
        osiem->setObjectName("osiem");
        osiem->setGeometry(QRect(80, 220, 51, 51));
        multiply = new QPushButton(centralwidget);
        multiply->setObjectName("multiply");
        multiply->setGeometry(QRect(200, 220, 51, 51));
        dziewiec = new QPushButton(centralwidget);
        dziewiec->setObjectName("dziewiec");
        dziewiec->setGeometry(QRect(140, 220, 51, 51));
        siedem = new QPushButton(centralwidget);
        siedem->setObjectName("siedem");
        siedem->setGeometry(QRect(20, 220, 51, 51));
        information = new QPushButton(centralwidget);
        information->setObjectName("information");
        information->setGeometry(QRect(250, 450, 20, 20));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        screen->setText(QString());
        mc->setText(QCoreApplication::translate("MainWindow", "MC", nullptr));
        mr->setText(QCoreApplication::translate("MainWindow", "MR", nullptr));
        msub->setText(QCoreApplication::translate("MainWindow", "M-", nullptr));
        madd->setText(QCoreApplication::translate("MainWindow", "M+", nullptr));
        div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        mod->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        dwa->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        jeden->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        piec->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        trzy->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        szesc->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        cztery->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        zero->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        kropka->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        Equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        osiem->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        multiply->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        dziewiec->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        siedem->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        information->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
