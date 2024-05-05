/**
 * @file KKLtoKisekae.h
 * @author Gabriel Misajlovski (Ebagigi)
 *
 *
 */

#ifndef KKLTOKISEKAE_KKLTOKISEKAE_H
#define KKLTOKISEKAE_KKLTOKISEKAE_H

#include <QWidget>
#include <QPushButton>
#include <QTextEdit>
#include <QLineEdit>

class KKLtoKisekae : public QWidget
{
    Q_OBJECT

public:
    explicit KKLtoKisekae(QWidget *parent = nullptr);

private slots:
    void on_toolButton_clicked();

private:
    QPushButton *ui_toolButton;
};

#endif //KKLTOKISEKAE_KKLTOKISEKAE_H
