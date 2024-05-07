/**
 * @file LoadButton.h
 * @author Gabriel Misajlovski (Ebagigi)
 *
 *
 */

#ifndef KKLTOKISEKAE_LOADBUTTON_H
#define KKLTOKISEKAE_LOADBUTTON_H

#include <QPushButton>

class LoadButton : public QPushButton {
    Q_OBJECT
private:

public:
    LoadButton(QWidget *parent = nullptr);

private slots:
    void loadFile();

};

#endif //KKLTOKISEKAE_LOADBUTTON_H
