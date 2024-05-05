/********************************************************************************
** Form generated from reading UI file 'KKLtoKisekaeBaamfA.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef KKLTOKISEKAEBAAMFA_H
#define KKLTOKISEKAEBAAMFA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KKLtoKisekae
{
public:
    void setupUi(QMainWindow *KKLtoKisekae)
    {
        if (KKLtoKisekae->objectName().isEmpty())
            KKLtoKisekae->setObjectName("KKLtoKisekae");
        KKLtoKisekae->resize(800, 600);
        KKLtoKisekae->setMinimumSize(QSize(800, 600));
        KKLtoKisekae->setMaximumSize(QSize(800, 600));
        centralwidget = new QWidget(KKLtoKisekae);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 10, 781, 551));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        KKLtoKisekae->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(KKLtoKisekae);
        statusbar->setObjectName("statusbar");
        KKLtoKisekae->setStatusBar(statusbar);

        retranslateUi(KKLtoKisekae);

        QMetaObject::connectSlotsByName(KKLtoKisekae);
    } // setupUi

    void retranslateUi(QMainWindow *KKLtoKisekae)
    {
        KKLtoKisekae->setWindowTitle(QCoreApplication::translate("KKLtoKisekae", "KKLtoKisekae", nullptr));
    } // retranslateUi

private:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QStatusBar *statusbar;

};

namespace Ui {
    class KKLtoKisekae: public Ui_KKLtoKisekae {};
} // namespace Ui

QT_END_NAMESPACE

#endif // KKLTOKISEKAEBAAMFA_H
