/********************************************************************************
** Form generated from reading UI file 'MiniAlphaGoUI.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MINIALPHAGOUI_H
#define UI_MINIALPHAGOUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MiniAlphaGo
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MiniAlphaGo)
    {
        if (MiniAlphaGo->objectName().isEmpty())
            MiniAlphaGo->setObjectName("MiniAlphaGo");
        MiniAlphaGo->resize(800, 600);
        centralwidget = new QWidget(MiniAlphaGo);
        centralwidget->setObjectName("centralwidget");
        MiniAlphaGo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MiniAlphaGo);
        menubar->setObjectName("menubar");
        MiniAlphaGo->setMenuBar(menubar);
        statusbar = new QStatusBar(MiniAlphaGo);
        statusbar->setObjectName("statusbar");
        MiniAlphaGo->setStatusBar(statusbar);

        retranslateUi(MiniAlphaGo);

        QMetaObject::connectSlotsByName(MiniAlphaGo);
    } // setupUi

    void retranslateUi(QMainWindow *MiniAlphaGo)
    {
        MiniAlphaGo->setWindowTitle(QCoreApplication::translate("MiniAlphaGo", "MiniAlphaGo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MiniAlphaGo: public Ui_MiniAlphaGo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINIALPHAGOUI_H
