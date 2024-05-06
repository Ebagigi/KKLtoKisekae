/********************************************************************************
** Form generated from reading UI file 'KKLtoKisekaeqJVefg.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef KKLTOKISEKAEQJVEFG_H
#define KKLTOKISEKAEQJVEFG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
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
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *mExitPushButton;
    QStatusBar *statusbar;

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
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");

        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        mExitPushButton = new QPushButton(verticalLayoutWidget);
        mExitPushButton->setObjectName("mExitPushButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mExitPushButton->sizePolicy().hasHeightForWidth());
        mExitPushButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mExitPushButton);


        verticalLayout->addLayout(horizontalLayout);

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
        mExitPushButton->setText(QCoreApplication::translate("KKLtoKisekae", "EXIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KKLtoKisekae: public Ui_KKLtoKisekae {};
} // namespace Ui

QT_END_NAMESPACE

#endif // KKLTOKISEKAEQJVEFG_H
