/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *fixedSizeGroup;
    QVBoxLayout *verticalLayout1;
    QPushButton *computeFixedButton;
    QTextEdit *fixedGeneratedTextEdit;
    QTextEdit *fixedResultTextEdit;
    QGroupBox *scalableSizeGroup;
    QVBoxLayout *verticalLayout2;
    QLabel *elementsLabel;
    QSpinBox *elementsCountSpinBox;
    QLabel *threadsLabel;
    QSpinBox *threadsCountSpinBox;
    QPushButton *computeScalableButton;
    QTextEdit *scalableGeneratedTextEdit;
    QTextEdit *scalableResultTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        fixedSizeGroup = new QGroupBox(centralwidget);
        fixedSizeGroup->setObjectName("fixedSizeGroup");
        verticalLayout1 = new QVBoxLayout(fixedSizeGroup);
        verticalLayout1->setObjectName("verticalLayout1");
        computeFixedButton = new QPushButton(fixedSizeGroup);
        computeFixedButton->setObjectName("computeFixedButton");

        verticalLayout1->addWidget(computeFixedButton);

        fixedGeneratedTextEdit = new QTextEdit(fixedSizeGroup);
        fixedGeneratedTextEdit->setObjectName("fixedGeneratedTextEdit");

        verticalLayout1->addWidget(fixedGeneratedTextEdit);

        fixedResultTextEdit = new QTextEdit(fixedSizeGroup);
        fixedResultTextEdit->setObjectName("fixedResultTextEdit");

        verticalLayout1->addWidget(fixedResultTextEdit);


        verticalLayout->addWidget(fixedSizeGroup);

        scalableSizeGroup = new QGroupBox(centralwidget);
        scalableSizeGroup->setObjectName("scalableSizeGroup");
        verticalLayout2 = new QVBoxLayout(scalableSizeGroup);
        verticalLayout2->setObjectName("verticalLayout2");
        elementsLabel = new QLabel(scalableSizeGroup);
        elementsLabel->setObjectName("elementsLabel");

        verticalLayout2->addWidget(elementsLabel);

        elementsCountSpinBox = new QSpinBox(scalableSizeGroup);
        elementsCountSpinBox->setObjectName("elementsCountSpinBox");
        elementsCountSpinBox->setMinimum(1);
        elementsCountSpinBox->setMaximum(10000);

        verticalLayout2->addWidget(elementsCountSpinBox);

        threadsLabel = new QLabel(scalableSizeGroup);
        threadsLabel->setObjectName("threadsLabel");

        verticalLayout2->addWidget(threadsLabel);

        threadsCountSpinBox = new QSpinBox(scalableSizeGroup);
        threadsCountSpinBox->setObjectName("threadsCountSpinBox");
        threadsCountSpinBox->setMinimum(1);
        threadsCountSpinBox->setMaximum(32);

        verticalLayout2->addWidget(threadsCountSpinBox);

        computeScalableButton = new QPushButton(scalableSizeGroup);
        computeScalableButton->setObjectName("computeScalableButton");

        verticalLayout2->addWidget(computeScalableButton);

        scalableGeneratedTextEdit = new QTextEdit(scalableSizeGroup);
        scalableGeneratedTextEdit->setObjectName("scalableGeneratedTextEdit");

        verticalLayout2->addWidget(scalableGeneratedTextEdit);

        scalableResultTextEdit = new QTextEdit(scalableSizeGroup);
        scalableResultTextEdit->setObjectName("scalableResultTextEdit");

        verticalLayout2->addWidget(scalableResultTextEdit);


        verticalLayout->addWidget(scalableSizeGroup);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Parallel Prefix Sum Application", nullptr));
        fixedSizeGroup->setTitle(QCoreApplication::translate("MainWindow", "Program s pevnou velikost\303\255 pole", nullptr));
        computeFixedButton->setText(QCoreApplication::translate("MainWindow", "Po\304\215\303\255ta\305\245", nullptr));
        fixedGeneratedTextEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Generovan\303\251 prvky", nullptr));
        fixedResultTextEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "V\303\275sledok", nullptr));
        scalableSizeGroup->setTitle(QCoreApplication::translate("MainWindow", "\305\240k\303\241lovate\304\276n\303\275 program s premenlivou ve\304\276kos\305\245ou po\304\276a", nullptr));
        elementsLabel->setText(QCoreApplication::translate("MainWindow", "Po\304\215et prvkov:", nullptr));
        threadsLabel->setText(QCoreApplication::translate("MainWindow", "Po\304\215et vl\303\241kien:", nullptr));
        computeScalableButton->setText(QCoreApplication::translate("MainWindow", "Po\304\215\303\255ta\305\245", nullptr));
        scalableGeneratedTextEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Generovan\303\251 prvky", nullptr));
        scalableResultTextEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "V\303\275sledok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
