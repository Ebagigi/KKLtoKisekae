/**
 * @file ui_KKLtoKisekae.cpp
 * @author Gabriel Misajlovski (Ebagigi)
 */

#include "ui_KKLtoKisekae.h"

void Ui_KKLtoKisekae::setupUi(QMainWindow *KKLtoKisekae)
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

    pathPlainTextEdit = new QPlainTextEdit(verticalLayoutWidget);
    pathPlainTextEdit->setObjectName("plainTextEdit");
    pathPlainTextEdit->setAcceptDrops(false);
    pathPlainTextEdit->setAutoFillBackground(false);

    formLayout->setWidget(0, QFormLayout::FieldRole, pathPlainTextEdit);


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
    QObject::connect(exitPushButton, SIGNAL(clicked()), qApp, SLOT(quit()));

    retranslateUi(KKLtoKisekae);

    QMetaObject::connectSlotsByName(KKLtoKisekae);
} // setupUi

void Ui_KKLtoKisekae::retranslateUi(QMainWindow *KKLtoKisekae)
{
    KKLtoKisekae->setWindowTitle(QCoreApplication::translate("KKLtoKisekae", "KKLtoKisekae", nullptr));
    browsePushButton->setText(QCoreApplication::translate("KKLtoKisekae", "Browse...", nullptr));
#if QT_CONFIG(tooltip)
    pathPlainTextEdit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
    pathPlainTextEdit->setPlaceholderText(QCoreApplication::translate("KKLtoKisekae", "Waiting for file input...", nullptr));
    exitPushButton->setText(QCoreApplication::translate("KKLtoKisekae", "EXIT", nullptr));
} // retranslateUi