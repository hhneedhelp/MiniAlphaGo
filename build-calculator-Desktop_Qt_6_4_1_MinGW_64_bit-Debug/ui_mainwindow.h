/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QPushButton *bt_7;
    QPushButton *bt_8;
    QPushButton *bt_9;
    QPushButton *bt_add;
    QPushButton *bt_4;
    QPushButton *bt_5;
    QPushButton *bt_6;
    QPushButton *bt_min;
    QPushButton *bt_1;
    QPushButton *bt_2;
    QPushButton *bt_3;
    QPushButton *bt_mul;
    QPushButton *bt_c;
    QPushButton *bt_0;
    QPushButton *bt_equ;
    QPushButton *bt_div;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(346, 352);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(32);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 237, 237);\n"
"background-color: rgb(219, 219, 219);\n"
"color: rgb(2, 2, 2);"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        bt_7 = new QPushButton(centralwidget);
        bt_7->setObjectName("bt_7");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bt_7->sizePolicy().hasHeightForWidth());
        bt_7->setSizePolicy(sizePolicy);
        bt_7->setStyleSheet(QString::fromUtf8("font: 22pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 222, 216);"));

        gridLayout->addWidget(bt_7, 0, 0, 1, 1);

        bt_8 = new QPushButton(centralwidget);
        bt_8->setObjectName("bt_8");
        sizePolicy.setHeightForWidth(bt_8->sizePolicy().hasHeightForWidth());
        bt_8->setSizePolicy(sizePolicy);
        bt_8->setStyleSheet(QString::fromUtf8("font: 22pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 222, 216);"));

        gridLayout->addWidget(bt_8, 0, 1, 1, 1);

        bt_9 = new QPushButton(centralwidget);
        bt_9->setObjectName("bt_9");
        sizePolicy.setHeightForWidth(bt_9->sizePolicy().hasHeightForWidth());
        bt_9->setSizePolicy(sizePolicy);
        bt_9->setStyleSheet(QString::fromUtf8("font: 22pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 222, 216);"));

        gridLayout->addWidget(bt_9, 0, 2, 1, 1);

        bt_add = new QPushButton(centralwidget);
        bt_add->setObjectName("bt_add");
        sizePolicy.setHeightForWidth(bt_add->sizePolicy().hasHeightForWidth());
        bt_add->setSizePolicy(sizePolicy);
        bt_add->setStyleSheet(QString::fromUtf8("font: 22pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 172, 56);"));

        gridLayout->addWidget(bt_add, 0, 3, 1, 1);

        bt_4 = new QPushButton(centralwidget);
        bt_4->setObjectName("bt_4");
        sizePolicy.setHeightForWidth(bt_4->sizePolicy().hasHeightForWidth());
        bt_4->setSizePolicy(sizePolicy);
        bt_4->setStyleSheet(QString::fromUtf8("font: 22pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 222, 216);"));

        gridLayout->addWidget(bt_4, 1, 0, 1, 1);

        bt_5 = new QPushButton(centralwidget);
        bt_5->setObjectName("bt_5");
        sizePolicy.setHeightForWidth(bt_5->sizePolicy().hasHeightForWidth());
        bt_5->setSizePolicy(sizePolicy);
        bt_5->setStyleSheet(QString::fromUtf8("font: 22pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 222, 216);"));

        gridLayout->addWidget(bt_5, 1, 1, 1, 1);

        bt_6 = new QPushButton(centralwidget);
        bt_6->setObjectName("bt_6");
        sizePolicy.setHeightForWidth(bt_6->sizePolicy().hasHeightForWidth());
        bt_6->setSizePolicy(sizePolicy);
        bt_6->setStyleSheet(QString::fromUtf8("font: 22pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 222, 216);"));

        gridLayout->addWidget(bt_6, 1, 2, 1, 1);

        bt_min = new QPushButton(centralwidget);
        bt_min->setObjectName("bt_min");
        sizePolicy.setHeightForWidth(bt_min->sizePolicy().hasHeightForWidth());
        bt_min->setSizePolicy(sizePolicy);
        bt_min->setStyleSheet(QString::fromUtf8("font: 22pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 172, 56);"));

        gridLayout->addWidget(bt_min, 1, 3, 1, 1);

        bt_1 = new QPushButton(centralwidget);
        bt_1->setObjectName("bt_1");
        sizePolicy.setHeightForWidth(bt_1->sizePolicy().hasHeightForWidth());
        bt_1->setSizePolicy(sizePolicy);
        bt_1->setStyleSheet(QString::fromUtf8("font: 22pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 222, 216);"));

        gridLayout->addWidget(bt_1, 2, 0, 1, 1);

        bt_2 = new QPushButton(centralwidget);
        bt_2->setObjectName("bt_2");
        sizePolicy.setHeightForWidth(bt_2->sizePolicy().hasHeightForWidth());
        bt_2->setSizePolicy(sizePolicy);
        bt_2->setStyleSheet(QString::fromUtf8("font: 22pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 222, 216);"));

        gridLayout->addWidget(bt_2, 2, 1, 1, 1);

        bt_3 = new QPushButton(centralwidget);
        bt_3->setObjectName("bt_3");
        sizePolicy.setHeightForWidth(bt_3->sizePolicy().hasHeightForWidth());
        bt_3->setSizePolicy(sizePolicy);
        bt_3->setStyleSheet(QString::fromUtf8("font: 22pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 222, 216);"));

        gridLayout->addWidget(bt_3, 2, 2, 1, 1);

        bt_mul = new QPushButton(centralwidget);
        bt_mul->setObjectName("bt_mul");
        sizePolicy.setHeightForWidth(bt_mul->sizePolicy().hasHeightForWidth());
        bt_mul->setSizePolicy(sizePolicy);
        bt_mul->setStyleSheet(QString::fromUtf8("font: 22pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 172, 56);"));

        gridLayout->addWidget(bt_mul, 2, 3, 1, 1);

        bt_c = new QPushButton(centralwidget);
        bt_c->setObjectName("bt_c");
        sizePolicy.setHeightForWidth(bt_c->sizePolicy().hasHeightForWidth());
        bt_c->setSizePolicy(sizePolicy);
        bt_c->setStyleSheet(QString::fromUtf8("font: 22pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 172, 56);"));

        gridLayout->addWidget(bt_c, 3, 0, 1, 1);

        bt_0 = new QPushButton(centralwidget);
        bt_0->setObjectName("bt_0");
        sizePolicy.setHeightForWidth(bt_0->sizePolicy().hasHeightForWidth());
        bt_0->setSizePolicy(sizePolicy);
        bt_0->setStyleSheet(QString::fromUtf8("font: 22pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 222, 216);"));

        gridLayout->addWidget(bt_0, 3, 1, 1, 1);

        bt_equ = new QPushButton(centralwidget);
        bt_equ->setObjectName("bt_equ");
        sizePolicy.setHeightForWidth(bt_equ->sizePolicy().hasHeightForWidth());
        bt_equ->setSizePolicy(sizePolicy);
        bt_equ->setStyleSheet(QString::fromUtf8("font: 22pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 172, 56);"));

        gridLayout->addWidget(bt_equ, 3, 2, 1, 1);

        bt_div = new QPushButton(centralwidget);
        bt_div->setObjectName("bt_div");
        sizePolicy.setHeightForWidth(bt_div->sizePolicy().hasHeightForWidth());
        bt_div->setSizePolicy(sizePolicy);
        bt_div->setStyleSheet(QString::fromUtf8("font: 22pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 172, 56);"));

        gridLayout->addWidget(bt_div, 3, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(1, 10);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 346, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        bt_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        bt_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        bt_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        bt_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        bt_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        bt_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        bt_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        bt_min->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        bt_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        bt_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        bt_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        bt_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        bt_c->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        bt_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        bt_equ->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        bt_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
