#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// при вращении маски какие-то точки будут впереди модели, какие-то позади. Часть маски, находящаяся за моделью её не обрезает, только фон
// Маска запекается, в оперативной памяти лежат данные только об отображаемых пикселях
// Гифки допустимы
// инвертирование маски
// поддержка нескольких моделей иинтеграция с дискордом
// ограничитель кадров
