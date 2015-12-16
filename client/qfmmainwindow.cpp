#include "qfmmainwindow.h"
#include "ui_qfmmainwindow.h"

QFMMainWindow::QFMMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QFMMainWindow)
{

    ui->setupUi(this);
}

QFMMainWindow::~QFMMainWindow()
{
    delete ui;
}
