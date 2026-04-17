#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    memoria = 0;
    nuevoNumero = true;

    // Conectamos los botones (IDs del .ui)
    connect(ui->btn_0, &QPushButton::clicked, this, &MainWindow::digito);
    connect(ui->btn_1, &QPushButton::clicked, this, &MainWindow::digito);
    connect(ui->btn_2, &QPushButton::clicked, this, &MainWindow::digito);
    connect(ui->btn_3, &QPushButton::clicked, this, &MainWindow::digito);
    connect(ui->btn_4, &QPushButton::clicked, this, &MainWindow::digito);
    connect(ui->btn_5, &QPushButton::clicked, this, &MainWindow::digito);
    connect(ui->btn_6, &QPushButton::clicked, this, &MainWindow::digito);
    connect(ui->btn_7, &QPushButton::clicked, this, &MainWindow::digito);
    connect(ui->btn_8, &QPushButton::clicked, this, &MainWindow::digito);
    connect(ui->btn_9, &QPushButton::clicked, this, &MainWindow::digito);

    connect(ui->btn_sum, &QPushButton::clicked, this, &MainWindow::operacion);
    connect(ui->btn_res, &QPushButton::clicked, this, &MainWindow::operacion);
    connect(ui->btn_mul, &QPushButton::clicked, this, &MainWindow::operacion);
    connect(ui->btn_div, &QPushButton::clicked, this, &MainWindow::operacion);
    
    connect(ui->btn_eq, &QPushButton::clicked, this, &MainWindow::igual);
    connect(ui->btn_c, &QPushButton::clicked, this, &MainWindow::borrar);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::digito() {
    QPushButton *b = (QPushButton*)sender();
    if(nuevoNumero) { ui->pantalla->clear(); nuevoNumero = false; }
    ui->pantalla->setText(ui->pantalla->text() + b->text());
}

void MainWindow::operacion() {
    QPushButton *b = (QPushButton*)sender();
    memoria = ui->pantalla->text().toDouble();
    opPendiente = b->text();
    nuevoNumero = true;
}

void MainWindow::igual() {
    double segundo = ui->pantalla->text().toDouble();
    double res = 0;
    if(opPendiente == "+") res = memoria + segundo;
    else if(opPendiente == "-") res = memoria - segundo;
    else if(opPendiente == "*") res = memoria * segundo;
    else if(opPendiente == "/") res = (segundo != 0) ? memoria / segundo : 0;
    ui->pantalla->setText(QString::number(res));
    nuevoNumero = true;
}

void MainWindow::borrar() { ui->pantalla->setText("0"); memoria = 0; nuevoNumero = true; }