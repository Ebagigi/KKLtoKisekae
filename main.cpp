/**
 * @file main.cpp
 * @author Gabriel Misajlovski (Ebagigi)
 *
 * The main file of this application that builds the executable.
 */

#include <QApplication>
#include <QWindow>

#include "ui_KKLtoKisekae.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QMainWindow widget;
    Ui::KKLtoKisekae ui;
    ui.setupUi(&widget);

    widget.show();
    return QApplication::exec();
}