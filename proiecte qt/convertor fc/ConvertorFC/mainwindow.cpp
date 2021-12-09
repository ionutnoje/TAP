#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) , ui(new Ui::MainWindow)
{
    //ui=new Ui::MainWindow();
    ui->setupUi(this);
    ui->radioButtonC->setChecked(true);
     ui->radioButtonF->setChecked(false);
    connect(this->ui->pushButtonConvert,
            SIGNAL(clicked(bool)),
            this,
            SLOT(apasarepebuton())
            );

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::apasarepebuton()
{

    float input,result;
    QString inputstr=ui->lineEdit_input->text();
    bool ok;
    input=inputstr.toFloat(&ok);
    if(!ok)
        QMessageBox::critical(this,"Eroare","In textbox se trece int sau float",QMessageBox::Ok|QMessageBox::Cancel);
    else //ok==true
    {
      if(ui->radioButtonC->isChecked() && !ui->radioButtonF->isChecked())  {
          result=(input-32)*5/9.0;
          ui->label_rezultat->setText("Rezultat: "+QString::number(result));

      }
      else if(!ui->radioButtonC->isChecked() && ui->radioButtonF->isChecked())  {
          result=(input*9/5.0)+32;
          ui->label_rezultat->setText("Rezultat: "+QString::number(result));
      }
      else {
          QMessageBox::critical(this,"Eroare","Selectati un RB",QMessageBox::Ok|QMessageBox::Cancel);
      }


    }
}

