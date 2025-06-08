#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QMainWindow>

namespace Ui {
class Controller;
}

class Controller : public QMainWindow
{
    Q_OBJECT

public:
    explicit Controller(QWidget *parent = nullptr);
    ~Controller();

private slots:
    void on_addButton_clicked();

    void on_subtractbutton_clicked();

    void on_divbutton_clicked();

    void on_multbutton_clicked();

    void on_lessgobutton_clicked();

private:
    Ui::Controller *ui;
    int add;
    int sub;
    int div;
    int multi;

};

#endif // CONTROLLER_H
