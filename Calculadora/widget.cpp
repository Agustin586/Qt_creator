#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("Calculadora");
    ui->lResultado->setText("0.0");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_bMas_clicked()
{
    ui->lResultado->setText(QString::number(ui->sbNum1->value() + ui->sbNum2->value()));
}


void Widget::on_bMenos_clicked()
{
    ui->lResultado->setText(QString::number(ui->sbNum1->value() - ui->sbNum2->value()));
}


void Widget::on_bProducto_clicked()
{
    ui->lResultado->setText(QString::number(ui->sbNum1->value() * ui->sbNum2->value()));
}


void Widget::on_bCociente_clicked()
{
    ui->lResultado->setText(QString::number(ui->sbNum1->value() / ui->sbNum2->value()));
}

