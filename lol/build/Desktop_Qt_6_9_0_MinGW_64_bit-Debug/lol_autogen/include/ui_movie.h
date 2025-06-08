/********************************************************************************
** Form generated from reading UI file 'movie.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVIE_H
#define UI_MOVIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Movie
{
public:
    QWidget *centralwidget;
    QLabel *label_4;
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *titlelineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *GenrelineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *desclineEdit_3;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *deletebtn;
    QPushButton *insertbtn;
    QPushButton *updatebtn;
    QPushButton *displaybtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Movie)
    {
        if (Movie->objectName().isEmpty())
            Movie->setObjectName("Movie");
        Movie->resize(800, 600);
        centralwidget = new QWidget(Movie);
        centralwidget->setObjectName("centralwidget");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 20, 271, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        label_4->setFont(font);
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(40, 320, 491, 221));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:rgb(43, 89, 99);\n"
"font: 900 9pt \"Segoe UI\";"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 50, 491, 251));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        titlelineEdit = new QLineEdit(layoutWidget);
        titlelineEdit->setObjectName("titlelineEdit");
        titlelineEdit->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:rgb(43, 89, 99);\n"
"font: 900 9pt \"Segoe UI\";"));

        horizontalLayout->addWidget(titlelineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        GenrelineEdit_2 = new QLineEdit(layoutWidget);
        GenrelineEdit_2->setObjectName("GenrelineEdit_2");
        GenrelineEdit_2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:rgb(43, 89, 99);\n"
"font: 900 9pt \"Segoe UI\";"));

        horizontalLayout_2->addWidget(GenrelineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        desclineEdit_3 = new QLineEdit(layoutWidget);
        desclineEdit_3->setObjectName("desclineEdit_3");
        desclineEdit_3->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:rgb(43, 89, 99);\n"
"font: 900 9pt \"Segoe UI\";"));

        horizontalLayout_3->addWidget(desclineEdit_3);


        verticalLayout->addLayout(horizontalLayout_3);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(600, 50, 141, 241));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        deletebtn = new QPushButton(layoutWidget1);
        deletebtn->setObjectName("deletebtn");
        deletebtn->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:rgb(43, 89, 99);\n"
"font: 900 9pt \"Segoe UI\";"));

        verticalLayout_2->addWidget(deletebtn);

        insertbtn = new QPushButton(layoutWidget1);
        insertbtn->setObjectName("insertbtn");
        insertbtn->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:rgb(43, 89, 99);\n"
"font: 900 9pt \"Segoe UI\";"));

        verticalLayout_2->addWidget(insertbtn);

        updatebtn = new QPushButton(layoutWidget1);
        updatebtn->setObjectName("updatebtn");
        updatebtn->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:rgb(43, 89, 99);\n"
"font: 900 9pt \"Segoe UI\";"));

        verticalLayout_2->addWidget(updatebtn);

        displaybtn = new QPushButton(layoutWidget1);
        displaybtn->setObjectName("displaybtn");
        displaybtn->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color:rgb(43, 89, 99);\n"
"font: 900 9pt \"Segoe UI\";"));

        verticalLayout_2->addWidget(displaybtn);

        Movie->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Movie);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Movie->setMenuBar(menubar);
        statusbar = new QStatusBar(Movie);
        statusbar->setObjectName("statusbar");
        Movie->setStatusBar(statusbar);

        retranslateUi(Movie);

        QMetaObject::connectSlotsByName(Movie);
    } // setupUi

    void retranslateUi(QMainWindow *Movie)
    {
        Movie->setWindowTitle(QCoreApplication::translate("Movie", "MainWindow", nullptr));
        label_4->setText(QCoreApplication::translate("Movie", "Add new movies into DB", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Movie", "Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Movie", "Desc", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Movie", "Genre", nullptr));
        label->setText(QCoreApplication::translate("Movie", "Title", nullptr));
        label_2->setText(QCoreApplication::translate("Movie", "Genre", nullptr));
        label_3->setText(QCoreApplication::translate("Movie", "Desc", nullptr));
        deletebtn->setText(QCoreApplication::translate("Movie", "Delete data", nullptr));
        insertbtn->setText(QCoreApplication::translate("Movie", "Insert Into Db", nullptr));
        updatebtn->setText(QCoreApplication::translate("Movie", "Update Db", nullptr));
        displaybtn->setText(QCoreApplication::translate("Movie", "Display Db", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Movie: public Ui_Movie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVIE_H
