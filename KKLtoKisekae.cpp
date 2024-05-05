/**
 * @file KKLtoKisekae.cpp
 * @author Gabriel Misajlovski (Ebagigi)
 */

#include "KKLtoKisekae.h"
#include <QtUiTools>

static QWidget *loadUiFile(QWidget *parent)
{
    QFile file(u":/forms/KKLtoKisekae.ui"_s);
    file.open(QIODevice::ReadOnly);

    QUiLoader loader;
    return loader.load(&file, parent);
}

static QString loadTextFile()
{
    QFile inputFile(u":/forms/input.txt"_s);
    inputFile.open(QIODevice::ReadOnly);
    QTextStream in(&inputFile);
    return in.readAll();
}

