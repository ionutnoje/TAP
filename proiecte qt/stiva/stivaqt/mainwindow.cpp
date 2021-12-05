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
            SLOT(apasarePush())
            );
    connect(this->ui->btnPop,
            SIGNAL(clicked(bool)),
            this,
            SLOT(apasarePop())
            );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::apasarePush()
{
    float input;
    QString inputstr=ui->lineEdit_valori->text();
    bool ok;
    input=inputstr.toFloat(&ok); //ok se pune true, in input avem val. numerica corecta / ok se pune false
    if(!ok)
        QMessageBox::critical(this,"Eroare","In textbox se trece int sau float",QMessageBox::Ok|QMessageBox::Cancel);
    else //ok==true
    {
      ui->listWidget->insertItem(0,QString::number(input));
    }
}

void MainWindow::apasarePop()
{
    if(ui->listWidget->count() == 0)
    {
        QMessageBox::information(this,"Eroare","Stiva este goala.",QMessageBox::Ok);
    }
    else
    {
        ui->listWidget->takeItem(0);
    }
}




