#include "widget.h"
#include "./ui_widget.h"
#include<QPaintEvent>
#include<QPainter>
#include<QTimer>
#include<QTime>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QTimer *tim = new QTimer (this);
    connect(tim, &QTimer::timeout,this, &Widget::timerfn);
    tim->start(100);

}

void Widget:: paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawRect(100,80,90,900);
}

void Widget::timerfn()
{
    ui->label->setText(QTime::currentTime().toString("hh:mm:ss"));
    ui->timeEdit->setTime(QTime::currentTime());
}

Widget::~Widget()
{
    delete ui;
}
