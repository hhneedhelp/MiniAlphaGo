#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "model.h"
#include <QString>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void getbtn0();
    void getbtn1();
    void getbtn2();

    void on_bt_3_clicked();

    void on_bt_4_clicked();

    void on_bt_5_clicked();

    void on_bt_6_clicked();

    void on_bt_7_clicked();

    void on_bt_8_clicked();

    void on_bt_9_clicked();

    void on_bt_add_clicked();

    void on_bt_min_clicked();

    void on_bt_mul_clicked();

    void on_bt_div_clicked();

    void on_bt_equ_clicked();

    void getbtn_c();

private:
    Ui::MainWindow *ui;

    model * mode;//功能对象
    QString tmp;
};
#endif // MAINWINDOW_H
