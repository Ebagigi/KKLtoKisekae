/**
 * @file ConvertButton.h
 * @author Gabriel Misajlovski (Ebagigi)
 *
 *
 */

#ifndef KKLTOKISEKAE_CONVERTBUTTON_H
#define KKLTOKISEKAE_CONVERTBUTTON_H

#include <QPushButton>
#include <utility>

class ConvertButton : public QPushButton {
    Q_OBJECT
private:
    QString mText;

    static std::vector<std::string> customSplit(std::string str, char separator);

public:
    explicit ConvertButton(QWidget *parent = nullptr);
    void setNewText(QString text) { mText = std::move(text); }
    QString getText() {return mText;}

signals:
    void clicked(const QString& code);

public slots:
    void updateEnabledState(const QString& newText);
    void translateCode();

};

#endif //KKLTOKISEKAE_CONVERTBUTTON_H
