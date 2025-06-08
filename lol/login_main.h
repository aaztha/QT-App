#ifndef LOGIN_MAIN_H
#define LOGIN_MAIN_H

#include <QMainWindow>
#include "controller.h"
#include "movie.h"
#include<QtSql/QSqlDatabase>
// class Controller;
// class Movie;

namespace Ui {
class Login_main;
}

class Login_main : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login_main(QWidget *parent ,QSqlDatabase& db_ref );
    ~Login_main();

private:
    Ui::Login_main *ui;
    Controller *m_control;
    Movie *m_movie;
    QSqlDatabase& db;

private slots:
    void on_loginbutton_clicked();
    void on_insertbtn_clicked();
    void timerstart();
};

#endif // LOGIN_MAIN_H
