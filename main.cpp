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
    QWidget widget;
    Ui::KKLtoKisekae ui;

    widget.show();
    return app.exec();
}