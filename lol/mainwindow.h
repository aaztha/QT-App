#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "login_main.h"
#include <QtSql/QSqlDatabase>
#include<QtSql/QSqlQuery>

class Login_main;

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
    void on_login_btn_clicked();

private:
    Ui::MainWindow *ui;
    Login_main *login_sucess;

public:
    QSqlDatabase db_connection;
};
#endif // MAINWINDOW_H
