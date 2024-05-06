/********************************************************************************
** Form generated from reading UI file 'KKLtoKisekaeysMJBU.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef KKLTOKISEKAEYSMJBU_H
#define KKLTOKISEKAEYSMJBU_H

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
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *KKLtoKisekae)
    {
        if (KKLtoKisekae->objectName().isEmpty())
            KKLtoKisekae->setObjectName("KKLtoKisekae");
        KKLtoKisekae->resize(600, 800);
        KKLtoKisekae->setMinimumSize(QSize(600, 800));
        KKLtoKisekae->setMaximumSize(QSize(600, 800));
        KKLtoKisekae->setBaseSize(QSize(600, 800));
        centralwidget = new QWidget(KKLtoKisekae);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(9, 9, 581, 761));
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

};

namespace Ui {
    class KKLtoKisekae: public Ui_KKLtoKisekae {};
} // namespace Ui

QT_END_NAMESPACE

#endif // KKLTOKISEKAEYSMJBU_H
