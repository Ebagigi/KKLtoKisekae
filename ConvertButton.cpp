/**
 * @file ConvertButton.cpp
 * @author Gabriel Misajlovski (Ebagigi)
 */

#include <QTextEdit>

#include "ConvertButton.h"

using namespace std;

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

void ConvertButton::translateCode() {
    vector<string> splitCode = customSplit(mText.toStdString(), '_');

    string bigText;

    for (auto item : splitCode) {
        bigText.append(item);
    }

    qDebug() << bigText;

}

vector<string> ConvertButton::customSplit(string str, char separator) {
    int startIndex = 0, endIndex = 0;
    vector<string> strings;
    for (int i = 0; i <= str.size(); i++) {

        // If we reached the end of the word or the end of the input.
        if (str[i] == separator || i == str.size()) {
            endIndex = i;
            string temp;
            temp.append(str, startIndex, endIndex - startIndex);
            strings.push_back(temp);
            startIndex = endIndex + 1;
        }
    }

    return strings;
}

