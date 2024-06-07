/********************************************************************************
** Form generated from reading UI file 'KKLtoKisekaeTolXFk.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
 *
 * @editor Gabriel Misajlovski (Ebagigi)
********************************************************************************/

#ifndef KKLTOKISEKAETOLXFK_H
#define KKLTOKISEKAETOLXFK_H

#include <QVariant>
#include <QAction>
#include <QApplication>
#include <QFormLayout>
#include <QFrame>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
#include <QPushButton>
#include <QStatusBar>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QWidget>
#include <QObject>

#include "ConvertButton.h"
#include "LoadButton.h"
#include "kklCode.h"

QT_BEGIN_NAMESPACE

class Ui_KKLtoKisekae
        : public QObject {
private:
    QAction *actionHelp;
    QAction *actionAbout;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *loadButtonHorizontalLayout;
    LoadButton *loadPushButton;
    QFrame *frame;
    QWidget *formLayoutWidget_2;
    QFormLayout *directoryFormLayout;
    QLabel *pathNameLabel;
    QLabel *loadPathLabel;
    QHBoxLayout *fileContentsHorizontalLayout;
    kklCode *kklCodeTextEdit;
    QHBoxLayout *convertButtonHorizontalLayout;
    ConvertButton *convertPushButton;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *kisekaeCodeTextEdit;
    QHBoxLayout *saveButtonHorizontalLayout;
    QPushButton *savePushButton;
    QGridLayout *exitButtonGridLayout;
    QPushButton *exitPushButton;
    QStatusBar *statusbar;
    QMenuBar *menuBar;
    QMenu *menuFile;

public:
    void setupUi(QMainWindow *KKLtoKisekae);
    void retranslateUi(QMainWindow *KKLtoKisekae);

};

namespace Ui {
    class KKLtoKisekae: public Ui_KKLtoKisekae {};
} // namespace Ui

QT_END_NAMESPACE

#endif // KKLTOKISEKAETOLXFK_H
