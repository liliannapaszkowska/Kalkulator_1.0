#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(this->size());

    QList<QPushButton*> buttons = findChildren<QPushButton*>();
    for (auto btn : buttons) {
        QString name = btn->objectName();
        if (name.startsWith("btn") && name != "btnClear" && name != "btnEqual"
            && name != "btnMC" && name != "btnMR" && name != "btnMPlus" && name != "btnMMinus") {
            connect(btn, &QPushButton::clicked, this, &MainWindow::digitClicked);
        }
    }

    connect(ui->btnPlus, &QPushButton::clicked, this, &MainWindow::operatorClicked);
    connect(ui->btnMinus, &QPushButton::clicked, this, &MainWindow::operatorClicked);
    connect(ui->btnMultiply, &QPushButton::clicked, this, &MainWindow::operatorClicked);
    connect(ui->btnDivide, &QPushButton::clicked, this, &MainWindow::operatorClicked);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::digitClicked() {
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (button) {
        currentExpression += button->text();
        ui->display->setText(currentExpression);
    }
}

void MainWindow::operatorClicked() {
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (button) {
        currentExpression += " " + button->text() + " ";
        ui->display->setText(currentExpression);
    }
}

void MainWindow::on_btnClear_clicked() {
    currentExpression = "";
    ui->display->clear();
}

void MainWindow::on_btnEqual_clicked() {
    QStringList parts = currentExpression.split(" ");
    if (parts.size() != 3) {
        ui->display->setText("Błąd");
        return;
    }

    double a = parts[0].toDouble();
    QString op = parts[1];
    double b = parts[2].toDouble();
    double result = 0;

    if (op == "+") result = a + b;
    else if (op == "-") result = a - b;
    else if (op == "*") result = a * b;
    else if (op == "/") {
        if (b == 0) {
            ui->display->setText("Błąd: /0");
            return;
        }
        result = a / b;
    }

    ui->display->setText(QString::number(result));
    currentExpression = QString::number(result);
}

void MainWindow::on_btnMC_clicked() {
    memory = 0;
    ui->statusbar->showMessage("Pamięć wyczyszczona");
}

void MainWindow::on_btnMR_clicked() {
    currentExpression = QString::number(memory);
    ui->display->setText(currentExpression);
    ui->statusbar->showMessage("Pobrano z pamięci");
}

void MainWindow::on_btnMPlus_clicked() {
    memory += ui->display->text().toDouble();
    ui->statusbar->showMessage("Dodano do pamięci");
}

void MainWindow::on_btnMMinus_clicked() {
    memory -= ui->display->text().toDouble();
    ui->statusbar->showMessage("Odjęto z pamięci");
}

void MainWindow::on_actionAbout_triggered() {
    QMessageBox::information(this, "O autorze", "Autor: Twoje Imię
Projekt Qt Kalkulator
2025");
}
