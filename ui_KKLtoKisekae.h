/********************************************************************************
** Form generated from reading UI file 'KKLtoKisekaerbOLIg.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
 * @author Gabriel Misajlovski (Ebagigi)
********************************************************************************/

#ifndef KKLTOKISEKAERBOLIG_H
#define KKLTOKISEKAERBOLIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KKLtoKisekae
{
private:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QPushButton *browsePushButton;
    QPlainTextEdit *pathPlainTextEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *exitPushButton;
    QStatusBar *statusbar;

public:
    void setupUi(QMainWindow *KKLtoKisekae);
    void retranslateUi(QMainWindow *KKLtoKisekae);

    QPushButton* getBrowsePushButton() {return browsePushButton;}
    QPushButton* getExitPushButton() {return exitPushButton;}

};

namespace Ui {
    class KKLtoKisekae: public Ui_KKLtoKisekae {};
} // namespace Ui

QT_END_NAMESPACE

#endif // KKLTOKISEKAERBOLIG_H
