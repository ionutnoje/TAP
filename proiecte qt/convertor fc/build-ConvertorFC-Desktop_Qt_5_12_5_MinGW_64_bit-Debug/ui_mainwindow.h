/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBoxS;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButtonF;
    QRadioButton *radioButtonC;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButtonConvert;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBoxD;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_Input;
    QLineEdit *lineEdit_input;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_rezultat;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(395, 484);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBoxS = new QGroupBox(centralwidget);
        groupBoxS->setObjectName(QString::fromUtf8("groupBoxS"));
        verticalLayout = new QVBoxLayout(groupBoxS);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButtonF = new QRadioButton(groupBoxS);
        radioButtonF->setObjectName(QString::fromUtf8("radioButtonF"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(radioButtonF->sizePolicy().hasHeightForWidth());
        radioButtonF->setSizePolicy(sizePolicy);
        radioButtonF->setMinimumSize(QSize(20, 10));

        verticalLayout->addWidget(radioButtonF);

        radioButtonC = new QRadioButton(groupBoxS);
        radioButtonC->setObjectName(QString::fromUtf8("radioButtonC"));
        sizePolicy.setHeightForWidth(radioButtonC->sizePolicy().hasHeightForWidth());
        radioButtonC->setSizePolicy(sizePolicy);
        radioButtonC->setMinimumSize(QSize(20, 10));

        verticalLayout->addWidget(radioButtonC);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer);

        pushButtonConvert = new QPushButton(groupBoxS);
        pushButtonConvert->setObjectName(QString::fromUtf8("pushButtonConvert"));

        verticalLayout->addWidget(pushButtonConvert);


        horizontalLayout->addWidget(groupBoxS);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        groupBoxD = new QGroupBox(centralwidget);
        groupBoxD->setObjectName(QString::fromUtf8("groupBoxD"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBoxD->sizePolicy().hasHeightForWidth());
        groupBoxD->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(groupBoxD);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_Input = new QLabel(groupBoxD);
        label_Input->setObjectName(QString::fromUtf8("label_Input"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_Input->sizePolicy().hasHeightForWidth());
        label_Input->setSizePolicy(sizePolicy2);
        label_Input->setMinimumSize(QSize(20, 10));

        verticalLayout_2->addWidget(label_Input);

        lineEdit_input = new QLineEdit(groupBoxD);
        lineEdit_input->setObjectName(QString::fromUtf8("lineEdit_input"));
        lineEdit_input->setMinimumSize(QSize(20, 10));

        verticalLayout_2->addWidget(lineEdit_input);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        label_rezultat = new QLabel(groupBoxD);
        label_rezultat->setObjectName(QString::fromUtf8("label_rezultat"));

        verticalLayout_2->addWidget(label_rezultat);


        horizontalLayout->addWidget(groupBoxD);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 395, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBoxS->setTitle(QApplication::translate("MainWindow", "GBstang", nullptr));
        radioButtonF->setText(QApplication::translate("MainWindow", "Fahrenheid", nullptr));
        radioButtonC->setText(QApplication::translate("MainWindow", "Celsius", nullptr));
        pushButtonConvert->setText(QApplication::translate("MainWindow", "Convert", nullptr));
        groupBoxD->setTitle(QApplication::translate("MainWindow", "GBdrept", nullptr));
        label_Input->setText(QApplication::translate("MainWindow", "dati temperatura", nullptr));
        label_rezultat->setText(QApplication::translate("MainWindow", "rezultat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
