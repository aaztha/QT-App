#include "widget.h"
#include "./ui_widget.h"
#include "customwidget.h"
#include<QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,this,&Widget::changecolor);
    connect(ui->pushButton,&QPushButton::clicked,this,&Widget::printline);
    connect(this, &Widget::signalmessage,this, &Widget::slotondebug);
    customwidget cus;

}

Widget::~Widget()
{
    delete ui;
}

void Widget::changecolor()
{
   QString currentStyle = this->styleSheet();
    if (currentStyle.contains("purple", Qt::CaseInsensitive)) {
        this->setStyleSheet("background-color: green;");
    } else {
        this->setStyleSheet("background-color: purple;");
    }

    emit signalmessage(ui->lineEdit->text());
}

void Widget::printline()
{
    QString text=ui->lineEdit->text();
    qDebug()<<text;
}

void Widget::slotondebug(QString s)
{
    qDebug()<<s;
}

