#include "controller.h"
#include "ui_controller.h"
#include<QString>

Controller::Controller(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Controller)
{
    ui->setupUi(this);
    connect(ui->lessgobutton, SIGNAL(clicked()),this,SLOT(on_lessgobutton_clicked()));
}

Controller::~Controller()
{
    delete ui;
}

void Controller::on_addButton_clicked()
{
    qint64 num1= ui->num1->toPlainText().toInt();
    int num2= ui->num2->toPlainText().toInt();
    add = num1+num2;
    ui->result->setText(QString::number(add));

}


void Controller::on_subtractbutton_clicked()
{
    qint64 num1= ui->num1->toPlainText().toInt();
    int num2= ui->num2->toPlainText().toInt();
    sub = num1-num2;
    ui->result->setPlainText(QString::number(sub));
}


void Controller::on_divbutton_clicked()
{
    qint64 num1= ui->num1->toPlainText().toInt();
    int num2= ui->num2->toPlainText().toInt();
    div = num1/num2;
    ui->result->setPlainText(QString::number(div));
}


void Controller::on_multbutton_clicked()
{
    qint64 num1= ui->num1->toPlainText().toInt();
    int num2= ui->num2->toPlainText().toInt();
    multi = num1*num2;
    ui->result->setPlainText(QString::number(multi));
}

void Controller::on_lessgobutton_clicked()
{
    this->hide();                // hide the current window
    this->parentWidget()->show(); // show the parent (Login_main)
}
