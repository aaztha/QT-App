/********************************************************************************
** Form generated from reading UI file 'controller.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLLER_H
#define UI_CONTROLLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Controller
{
public:
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *labelnum1;
    QPlainTextEdit *num1;
    QLabel *label_num2;
    QPlainTextEdit *num2;
    QLabel *label_res;
    QTextEdit *result;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *addButton;
    QRadioButton *subtractbutton;
    QRadioButton *divbutton;
    QRadioButton *multbutton;
    QPushButton *lessgobutton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Controller)
    {
        if (Controller->objectName().isEmpty())
            Controller->setObjectName("Controller");
        Controller->resize(857, 596);
        centralwidget = new QWidget(Controller);
        centralwidget->setObjectName("centralwidget");
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(30, 10, 801, 501));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        labelnum1 = new QLabel(formLayoutWidget);
        labelnum1->setObjectName("labelnum1");
        labelnum1->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 900 9pt \"Segoe UI\";"));

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, labelnum1);

        num1 = new QPlainTextEdit(formLayoutWidget);
        num1->setObjectName("num1");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(num1->sizePolicy().hasHeightForWidth());
        num1->setSizePolicy(sizePolicy);
        num1->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:rgb(43, 89, 99);\n"
"font: 900 9pt \"Segoe UI\";"));

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, num1);

        label_num2 = new QLabel(formLayoutWidget);
        label_num2->setObjectName("label_num2");
        label_num2->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 900 9pt \"Segoe UI\";"));

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_num2);

        num2 = new QPlainTextEdit(formLayoutWidget);
        num2->setObjectName("num2");
        num2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:rgb(43, 89, 99);\n"
"font: 900 9pt \"Segoe UI\";"));

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, num2);

        label_res = new QLabel(formLayoutWidget);
        label_res->setObjectName("label_res");
        label_res->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 900 9pt \"Segoe UI\";"));

        formLayout->setWidget(6, QFormLayout::ItemRole::LabelRole, label_res);

        result = new QTextEdit(formLayoutWidget);
        result->setObjectName("result");
        result->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:rgb(43, 89, 99);\n"
"font: 900 9pt \"Segoe UI\";"));

        formLayout->setWidget(6, QFormLayout::ItemRole::FieldRole, result);

        verticalSpacer = new QSpacerItem(20, 400, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(3, QFormLayout::ItemRole::FieldRole, verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        addButton = new QRadioButton(formLayoutWidget);
        addButton->setObjectName("addButton");
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(14);
        font.setWeight(QFont::Black);
        font.setItalic(false);
        addButton->setFont(font);
        addButton->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 900 14pt \"Segoe UI\";"));

        horizontalLayout_2->addWidget(addButton);

        subtractbutton = new QRadioButton(formLayoutWidget);
        subtractbutton->setObjectName("subtractbutton");
        subtractbutton->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 900 14pt \"Segoe UI\";"));

        horizontalLayout_2->addWidget(subtractbutton);

        divbutton = new QRadioButton(formLayoutWidget);
        divbutton->setObjectName("divbutton");
        divbutton->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 900 14pt \"Segoe UI\";"));

        horizontalLayout_2->addWidget(divbutton);

        multbutton = new QRadioButton(formLayoutWidget);
        multbutton->setObjectName("multbutton");
        multbutton->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 900 14pt \"Segoe UI\";"));

        horizontalLayout_2->addWidget(multbutton);


        formLayout->setLayout(2, QFormLayout::ItemRole::FieldRole, horizontalLayout_2);

        lessgobutton = new QPushButton(centralwidget);
        lessgobutton->setObjectName("lessgobutton");
        lessgobutton->setGeometry(QRect(670, 530, 121, 41));
        lessgobutton->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:rgb(43, 89, 99);\n"
"font: 900 9pt \"Segoe UI\";"));
        Controller->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Controller);
        statusbar->setObjectName("statusbar");
        Controller->setStatusBar(statusbar);

        retranslateUi(Controller);

        QMetaObject::connectSlotsByName(Controller);
    } // setupUi

    void retranslateUi(QMainWindow *Controller)
    {
        Controller->setWindowTitle(QCoreApplication::translate("Controller", "MainWindow", nullptr));
        labelnum1->setText(QCoreApplication::translate("Controller", "Number 1", nullptr));
        label_num2->setText(QCoreApplication::translate("Controller", "Number 2", nullptr));
        label_res->setText(QCoreApplication::translate("Controller", "Result", nullptr));
        addButton->setText(QCoreApplication::translate("Controller", "+", nullptr));
        subtractbutton->setText(QCoreApplication::translate("Controller", "-", nullptr));
        divbutton->setText(QCoreApplication::translate("Controller", "/", nullptr));
        multbutton->setText(QCoreApplication::translate("Controller", "*", nullptr));
        lessgobutton->setText(QCoreApplication::translate("Controller", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Controller: public Ui_Controller {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLLER_H
