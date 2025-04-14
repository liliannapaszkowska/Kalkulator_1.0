#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QList<QPushButton*> buttons = findChildren<QPushButton*>();
    for (auto* button : buttons) {
        QString text = button->text();
        if (text >= "0" && text <= "9" || text == ".") {
            connect(button, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
        }
    }


    connect(ui->Equal, &QPushButton::clicked, this, &MainWindow::onEqualclicked);

    connect(ui->clear, &QPushButton::clicked, this, [=]() {
        ui->screen->clear();
    });
    connect(ui->mc, &QPushButton::clicked, this, &MainWindow::onMCclicked);

    connect(ui->mr, &QPushButton::clicked, this, &MainWindow::onMRclicked);

    connect(ui->madd, &QPushButton::clicked, this, &MainWindow::onMAddclicked);

    connect(ui->msub, &QPushButton::clicked, this, &MainWindow::onMSubclicked);

    connect(ui->plus, &QPushButton::clicked, this, &MainWindow::onPlusclicked);

    connect(ui->minus, &QPushButton::clicked, this, &MainWindow::onMinusclicked);

    connect(ui->multiply, &QPushButton::clicked, this, &MainWindow::onMultiplyclicked);

    connect(ui->div, &QPushButton::clicked, this, &MainWindow::onDivclicked);

    connect(ui->mod, &QPushButton::clicked, this, &MainWindow::onModclicked);

    connect(ui->information, &QPushButton::clicked, this, &MainWindow::onInfoclicked);

}
void MainWindow::onButtonClicked() {
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    if (button) {
        QString value = button->text();
        if (resetScreen) {
            ui->screen->setText(value);
            resetScreen = false;
        } else {
            ui->screen->setText(ui->screen->text() + value);
        }
    }
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::onMCclicked()
{
    memoryValue = 0;
}


void MainWindow::onMRclicked()
{
    ui->screen->setText(QString::number(memoryValue));
}


void MainWindow::onMAddclicked()
{
    double current = ui->screen->text().toDouble();
    memoryValue += current;
    ui->screen->clear();
}


void MainWindow::onMSubclicked()
{
    double current = ui->screen->text().toDouble();
    memoryValue -= current;
    ui->screen->clear();
}

void MainWindow::onClearclicked()
{
    ui->screen->clear();
    firstNumber = 0;
    pendingOperator.clear();
}


void MainWindow::onSevenclicked()
{
    ui->screen->setText(ui->screen->text() + "7");
}


void MainWindow::onEightclicked()
{
    ui->screen->setText(ui->screen->text() + "8");
}


void MainWindow::onNineclicked()
{
    ui->screen->setText(ui->screen->text() + "9");
}


void MainWindow::onFourclicked()
{
    ui->screen->setText(ui->screen->text() + "4");
}


void MainWindow::onFiveclicked()
{
    ui->screen->setText(ui->screen->text() + "5");
}


void MainWindow::onSixclicked()
{
    ui->screen->setText(ui->screen->text() + "6");
}


void MainWindow::onOneclicked()
{
    ui->screen->setText(ui->screen->text() + "1");
}


void MainWindow::onTwoclicked()
{
    ui->screen->setText(ui->screen->text() + "2");
}


void MainWindow::onThreeclicked()
{
    ui->screen->setText(ui->screen->text() + "3");
}


void MainWindow::onZeroclicked()
{
    ui->screen->setText(ui->screen->text() + "0");
}


void MainWindow::onDotclicked()
{
    ui->screen->setText(ui->screen->text() + ".");
}


void MainWindow::onDivclicked()
{
    firstNumber = ui->screen->text().toDouble();
    pendingOperator = "/";
    ui->screen->clear();
}


void MainWindow::onMultiplyclicked()
{
    firstNumber = ui->screen->text().toDouble();
    pendingOperator = "*";
    ui->screen->clear();
}


void MainWindow::onMinusclicked()
{
    firstNumber = ui->screen->text().toDouble();
    pendingOperator = "-";
    ui->screen->clear();
}


void MainWindow::onPlusclicked()
{
    firstNumber = ui->screen->text().toDouble();
    pendingOperator = "+";
    ui->screen->clear();
}

void MainWindow::onModclicked()
{
    firstNumber = ui->screen->text().toDouble();
    pendingOperator = "%";
    ui->screen->clear();
}

void MainWindow::onEqualclicked()
{

    double secondNumber = ui->screen->text().toDouble();
    double result = 0;

    if (pendingOperator == "+")
        result = firstNumber + secondNumber;
    else if (pendingOperator == "-")
        result = firstNumber - secondNumber;
    else if (pendingOperator == "*")
        result = firstNumber * secondNumber;
    else if (pendingOperator == "/") {
        if (secondNumber != 0)
            result = firstNumber / secondNumber;
        else {
            ui->screen->setText("Nie można dzielić przez zero");
            return;
        }
    }
    else if (pendingOperator == "%") {
        int a = static_cast<int>(firstNumber);
        int b = static_cast<int>(secondNumber);
        if (b != 0)
            result = a % b;
        else {
            ui->screen->setText("Nie można dzielić przez zero");
            return;
        }
    }

    ui->screen->setText(QString::number(result));
    firstNumber = 0;
    pendingOperator.clear();
    resetScreen = true;
}





void MainWindow::onInfoclicked()
{
    QMessageBox::about(this, "O programie",
                       "Kalkulator Qt\n"
                       "Autor: Lilia P 288139\n"
                       "Rok: 2025\n"
                       "Dzięki za używanie mojego kalkulatora!");
}

