/********************************************************************************
** Form generated from reading UI file 'AboutEnEZxg.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef ABOUTENEZXG_H
#define ABOUTENEZXG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form2
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *aboutLabel;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("About");
        Form->resize(400, 300);
        verticalLayoutWidget = new QWidget(Form);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(-1, -1, 442, 301));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        aboutLabel = new QLabel(verticalLayoutWidget);
        aboutLabel->setObjectName("aboutLabel");
        QFont font;
        font.setFamilies({QString::fromUtf8("Snap ITC")});
        font.setPointSize(14);
        aboutLabel->setFont(font);
        aboutLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_7->addWidget(aboutLabel);


        verticalLayout_2->addLayout(horizontalLayout_7);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        aboutLabel->setText(QCoreApplication::translate("Form", "KKLToKisekae\n"
"Version: 1.0.0\n"
"Author: Gabriel Misajlovski", nullptr));
    } // retranslateUi

};

namespace Ui3 {
    class Form2: public Ui_Form2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ABOUTENEZXG_H
