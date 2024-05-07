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
protected:

private:

public:
    explicit ConvertButton(QWidget *parent = 0);

public slots:
    void updateEnabledState(const QString &text);
};

#endif //KKLTOKISEKAE_CONVERTBUTTON_H
