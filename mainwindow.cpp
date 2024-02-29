#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDesktopServices>
#include <QUrl>
#include "rules.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   // connect(ui->btn_play,SIGNAL(clicked(bool)),this, SLOT());
    connect(ui->btn_Btw,SIGNAL(clicked(bool)),this,SLOT(onClickedOpenLink()));
    connect(ui->btn_Rules,SIGNAL(clicked(bool)),this,SLOT(onClickedOpenRule()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onClickedOpenLink()
{

    QDesktopServices::openUrl(QUrl("https://github.com/EnzoTlz/Motus.git"));

}

void MainWindow::onClickedOpenRule()
{
    Rules *rule = new Rules(this);
    rule->show();
}
