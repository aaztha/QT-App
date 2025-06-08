/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *user_label;
    QLabel *pass_label;
    QLineEdit *user_lineEdit;
    QLineEdit *pass_lineEdit;
    QPushButton *login_btn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:  rgb(9, 0, 0);\n"
"color:rgb(58, 255, 239);\n"
"font: 700 11pt \"Terminal\";\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(20, 10, 771, 491));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        user_label = new QLabel(formLayoutWidget);
        user_label->setObjectName("user_label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, user_label);

        pass_label = new QLabel(formLayoutWidget);
        pass_label->setObjectName("pass_label");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, pass_label);

        user_lineEdit = new QLineEdit(formLayoutWidget);
        user_lineEdit->setObjectName("user_lineEdit");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, user_lineEdit);

        pass_lineEdit = new QLineEdit(formLayoutWidget);
        pass_lineEdit->setObjectName("pass_lineEdit");
        pass_lineEdit->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, pass_lineEdit);

        login_btn = new QPushButton(centralwidget);
        login_btn->setObjectName("login_btn");
        login_btn->setGeometry(QRect(340, 510, 131, 41));
        login_btn->setStyleSheet(QString::fromUtf8("color:rgb(58, 255, 239);\n"
"font: 800 13pt \"Rockwell\";"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        user_label->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        pass_label->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        pass_lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter ypur password", nullptr));
        login_btn->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
