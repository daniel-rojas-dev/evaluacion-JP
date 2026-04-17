#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug> // Necesario para imprimir en consola

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    // Conectamos el botón con la función
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::alPresionarBoton);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::alPresionarBoton() {
    qDebug() << "Botón presionado"; // Mensaje que pide el ejercicio
}