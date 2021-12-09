#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(this->ui->btnPush,
            SIGNAL(clicked(bool)),
            this,
            SLOT(apasareBtnPush())
            );
    connect(this->ui->btnPop,
            SIGNAL(clicked(bool)),
            this,
            SLOT(apasareBtnPop())
            );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::apasareBtnPush()
{
    float input;
    QString inputstr=ui->lineEdit_valori->text();
    bool ok;
    input=inputstr.toFloat(&ok);
    if(!ok)
        QMessageBox::critical(this,"Eroare","introduceti int sau float",QMessageBox::Ok|QMessageBox::Cancel);
    else //ok==true
    {
      ui->listWidget->insertItem(0,QString::number(input));
    }
}

void MainWindow::apasareBtnPop()
{
    if(ui->listWidget->count() == 0)
    {
        QMessageBox::information(this,"Eroare","nu sunt elemente in stiva.",QMessageBox::Ok);
    }
    else
    {
        ui->listWidget->takeItem(0);
    }
}




