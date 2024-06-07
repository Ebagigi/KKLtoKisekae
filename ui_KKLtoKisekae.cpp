/**
 * @file ui_KKLtoKisekae.cpp
 * @author Gabriel Misajlovski
 *
 */

#include <QObject>
#include <QAction>
#include <QFileDialog>
#include <QDialog>

#include "ui_KKLtoKisekae.h"
#include "ui_About.h"
#include "ConvertButton.h"
#include "LoadButton.h"
#include "kklCode.h"

void Ui_KKLtoKisekae::setupUi(QMainWindow *KKLtoKisekae)
{
    if (KKLtoKisekae->objectName().isEmpty())
        KKLtoKisekae->setObjectName("KKLtoKisekae");
    KKLtoKisekae->resize(600, 800);
    KKLtoKisekae->setMinimumSize(QSize(600, 800));
    KKLtoKisekae->setMaximumSize(QSize(600, 800));
    KKLtoKisekae->setBaseSize(QSize(600, 800));

    actionHelp = new QAction(KKLtoKisekae);
    actionHelp->setObjectName("actionHelp");
    actionAbout = new QAction(KKLtoKisekae);
    actionAbout->setObjectName("actionAbout");
    centralwidget = new QWidget(KKLtoKisekae);
    centralwidget->setObjectName("centralwidget");
    verticalLayoutWidget = new QWidget(centralwidget);
    verticalLayoutWidget->setObjectName("verticalLayoutWidget");
    verticalLayoutWidget->setGeometry(QRect(9, 9, 581, 761));
    verticalLayout = new QVBoxLayout(verticalLayoutWidget);
    verticalLayout->setObjectName("verticalLayout");
    verticalLayout->setContentsMargins(0, 0, 0, 0);
    loadButtonHorizontalLayout = new QHBoxLayout();
    loadButtonHorizontalLayout->setObjectName("loadButtonHorizontalLayout");
    loadPushButton = new LoadButton(verticalLayoutWidget);
    loadPushButton->setObjectName("loadPushButton");
    QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(loadPushButton->sizePolicy().hasHeightForWidth());
    loadPushButton->setSizePolicy(sizePolicy);

    loadButtonHorizontalLayout->addWidget(loadPushButton);

    verticalLayout->addLayout(loadButtonHorizontalLayout);

    frame = new QFrame(verticalLayoutWidget);
    frame->setObjectName("frame");
    QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
    frame->setSizePolicy(sizePolicy1);
    frame->setMinimumSize(QSize(0, 50));
    frame->setMaximumSize(QSize(16777215, 24));
    frame->setBaseSize(QSize(0, 24));
    frame->setFrameShape(QFrame::Shape::StyledPanel);
    frame->setFrameShadow(QFrame::Shadow::Raised);
    formLayoutWidget_2 = new QWidget(frame);
    formLayoutWidget_2->setObjectName("formLayoutWidget_2");
    formLayoutWidget_2->setGeometry(QRect(10, 10, 579, 54));
    directoryFormLayout = new QFormLayout(formLayoutWidget_2);
    directoryFormLayout->setObjectName("directoryFormLayout");
    directoryFormLayout->setRowWrapPolicy(QFormLayout::RowWrapPolicy::WrapLongRows);
    directoryFormLayout->setLabelAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
    directoryFormLayout->setFormAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
    directoryFormLayout->setVerticalSpacing(7);
    directoryFormLayout->setContentsMargins(0, 0, 0, 0);
    pathNameLabel = new QLabel(formLayoutWidget_2);
    pathNameLabel->setObjectName("pathNameLabel");
    pathNameLabel->setEnabled(false);
    sizePolicy1.setHeightForWidth(pathNameLabel->sizePolicy().hasHeightForWidth());
    pathNameLabel->setSizePolicy(sizePolicy1);
    pathNameLabel->setMinimumSize(QSize(0, 24));
    pathNameLabel->setMaximumSize(QSize(16777215, 24));
    pathNameLabel->setBaseSize(QSize(0, 24));
    pathNameLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

    directoryFormLayout->setWidget(0, QFormLayout::LabelRole, pathNameLabel);

    loadPathLabel = new QLabel(formLayoutWidget_2);
    loadPathLabel->setObjectName("loadPathLabel");
    loadPathLabel->setEnabled(false);
    sizePolicy1.setHeightForWidth(loadPathLabel->sizePolicy().hasHeightForWidth());
    loadPathLabel->setSizePolicy(sizePolicy1);
    loadPathLabel->setMinimumSize(QSize(0, 24));
    loadPathLabel->setMaximumSize(QSize(16777215, 24));
    loadPathLabel->setBaseSize(QSize(0, 24));

    directoryFormLayout->setWidget(0, QFormLayout::FieldRole, loadPathLabel);


    verticalLayout->addWidget(frame);

    fileContentsHorizontalLayout = new QHBoxLayout();
    fileContentsHorizontalLayout->setObjectName("fileContentsHorizontalLayout");
    kklCodeTextEdit = new kklCode(verticalLayoutWidget);
    kklCodeTextEdit->setObjectName("kklCodeTextEdit");
    kklCodeTextEdit->setEnabled(true);
    QSizePolicy sizePolicy2(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(kklCodeTextEdit->sizePolicy().hasHeightForWidth());
    kklCodeTextEdit->setSizePolicy(sizePolicy2);
    kklCodeTextEdit->setAutoFillBackground(true);
    kklCodeTextEdit->setReadOnly(false);

    fileContentsHorizontalLayout->addWidget(kklCodeTextEdit);


    verticalLayout->addLayout(fileContentsHorizontalLayout);

    convertButtonHorizontalLayout = new QHBoxLayout();
    convertButtonHorizontalLayout->setObjectName("convertButtonHorizontalLayout");
    convertPushButton = new ConvertButton(verticalLayoutWidget);
    convertPushButton->setObjectName("convertPushButton");
    sizePolicy.setHeightForWidth(convertPushButton->sizePolicy().hasHeightForWidth());
    convertPushButton->setSizePolicy(sizePolicy);

    convertButtonHorizontalLayout->addWidget(convertPushButton);

    verticalLayout->addLayout(convertButtonHorizontalLayout);

    horizontalLayout_3 = new QHBoxLayout();
    horizontalLayout_3->setObjectName("horizontalLayout_3");
    kisekaeCodeTextEdit = new QTextEdit(verticalLayoutWidget);
    kisekaeCodeTextEdit->setObjectName("kisekaeCodeTextEdit");
    kisekaeCodeTextEdit->setEnabled(false);
    QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(kisekaeCodeTextEdit->sizePolicy().hasHeightForWidth());
    kisekaeCodeTextEdit->setSizePolicy(sizePolicy3);
    kisekaeCodeTextEdit->setAutoFillBackground(true);
    kisekaeCodeTextEdit->setReadOnly(true);

    horizontalLayout_3->addWidget(kisekaeCodeTextEdit);


    verticalLayout->addLayout(horizontalLayout_3);

    saveButtonHorizontalLayout = new QHBoxLayout();
    saveButtonHorizontalLayout->setObjectName("saveButtonHorizontalLayout");
    savePushButton = new QPushButton(verticalLayoutWidget);
    savePushButton->setObjectName("savePushButton");
    savePushButton->setEnabled(false);
    sizePolicy.setHeightForWidth(savePushButton->sizePolicy().hasHeightForWidth());
    savePushButton->setSizePolicy(sizePolicy);

    saveButtonHorizontalLayout->addWidget(savePushButton);


    verticalLayout->addLayout(saveButtonHorizontalLayout);

    exitButtonGridLayout = new QGridLayout();
    exitButtonGridLayout->setObjectName("exitButtonGridLayout");
    exitButtonGridLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
    exitPushButton = new QPushButton(verticalLayoutWidget);
    exitPushButton->setObjectName("exitPushButton");
    sizePolicy.setHeightForWidth(exitPushButton->sizePolicy().hasHeightForWidth());
    exitPushButton->setSizePolicy(sizePolicy);
    exitPushButton->setAutoFillBackground(false);
    exitPushButton->setAutoDefault(false);

    exitButtonGridLayout->addWidget(exitPushButton, 0, 0, 1, 1);

    // Signal Slot Connections.
    QObject::connect(kklCodeTextEdit, &kklCode::textChanged, convertPushButton, &ConvertButton::updateEnabledState);
    QObject::connect(exitPushButton, SIGNAL(clicked()), qApp, SLOT(quit()));
    QObject::connect(loadPushButton, &QPushButton::clicked, [&]() {
        QString filePath = QFileDialog::getOpenFileName(KKLtoKisekae, "Select a file to load", "", "Text Files (*.txt)");
        // Code Chunk to load in file contents and directory to right places
        {
            QFile file(filePath);
            // qDebug() << "File Selected: " << filePath;
            QString selectedFile = file.fileName();
            if (selectedFile.isEmpty()) {
                kklCodeTextEdit->setPlaceholderText(QCoreApplication::translate("KKLtoKisekae", "KKL Code will be displayed here (Paste KKL Code here if not loading txt file)...", nullptr));
                return;
            }
            if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
                kklCodeTextEdit->setPlaceholderText(QCoreApplication::translate("KKLtoKisekae", "Invalid KKL File!!", nullptr));
                kklCodeTextEdit->setPlainText(QCoreApplication::translate("KKLtoKisekae", "", nullptr));
            } else {
                QTextStream in(&file);
                QString temp = in.readAll();
                kklCodeTextEdit->setText(temp);
                convertPushButton->updateEnabledState(temp);
                loadPathLabel->setText(filePath);
            }
            file.close();
        }
    });
    QObject::connect(convertPushButton, &QPushButton::clicked, [&]() {
        convertPushButton->translateCode();
        kisekaeCodeTextEdit->setText(convertPushButton->getText());
        kisekaeCodeTextEdit->setReadOnly(true);
        kisekaeCodeTextEdit->setEnabled(true);
        convertPushButton->setEnabled(false);
        savePushButton->setEnabled(true);
    });
    QObject::connect(savePushButton, &QPushButton::clicked, [&]() {
        QString fileName = QFileDialog::getSaveFileName(KKLtoKisekae, "Save Code to File", "", "Text Files (*.txt)");
        // Code Chunk to load in file contents and directory to right places
        {
            QFile file(fileName);
            // qDebug() << "File Selected: " << filePath;
            if (file.open(QIODevice::ReadWrite)) {
                QTextStream stream(&file);
                stream << convertPushButton->getText();
            }
            file.close();
        }
    });

    QAction::connect(actionAbout, &QAction::triggered, [&] {
        // Creates the about pop-up window
        QDialog dialogAbout;
        Ui::About ui;
        ui.setupUi(&dialogAbout);
        dialogAbout.exec();
    });

    verticalLayout->addLayout(exitButtonGridLayout);

    KKLtoKisekae->setCentralWidget(centralwidget);
    statusbar = new QStatusBar(KKLtoKisekae);
    statusbar->setObjectName("statusbar");
    KKLtoKisekae->setStatusBar(statusbar);
    menuBar = new QMenuBar(KKLtoKisekae);
    menuBar->setObjectName("menuBar");
    menuBar->setGeometry(QRect(0, 0, 600, 22));
    menuFile = new QMenu(menuBar);
    menuFile->setObjectName("menuFile");
    KKLtoKisekae->setMenuBar(menuBar);

    menuBar->addAction(menuFile->menuAction());
    menuFile->addAction(actionHelp);
    menuFile->addAction(actionAbout);

    retranslateUi(KKLtoKisekae);

    QMetaObject::connectSlotsByName(KKLtoKisekae);
} // setupUi

void Ui_KKLtoKisekae::retranslateUi(QMainWindow *KKLtoKisekae)
{
    KKLtoKisekae->setWindowTitle(QCoreApplication::translate("KKLtoKisekae", "KKLtoKisekae", nullptr));
    actionHelp->setText(QCoreApplication::translate("KKLtoKisekae", "Help", nullptr));
#if QT_CONFIG(shortcut)
    actionHelp->setShortcut(QCoreApplication::translate("KKLtoKisekae", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
    actionAbout->setText(QCoreApplication::translate("KKLtoKisekae", "About", nullptr));
#if QT_CONFIG(shortcut)
    actionAbout->setShortcut(QCoreApplication::translate("KKLtoKisekae", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
    loadPushButton->setText(QCoreApplication::translate("KKLtoKisekae", "LOAD KKL FILE", nullptr));
    pathNameLabel->setText(QCoreApplication::translate("KKLtoKisekae", "Selected File: ", nullptr));
    loadPathLabel->setText(QCoreApplication::translate("KKLtoKisekae", "Please select a file to import from your computer or paste your KKL code in the box below.", nullptr));
    kklCodeTextEdit->setPlaceholderText(QCoreApplication::translate("KKLtoKisekae", "KKL Code will be displayed here (Paste KKL Code here if not loading txt file)...", nullptr));
    convertPushButton->setText(QCoreApplication::translate("KKLtoKisekae", "CONVERT KKL TO KISEKAE", nullptr));
    kisekaeCodeTextEdit->setPlaceholderText(QCoreApplication::translate("KKLtoKisekae", "New Kisekae Code will be displayed here...", nullptr));
    savePushButton->setText(QCoreApplication::translate("KKLtoKisekae", "SAVE KISEKAE CODE TO COMPUTER", nullptr));
    exitPushButton->setText(QCoreApplication::translate("KKLtoKisekae", "EXIT", nullptr));
    menuFile->setTitle(QCoreApplication::translate("KKLtoKisekae", "File", nullptr));
} // retranslateUi
 
