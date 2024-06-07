/********************************************************************************
** Form generated from reading UI file 'AboutzncCFT.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef ABOUTZNCCFT_H
#define ABOUTZNCCFT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QLabel *aboutLabel;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName("About");
        About->setEnabled(true);
        About->resize(400, 300);
        aboutLabel = new QLabel(About);
        aboutLabel->setObjectName("aboutLabel");
        aboutLabel->setGeometry(QRect(-2, 5, 401, 291));
        QFont font;
        font.setFamilies({QString::fromUtf8("Snap ITC")});
        font.setPointSize(17);
        aboutLabel->setFont(font);
        aboutLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QCoreApplication::translate("About", "Dialog", nullptr));
        aboutLabel->setText(QCoreApplication::translate("About", "KKLToKisekae\n"
"Version: 1.0.0\n"
"Author: Gabriel Misajlovski\n"
"(Ebagigi)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ABOUTZNCCFT_H
