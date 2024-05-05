/**
 * @file main.cpp
 * @author Gabriel Misajlovski (Ebagigi)
 *
 *
 */

#include <QApplication>
#include <QPushButton>

#include "ui_KKLtoKisekae.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QMainWindow widget;
    Ui::KKLtoKisekae ui;
    ui.setupUi(&widget);

    widget.show();
    return app.exec();
}