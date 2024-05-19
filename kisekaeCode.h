/**
 * @file kisekaeCode.h
 * @author Gabriel Misajlovski (Ebagigi)
 *
 *
 */

#ifndef KKLTOKISEKAE_KISEKAECODE_H
#define KKLTOKISEKAE_KISEKAECODE_H

#include <QTextEdit>

class kisekaeCode : public QTextEdit {
Q_OBJECT
private:
    QString *mText;

public:
    explicit kisekaeCode(QWidget *parent = nullptr);

signals:
    void textChanged(const QString &newText);

protected:
    // Override the textChanged event to emit the custom signal
    virtual void keyPressEvent(QKeyEvent *event) override {
        // Call the base class implementation
        QTextEdit::keyPressEvent(event);

        // Emit the custom signal with the new text content
        emit textChanged(toPlainText());
    }
};

#endif //KKLTOKISEKAE_KISEKAECODE_H
