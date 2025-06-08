#include "customwidget.h"
#include <QPalette>
#include <QVBoxLayout>
#include "widget.h"

customwidget::customwidget(QWidget *parent)
    : QWidget{parent}
{
    QPalette pal =palette();
    pal.setColor(QPalette::Window,  QColor("purple"));
    this->setAutoFillBackground(true);
    setPalette(pal);

    button =  new QPushButton("Life",this);
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout -> addWidget(button);
    setLayout(layout);

    Widget win;

    connect(button, &QPushButton::clicked,this, &customwidget::makeslot);
}

void customwidget::makeslot()
{
    QPalette pal = palette();
    pal.setColor(QPalette::Window, Qt::blue);
    setPalette(pal);
}

