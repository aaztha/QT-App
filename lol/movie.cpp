#include "movie.h"
#include "ui_movie.h"
#include<QSqlQuery>

Movie::Movie(QWidget *parent,QSqlDatabase& db_ref)
    : QMainWindow(parent)
    , ui(new Ui::Movie),db(db_ref)
{
    ui->setupUi(this);
}

Movie::~Movie()
{
    delete ui;
}

void Movie::on_insertbtn_clicked()
{

    db.open(); //open datatbase
    QSqlDatabase::database().transaction(); //began a transaction/program
    QSqlQuery InsertQry(db);
    InsertQry.prepare("INSERT INTO Movie(title,Desc,Genre) VALUES(:title,:Desc,:Genre)");
    InsertQry.bindValue(":title",ui->titlelineEdit->text());
    InsertQry.bindValue(":Desc",ui->desclineEdit_3->text());
    InsertQry.bindValue(":Genre",ui->GenrelineEdit_2->text());
    InsertQry.exec();
    QSqlDatabase::database().commit(); // saves all changes made during current SQL transaction on default database connection.
    db.close();
}


void Movie::on_updatebtn_clicked()
{
    db.open();
    QSqlDatabase::database().transaction();

    QSqlQuery UpdateQry(db);
    UpdateQry.prepare("UPDATE Movie SET Desc=:Desc,Genre=:Genre WHERE title=:title");
    UpdateQry.bindValue(":title",ui->titlelineEdit->text());
    UpdateQry.bindValue(":Desc",ui->desclineEdit_3->text());
    UpdateQry.bindValue(":Genre",ui->GenrelineEdit_2->text());
    UpdateQry.exec();

    QSqlDatabase::database().commit();

    QSqlDatabase::database().commit();
    db.close();
}


void Movie::on_deletebtn_clicked()
{
    db.open();
    QSqlDatabase::database().transaction();

    QSqlQuery DeleteQry(db);
    DeleteQry.prepare("DELETE FROM Movie WHERE title=:title");
    DeleteQry.bindValue(":title",ui->titlelineEdit->text());
    DeleteQry.exec();

    QSqlDatabase::database().commit();
    db.close();
}


void Movie::on_displaybtn_clicked()
{
    db.open();
    QSqlDatabase::database().transaction();

    QSqlQuery DisplayQry(db);
    DisplayQry.prepare("SELECT * FROM Movie");
    int numofRows=5;
    if(DisplayQry.exec())
    {
        ui->tableWidget->setRowCount(numofRows);
        int RowNumber = 0;
        while(DisplayQry.next())
        {
            ui->tableWidget->setItem(RowNumber,0,new QTableWidgetItem(QString(DisplayQry.value("title").toString())));
            ui->tableWidget->setItem(RowNumber,1,new QTableWidgetItem(QString(DisplayQry.value("Desc").toString())));
            ui->tableWidget->setItem(RowNumber,2, new QTableWidgetItem(QString(DisplayQry.value("Genre").toString())));
            RowNumber++;
        }
    }

    QSqlDatabase::database().commit();
    db.close();
}

