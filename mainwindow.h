#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void digitClicked();
    void operatorClicked();
    void on_btnClear_clicked();
    void on_btnEqual_clicked();
    void on_btnMC_clicked();
    void on_btnMR_clicked();
    void on_btnMPlus_clicked();
    void on_btnMMinus_clicked();
    void on_actionAbout_triggered();

private:
    Ui::MainWindow *ui;
    QString currentExpression;
    double memory = 0;
};
#endif // MAINWINDOW_H
