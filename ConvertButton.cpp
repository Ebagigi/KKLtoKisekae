/**
 * @file ConvertButton.cpp
 * @author Gabriel Misajlovski (Ebagigi)
 */

#include <QTextEdit>

#include "ConvertButton.h"

ConvertButton::ConvertButton(QWidget* parent)
        : QPushButton(parent)
{
    setEnabled(false);
}

void ConvertButton::updateEnabledState(const QString& newText) {
    // Enable button if there is text, otherwise disable it
    mText = newText;
    setEnabled(!mText.isEmpty());
}



