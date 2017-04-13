#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connection = new Connection(this);
    graphics = new Graphics(ui, this);




}

MainWindow::~MainWindow()
{
    delete ui;
}
