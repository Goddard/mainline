/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTableWidget *tableWidget;
    QPushButton *update;
    QPushButton *install;
    QPushButton *uninstall;
    QPushButton *purge;
    QPushButton *change;
    QPushButton *setup;
    QPushButton *about;
    QPushButton *exit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(525, 358);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 0, 381, 321));
        update = new QPushButton(centralWidget);
        update->setObjectName(QString::fromUtf8("update"));
        update->setGeometry(QRect(400, 0, 121, 34));
        install = new QPushButton(centralWidget);
        install->setObjectName(QString::fromUtf8("install"));
        install->setGeometry(QRect(400, 40, 121, 34));
        uninstall = new QPushButton(centralWidget);
        uninstall->setObjectName(QString::fromUtf8("uninstall"));
        uninstall->setGeometry(QRect(400, 80, 121, 34));
        purge = new QPushButton(centralWidget);
        purge->setObjectName(QString::fromUtf8("purge"));
        purge->setGeometry(QRect(400, 120, 121, 34));
        change = new QPushButton(centralWidget);
        change->setObjectName(QString::fromUtf8("change"));
        change->setGeometry(QRect(400, 160, 121, 34));
        setup = new QPushButton(centralWidget);
        setup->setObjectName(QString::fromUtf8("setup"));
        setup->setGeometry(QRect(400, 200, 121, 34));
        about = new QPushButton(centralWidget);
        about->setObjectName(QString::fromUtf8("about"));
        about->setGeometry(QRect(400, 240, 121, 34));
        exit = new QPushButton(centralWidget);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(400, 280, 121, 34));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        update->setText(QApplication::translate("MainWindow", "Update", nullptr));
        install->setText(QApplication::translate("MainWindow", "Install", nullptr));
        uninstall->setText(QApplication::translate("MainWindow", "Uninstall", nullptr));
        purge->setText(QApplication::translate("MainWindow", "Purge", nullptr));
        change->setText(QApplication::translate("MainWindow", "Change", nullptr));
        setup->setText(QApplication::translate("MainWindow", "Setup", nullptr));
        about->setText(QApplication::translate("MainWindow", "About", nullptr));
        exit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
