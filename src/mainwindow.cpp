#include <QDesktopWidget>
#include <QMainWindow>
#include <QApplication>
#include <QMessageBox>
#include <QPixmap>
#include "download.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    on_tableWidget_activated();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_tableWidget_activated()
{
    createUI();
}

void MainWindow::createUI()
{
    ui->tableWidget->setColumnCount(3); // Указываем число колонок
    // Разрешаем выделение только одного элемента
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    // Разрешаем выделение построчно
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    // Устанавливаем заголовки колонок
    m_TableHeader <<"Kernel"<<"Version"<<"State";
    ui->tableWidget->setHorizontalHeaderLabels(m_TableHeader);
    ui->tableWidget->setGeometry(QApplication::desktop()->screenGeometry());

}

void MainWindow::on_exit_clicked()
{
    close();
}

void MainWindow::on_about_clicked()
{
    QMessageBox messageBox;
    messageBox.setIconPixmap(QPixmap(":/images/tux.png"));
    //messageBox.setWindowTitle("QMessageBox with Custom Icon..");
    messageBox.setText("Ubuntu Mainline Kernel Update Utility\nAutor Cappelikan 2018");
    messageBox.show();
    messageBox.exec();
}

void MainWindow::on_install_clicked()
{

}
