#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onButtonClicked();

    void onMCclicked();

    void onMRclicked();

    void onMAddclicked();

    void onMSubclicked();

    void onClearclicked();

    void onSevenclicked();

    void onEightclicked();

    void onNineclicked();

    void onFourclicked();

    void onFiveclicked();

    void onSixclicked();

    void onOneclicked();

    void onTwoclicked();

    void onThreeclicked();

    void onZeroclicked();

    void onDotclicked();

    void onDivclicked();

    void onMultiplyclicked();

    void onMinusclicked();

    void onPlusclicked();

    void onEqualclicked();

    void onModclicked();

    void onInfoclicked();

private:
    Ui::MainWindow *ui;
    double memoryValue = 0;
    double firstNumber = 0;
    QString pendingOperator;
    bool waitingForSecondNumber = false;
    bool resetScreen = false;

};
#endif
