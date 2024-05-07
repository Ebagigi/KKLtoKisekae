/**
 * @file LoadButton.cpp
 * @author Gabriel Misajlovski (Ebagigi)
 */

#include <QFileDialog>
#include "LoadButton.h"

LoadButton::LoadButton(QWidget* parent)
        : QPushButton(parent)
{

}

void LoadButton::loadFile()
{
    QString filePath = QFileDialog::getOpenFileName(this, "Select a file to load", "", "Text Files (*.txt)");

    // Do something with the selected file path, for example, print it
    qDebug() << "Selected file path: " << filePath;
}

