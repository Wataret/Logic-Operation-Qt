#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label_result->clear();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_comboBox_op1_activated(int index)
{
    MainWindow::on_comboBox_operations_activated(ui->comboBox_operations->currentIndex());
}

void MainWindow::on_comboBox_op2_activated(int index)
{
    MainWindow::on_comboBox_operations_activated(ui->comboBox_operations->currentIndex());
}

void MainWindow::on_comboBox_operations_activated(int index)
{
    bool op1 = ui->comboBox_op1->currentIndex();
    bool op2 = ui->comboBox_op2->currentIndex();
    bool result = false;

    switch (index) {
    case 0:
    {
        ui->comboBox_op2->show();
        ui->label_op2->show();
        result = op1 && op2;
        break;
    }
    case 1:
    {
        ui->comboBox_op2->show();
        ui->label_op2->show();
        result = op1 || op2;
        break;
    }
    case 2:
    {
        ui->comboBox_op2->hide();
        ui->label_op2->hide();
        result = !op1;
        break;
    }
    case 3:
    {
        ui->comboBox_op2->show();
        ui->label_op2->show();
        result = (op1 == op2);
        break;
    }
    case 4:
    {
        ui->comboBox_op2->show();
        ui->label_op2->show();
        result = (!op1) || op2;
        break;
    }
    case 5:
    {
        ui->comboBox_op2->show();
        ui->label_op2->show();
        result = op1 ^ op2;
        break;
    }
    }

    if (result)
    {
        ui->label_result->setText("True");
        ui->label_result->setStyleSheet("color: rgb(0,255,0)");
    }
    else
    {
        ui->label_result->setText("False");
        ui->label_result->setStyleSheet("color: rgb(255,0,0)");
    }
}
