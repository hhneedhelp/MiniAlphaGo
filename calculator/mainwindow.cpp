#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(this->ui->bt_0,SIGNAL(clicked(bool)),this,SLOT(getbtn0()));
    connect(this->ui->bt_1,SIGNAL(clicked(bool)),this,SLOT(getbtn1()));
    connect(this->ui->bt_2,SIGNAL(clicked(bool)),this,SLOT(getbtn2()));
    connect(this->ui->bt_c,SIGNAL(clicked(bool)),this,SLOT(getbtn_c()));
    this->mode=new model();
    this->tmp="";//初始化
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::getbtn0(){
    if(this->tmp != ""){
    //非bool类型，获取，属性名本身，设置：set+属性名
    this->tmp += this->ui->bt_0->text();//+= 拼接字符串
    this->ui->label->setText(this->tmp);
    }
}

void MainWindow::getbtn1(){
    this->tmp += this->ui->bt_1->text();
    this->ui->label->setText(this->tmp);
}

void MainWindow::getbtn2(){
    this->tmp += this->ui->bt_2->text();
    this->ui->label->setText(this->tmp);
}


void MainWindow::on_bt_3_clicked()
{
    this->tmp += this->ui->bt_3->text();
    this->ui->label->setText(this->tmp);
}


void MainWindow::on_bt_4_clicked()
{
    this->tmp += this->ui->bt_4->text();
    this->ui->label->setText(this->tmp);
}


void MainWindow::on_bt_5_clicked()
{
    this->tmp += this->ui->bt_5->text();
    this->ui->label->setText(this->tmp);
}


void MainWindow::on_bt_6_clicked()
{
    this->tmp += this->ui->bt_6->text();
    this->ui->label->setText(this->tmp);
}


void MainWindow::on_bt_7_clicked()
{
    this->tmp += this->ui->bt_7->text();
    this->ui->label->setText(this->tmp);
}


void MainWindow::on_bt_8_clicked()
{
    this->tmp += this->ui->bt_8->text();
    this->ui->label->setText(this->tmp);
}


void MainWindow::on_bt_9_clicked()
{
    this->tmp += this->ui->bt_9->text();
    this->ui->label->setText(this->tmp);
}
//*******************************************
void MainWindow::on_bt_add_clicked()//加
{
    int num=this->tmp.toInt();
    this->mode->setn1(num);
    this->tmp="";
    QString sign=this->ui->bt_add->text();
    this->mode->setflag(sign);
}


void MainWindow::on_bt_min_clicked()//减
{
    int num=this->tmp.toInt();
    this->mode->setn1(num);
    this->tmp="";
    QString sign=this->ui->bt_min->text();
    this->mode->setflag(sign);
}


void MainWindow::on_bt_mul_clicked()//乘
{
    int num=this->tmp.toInt();
    this->mode->setn1(num);
    this->tmp="";
    QString sign=this->ui->bt_mul->text();
    this->mode->setflag(sign);
}


void MainWindow::on_bt_div_clicked()//除
{
    int num=this->tmp.toInt();
    this->mode->setn1(num);
    this->tmp="";
    QString sign=this->ui->bt_div->text();
    this->mode->setflag(sign);
}
//******************************************

void MainWindow::on_bt_equ_clicked()//等于
{
    int num=this->tmp.toInt();
    this->mode->setn2(num);
    QString result=this->mode->expr();
    this->ui->label->setText(result);
    this->tmp="";
}

void MainWindow::getbtn_c()
{
    this->tmp="";
    this->ui->label->setText("0");
}

