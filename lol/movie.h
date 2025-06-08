#ifndef MOVIE_H
#define MOVIE_H

#include <QMainWindow>
#include<QtSql/QSqlDatabase>

namespace Ui {
class Movie;
}

class Movie : public QMainWindow
{
    Q_OBJECT

public:
    explicit Movie(QWidget *parent ,QSqlDatabase& db_ref );
    ~Movie();

private slots:
    void on_insertbtn_clicked();

    void on_updatebtn_clicked();

    void on_deletebtn_clicked();

    void on_displaybtn_clicked();

private:
    Ui::Movie *ui;
    QSqlDatabase& db;
};

#endif // MOVIE_H
