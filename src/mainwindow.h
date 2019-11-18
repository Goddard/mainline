#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_tableWidget_activated();

    void on_exit_clicked();

    void on_about_clicked();

    void on_install_clicked();

private:
    Ui::MainWindow *ui;
    QStringList m_TableHeader;
    QTableWidget* m_pTableWidget;
    void createUI();
};

#endif // MAINWINDOW_H
