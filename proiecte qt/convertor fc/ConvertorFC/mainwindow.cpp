#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) , ui(new Ui::MainWindow)
{
    //ui=new Ui::MainWindow();
    ui->setupUi(this);
    ui->radioButtonC->setChecked(true);
     ui->radioButtonF->setChecked(false);
    connect(this->ui->pushButtonConvert,//comp. care declanseaza evenimentul
            SIGNAL(clicked(bool)), //event cu un anumit nume
            this, //listener fereastra
            SLOT(apasarepebuton()) //orice denumire de metoda tip slot
            );

}

MainWindow::~MainWindow()
{
    delete ui;
}
//tipRetur numeClasa::numeMetoda(param)
void MainWindow::apasarepebuton()
{
    //de verif. in lineEdit apare numeric (intreg sau float)
    //de verif. RadioButton este selectat
    //se verif. F din F->C rezultat in C
    //atfel C selectat: C->F rezultat in F
    float input,result;
    QString inputstr=ui->lineEdit_input->text();
    bool ok;
    input=inputstr.toFloat(&ok); //ok se pune true, in input avem val. numerica corecta / ok se pune false
    if(!ok)
        QMessageBox::critical(this,"Eroare","In textbox se trece int sau float",QMessageBox::Ok|QMessageBox::Cancel);
    else //ok==true
    {
      if(ui->radioButtonC->isChecked() && !ui->radioButtonF->isChecked())  {
          result=(input-32)*5/9.0;
          ui->label_rezultat->setText("Rezultat: "+QString::number(result));

      }
      else if(!ui->radioButtonC->isChecked() && ui->radioButtonF->isChecked())  {
       //de completat tema
      }
      else {
          QMessageBox::critical(this,"Eroare","Selectati un RB",QMessageBox::Ok|QMessageBox::Cancel);
      }


    }
}

