/**
 * @file main.cpp
 * @author Gabriel Misajlovski (Ebagigi)
 *
 * The main file of this application that builds the executable.
 */

#include <QApplication>
#include <QWindow>

#include "ui_KKLtoKisekae.h"
#include "ui_FileBrowser.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QMainWindow widget;
    Ui::KKLtoKisekae ui;
    ui.setupUi(&widget);

    QWidget widget2;
    Ui2::Form ui2;
    ui2.setupUi(&widget2);

    widget.show();
    widget2.hide();
    return QApplication::exec();
}