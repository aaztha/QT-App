#include "mainwindow.h"
#include <QMessageBox>
#include <QString>
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->login_btn,SIGNAL(clicked()),this, SLOT(on_login_btn_clicked()));

    //Connect database to qt
    db_connection = QSqlDatabase::addDatabase("QSQLITE");
    db_connection.setDatabaseName("C:/Users/coder/sqlite files/first.db");
    if(db_connection.open())
        qDebug()<<"Data Connected";
    else
        qDebug()<<"Error:not connected";

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_login_btn_clicked()
{
    QString username = ui->user_lineEdit->text();
    QString password = ui->pass_lineEdit->text();
    QSqlQuery sqlqry;
    sqlqry.prepare("select * from login where username = '"+username+"' and password = '"+password+"'");

    if (sqlqry.exec()) {
        int count =0;
        while(sqlqry.next())
        {
            count++;
        }
        if (count==1)
        {
        hide();
        login_sucess = new Login_main(this,db_connection);
        login_sucess->show();
        }
        else if(count>1)
        {
        QMessageBox::critical(this, "Duplicated Alert", "Duplicate Username or Password");
        }
        else
        {
        QMessageBox::critical(this, "Login Failed", "Username or Password is incorrect");
        }
    }
}
