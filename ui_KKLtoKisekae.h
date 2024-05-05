/********************************************************************************
** Form generated from reading UI file 'KKLtoKisekaerbOLIg.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
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
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *exitPushButton;
    QStatusBar *statusbar;

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
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        browsePushButton = new QPushButton(verticalLayoutWidget);
        browsePushButton->setObjectName("browsePushButton");

        formLayout->setWidget(0, QFormLayout::LabelRole, browsePushButton);

        plainTextEdit = new QPlainTextEdit(verticalLayoutWidget);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setAcceptDrops(false);
        plainTextEdit->setAutoFillBackground(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, plainTextEdit);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        exitPushButton = new QPushButton(verticalLayoutWidget);
        exitPushButton->setObjectName("exitPushButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(exitPushButton->sizePolicy().hasHeightForWidth());
        exitPushButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(exitPushButton);


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
        browsePushButton->setText(QCoreApplication::translate("KKLtoKisekae", "Browse...", nullptr));
#if QT_CONFIG(tooltip)
        plainTextEdit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        plainTextEdit->setPlaceholderText(QCoreApplication::translate("KKLtoKisekae", "Waiting for file input...", nullptr));
        exitPushButton->setText(QCoreApplication::translate("KKLtoKisekae", "EXIT", nullptr));
    } // retranslateUi

    QPushButton getBrowsePushButton();

};

namespace Ui {
    class KKLtoKisekae: public Ui_KKLtoKisekae {};
} // namespace Ui

QT_END_NAMESPACE

#endif // KKLTOKISEKAERBOLIG_H
