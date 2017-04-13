#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <QWidget>
#include <QDebug>
#include <QTimer>
#include <QString>
#include "ui_mainwindow.h"


class Graphics : public QWidget
{
     Q_OBJECT

public:
    Graphics::Graphics(Ui::MainWindow *_ui, QWidget *parent);
    ~Graphics();


private:
     Ui::MainWindow *ui;

};

#endif // GRAPHICS_H
