#include "login_main.h"
#include "ui_login_main.h"
#include<QString>
#include<QTimer>
#include<QTime>

Login_main::Login_main(QWidget *parent,QSqlDatabase& db_ref)
    : QMainWindow(parent)
    , ui(new Ui::Login_main),db(db_ref)
{
    ui->setupUi(this);
    QTimer* timer = new QTimer;
    connect(timer, SIGNAL(timeout()),this, SLOT(timerstart()));
    timer->start();
}

Login_main::~Login_main()
{
    delete ui;
}

void Login_main::on_loginbutton_clicked()
{
    m_control = new Controller(this);
    m_control->show();
    this->hide();
}

void Login_main::on_insertbtn_clicked()
{
    m_movie = new Movie(this,db);
    m_movie->show();
    this->hide();
}

void Login_main::timerstart()
{
    QTime time= QTime::currentTime();
    QString time_text = time.toString("hh:mm:ss");
    ui->lcdNumber->display(time_text);
}

