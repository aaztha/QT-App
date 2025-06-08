#ifndef CUSTOMWIDGET_H
#define CUSTOMWIDGET_H
#include <QWidget>
#include <QPushButton>

class customwidget : public QWidget
{
    Q_OBJECT
public:
    explicit customwidget(QWidget *parent = nullptr);

private slots:
    void makeslot();

private:
    QPushButton *button;
};

#endif // CUSTOMWIDGET_H
