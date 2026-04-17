#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void digito();
    void operacion();
    void igual();
    void borrar();
private:
    Ui::MainWindow *ui;
    double memoria;
    QString opPendiente;
    bool nuevoNumero;
};
#endif