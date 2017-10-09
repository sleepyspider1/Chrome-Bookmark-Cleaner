#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "optionsdialog.h"
#include <QFileDialog>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model = new QJsonModel;
    ui->treeView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnExecute_clicked()
{
    // Backup bookmarks file.

    // Consolidate duplicate sibling folders.

    // Remove all duplicate bookmarks

    // Remove empty folders


}

void MainWindow::on_actionOpen_File_triggered()
{
    // Open file
    QString fileName = QFileDialog::getOpenFileName(this,
           tr("Open Bookmark File"), "",
           tr("Chrome Bookmark File (*.json);;All Files (*)"));

    if (fileName.isEmpty())
        return;

    qDebug() << fileName;
    model->load(fileName);
}

void MainWindow::on_actionExit_triggered()
{
    exit(0);
}

void MainWindow::on_actionOptions_triggered()
{
    OptionsDialog d;
    d.show();
}

void MainWindow::on_actionOpen_Default_Bookmarks_triggered()
{
    // Find and open default bookmarks file.
}

void MainWindow::on_actionOpen_Options_triggered()
{
    OptionsDialog d;
    d.show();
}
