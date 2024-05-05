/********************************************************************************
** Form generated from reading UI file 'KKLtoKisekaepAhaVo.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef KKLTOKISEKAEPAHAVO_H
#define KKLTOKISEKAEPAHAVO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KKLtoKisekae
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *KKLtoKisekae)
    {
        if (KKLtoKisekae->objectName().isEmpty())
            KKLtoKisekae->setObjectName("KKLtoKisekae");
        KKLtoKisekae->resize(800, 600);
        centralwidget = new QWidget(KKLtoKisekae);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, -1, 801, 551));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        toolButton = new QToolButton(verticalLayoutWidget);
        toolButton->setObjectName("toolButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(toolButton);

        toolButton_2 = new QToolButton(verticalLayoutWidget);
        toolButton_2->setObjectName("toolButton_2");
        sizePolicy.setHeightForWidth(toolButton_2->sizePolicy().hasHeightForWidth());
        toolButton_2->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(verticalLayoutWidget);
        toolButton_3->setObjectName("toolButton_3");
        sizePolicy.setHeightForWidth(toolButton_3->sizePolicy().hasHeightForWidth());
        toolButton_3->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(toolButton_3);

        KKLtoKisekae->setCentralWidget(centralwidget);
        menubar = new QMenuBar(KKLtoKisekae);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        KKLtoKisekae->setMenuBar(menubar);
        statusbar = new QStatusBar(KKLtoKisekae);
        statusbar->setObjectName("statusbar");
        KKLtoKisekae->setStatusBar(statusbar);

        retranslateUi(KKLtoKisekae);

        QMetaObject::connectSlotsByName(KKLtoKisekae);
    } // setupUi

    void retranslateUi(QMainWindow *KKLtoKisekae)
    {
        KKLtoKisekae->setWindowTitle(QCoreApplication::translate("KKLtoKisekae", "KKLtoKisekae", nullptr));
        toolButton->setText(QCoreApplication::translate("KKLtoKisekae", "1", nullptr));
        toolButton_2->setText(QCoreApplication::translate("KKLtoKisekae", "2", nullptr));
        toolButton_3->setText(QCoreApplication::translate("KKLtoKisekae", "3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KKLtoKisekae: public Ui_KKLtoKisekae {};
} // namespace Ui

QT_END_NAMESPACE

#endif // KKLTOKISEKAEPAHAVO_H
