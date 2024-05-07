/**
 * @file ConvertButton.h
 * @author Gabriel Misajlovski (Ebagigi)
 *
 *
 */

#ifndef KKLTOKISEKAE_CONVERTBUTTON_H
#define KKLTOKISEKAE_CONVERTBUTTON_H

#include <QPushButton>

class ConvertButton : public QPushButton {
    Q_OBJECT
private:
    QString mText;
public:
    explicit ConvertButton(QWidget *parent = nullptr);

public slots:
    void updateEnabledState(const QString& newText);
};

#endif //KKLTOKISEKAE_CONVERTBUTTON_H
