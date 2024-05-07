/**
 * @file ConvertButton.cpp
 * @author Gabriel Misajlovski (Ebagigi)
 */

#include "ConvertButton.h"

ConvertButton::ConvertButton(QWidget* parent)
        : QPushButton(parent)
{
    setEnabled(false);
}

void ConvertButton::updateEnabledState(const QString &text) {
    // Enable button if there is text, otherwise disable it
    setEnabled(!text.isEmpty());
}
