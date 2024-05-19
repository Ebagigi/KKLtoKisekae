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
    vector<string> newSplitCode;

    string kiseCode;

    for (auto item : splitCode) {
        // KKLtoKisekae Translation Code Goes Here
        string temp;
        for (auto item : splitCode) {
            string letter1 = item.substr(0, 1);
            string letter2 = item.substr(1, 1);
            string letters = item.substr(0, 2);

            // Step 1: Modify string if needed
            // Long block for handling the pieces that need to be edited.
            if (item.substr(0, 3)=="106") {
                // First piece handler
                temp = "105";
                temp.append(item.substr(3, item.length()-7));
            }
            else if ((letters=="cc") || (letters=="cd") || (letters=="ce") || (letters=="cf") || (letters=="cg")
                    || (letters=="ch")) {
                // Delete the c items
                temp = "";
            }
            else if ((letters=="t0")) {
                // Remove extra zeros from t0 pieces
                temp = item.substr(0, item.length()-4);
            }
            else if (letter1=="h") {
                if (letter2=="c") {
                    temp = item.substr(0, item.length()-6);
                }
                else if (letter2=="d") {
                    temp = item.substr(0, item.length()-2);
                }
                else { temp = item; }
            }
            else if ((letter1=="m") || (letter1=="s")) {
                temp = item.substr(0, item.length()-10);
            }
            else { temp = item; }

            // Step 2: put the string in the new vector of strings
            newSplitCode.push_back(temp);
        }

        // Step 3: Put the underscores back into the code and make it all one long string
        for (auto item1 : newSplitCode)
        {
            // Statement omits blank entries a.k.a. deleted items
            if (!(item1 == "")) {
                kiseCode.append(item1);
                // Statement omits final underscore
                kiseCode.append("_");
            }
        }

        // Step 4: Remove extra underscore
        kiseCode.pop_back();

        kiseCode.append(item + "_");
    }

    mText = QString::fromStdString(kiseCode);

    // qDebug() << kiseCode;

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

