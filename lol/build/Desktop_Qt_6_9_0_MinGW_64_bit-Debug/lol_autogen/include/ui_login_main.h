/********************************************************************************
** Form generated from reading UI file 'login_main.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_MAIN_H
#define UI_LOGIN_MAIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login_main
{
public:
    QWidget *centralwidget;
    QPushButton *loginbutton;
    QPushButton *insertbtn;
    QLCDNumber *lcdNumber;
    QTextBrowser *textBrowser;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login_main)
    {
        if (Login_main->objectName().isEmpty())
            Login_main->setObjectName("Login_main");
        Login_main->resize(422, 349);
        Login_main->setStyleSheet(QString::fromUtf8("background:qlineargradient(spread:pad, x1:0.812, y1:0.943182, x2:0.846, y2:0.063, stop:0 rgba(15, 69, 32, 255), stop:0.394231 rgba(108, 224, 204, 255), stop:0.745192 rgba(33, 107, 122, 255), stop:0.990385 rgba(39, 48, 46, 255)); \n"
"color:white;\n"
""));
        centralwidget = new QWidget(Login_main);
        centralwidget->setObjectName("centralwidget");
        loginbutton = new QPushButton(centralwidget);
        loginbutton->setObjectName("loginbutton");
        loginbutton->setEnabled(true);
        loginbutton->setGeometry(QRect(20, 40, 371, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(9);
        font.setWeight(QFont::Black);
        font.setItalic(false);
        loginbutton->setFont(font);
        loginbutton->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:rgb(43, 89, 99);\n"
"font: 900 9pt \"Segoe UI\";"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/png/yay bee.webp"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        loginbutton->setIcon(icon);
        loginbutton->setIconSize(QSize(60, 60));
        insertbtn = new QPushButton(centralwidget);
        insertbtn->setObjectName("insertbtn");
        insertbtn->setEnabled(true);
        insertbtn->setGeometry(QRect(20, 130, 371, 71));
        insertbtn->setFont(font);
        insertbtn->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:rgb(43, 89, 99);\n"
"font: 900 9pt \"Segoe UI\";"));
        insertbtn->setIcon(icon);
        insertbtn->setIconSize(QSize(60, 60));
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(230, 230, 111, 51));
        lcdNumber->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:rgb(43, 89, 99);\n"
""));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(30, 220, 151, 81));
        textBrowser->setAutoFillBackground(false);
        Login_main->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Login_main);
        statusbar->setObjectName("statusbar");
        Login_main->setStatusBar(statusbar);

        retranslateUi(Login_main);

        QMetaObject::connectSlotsByName(Login_main);
    } // setupUi

    void retranslateUi(QMainWindow *Login_main)
    {
        Login_main->setWindowTitle(QCoreApplication::translate("Login_main", "MainWindow", nullptr));
        loginbutton->setText(QCoreApplication::translate("Login_main", "Calculator", nullptr));
        insertbtn->setText(QCoreApplication::translate("Login_main", "CRUD w movie Data", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Login_main", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700; font-style:italic;\">Your time is running!</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login_main: public Ui_Login_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_MAIN_H
