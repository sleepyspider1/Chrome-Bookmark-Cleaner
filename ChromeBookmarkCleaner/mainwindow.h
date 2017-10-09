#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qjsonmodel.h"

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
    void on_btnExecute_clicked();

    void on_actionOpen_File_triggered();

    void on_actionExit_triggered();

    void on_actionOptions_triggered();

    void on_actionOpen_Default_Bookmarks_triggered();

    void on_actionOpen_Options_triggered();

private:
    Ui::MainWindow *ui;
    QJsonModel* model;
};

#endif // MAINWINDOW_H
