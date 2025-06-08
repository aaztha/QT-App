/********************************************************************************
** Form generated from reading UI file 'page4.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE4_H
#define UI_PAGE4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page4
{
public:
    QWidget *centralwidget;
    QLCDNumber *lcdNumber;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Page4)
    {
        if (Page4->objectName().isEmpty())
            Page4->setObjectName("Page4");
        Page4->resize(800, 600);
        centralwidget = new QWidget(Page4);
        centralwidget->setObjectName("centralwidget");
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(80, 170, 601, 121));
        Page4->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Page4);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Page4->setMenuBar(menubar);
        statusbar = new QStatusBar(Page4);
        statusbar->setObjectName("statusbar");
        Page4->setStatusBar(statusbar);

        retranslateUi(Page4);

        QMetaObject::connectSlotsByName(Page4);
    } // setupUi

    void retranslateUi(QMainWindow *Page4)
    {
        Page4->setWindowTitle(QCoreApplication::translate("Page4", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Page4: public Ui_Page4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE4_H
