/**
 * @file main.cpp
 * @author Gabriel Misajlovski (Ebagigi)
 *
 * The main file of this application.
 */

#include <QApplication>

#include "ui_KKLtoKisekae.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QMainWindow widget;
    Ui::KKLtoKisekae ui;
    ui.setupUi(&widget);

    widget.show();
    return app.exec();
}