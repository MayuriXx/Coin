/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *Principal;
    QWidget *Identification;
    QLineEdit *linePrenom;
    QLabel *labelNom;
    QPushButton *buttonValider;
    QLineEdit *lineNom;
    QLabel *labelPrenom;
    QLabel *labelAlert;
    QWidget *widgetPurse;
    QLabel *labelTitre;
    QPushButton *buttonParcourir;
    QTextEdit *textColler;
    QPushButton *buttonCollerValider;
    QLabel *labelTriown;
    QLabel *labelResultat;
    QPushButton *buttonQuitter;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(754, 708);
        Principal = new QWidget(MainWindow);
        Principal->setObjectName(QStringLiteral("Principal"));
        Identification = new QWidget(Principal);
        Identification->setObjectName(QStringLiteral("Identification"));
        Identification->setGeometry(QRect(30, 10, 691, 181));
        Identification->setStyleSheet(QStringLiteral("color:rgb(0, 132, 255);"));
        linePrenom = new QLineEdit(Identification);
        linePrenom->setObjectName(QStringLiteral("linePrenom"));
        linePrenom->setGeometry(QRect(210, 90, 301, 21));
        labelNom = new QLabel(Identification);
        labelNom->setObjectName(QStringLiteral("labelNom"));
        labelNom->setGeometry(QRect(130, 50, 60, 16));
        buttonValider = new QPushButton(Identification);
        buttonValider->setObjectName(QStringLiteral("buttonValider"));
        buttonValider->setGeometry(QRect(400, 120, 113, 32));
        lineNom = new QLineEdit(Identification);
        lineNom->setObjectName(QStringLiteral("lineNom"));
        lineNom->setGeometry(QRect(210, 50, 301, 21));
        labelPrenom = new QLabel(Identification);
        labelPrenom->setObjectName(QStringLiteral("labelPrenom"));
        labelPrenom->setGeometry(QRect(130, 90, 60, 16));
        labelAlert = new QLabel(Identification);
        labelAlert->setObjectName(QStringLiteral("labelAlert"));
        labelAlert->setEnabled(true);
        labelAlert->setGeometry(QRect(220, 150, 221, 16));
        labelAlert->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        widgetPurse = new QWidget(Principal);
        widgetPurse->setObjectName(QStringLiteral("widgetPurse"));
        widgetPurse->setGeometry(QRect(29, 219, 691, 441));
        widgetPurse->setStyleSheet(QStringLiteral("color:rgb(0, 132, 255);"));
        labelTitre = new QLabel(widgetPurse);
        labelTitre->setObjectName(QStringLiteral("labelTitre"));
        labelTitre->setGeometry(QRect(30, 20, 171, 16));
        buttonParcourir = new QPushButton(widgetPurse);
        buttonParcourir->setObjectName(QStringLiteral("buttonParcourir"));
        buttonParcourir->setGeometry(QRect(20, 50, 141, 32));
        textColler = new QTextEdit(widgetPurse);
        textColler->setObjectName(QStringLiteral("textColler"));
        textColler->setGeometry(QRect(30, 100, 631, 231));
        buttonCollerValider = new QPushButton(widgetPurse);
        buttonCollerValider->setObjectName(QStringLiteral("buttonCollerValider"));
        buttonCollerValider->setGeometry(QRect(30, 350, 131, 32));
        labelTriown = new QLabel(widgetPurse);
        labelTriown->setObjectName(QStringLiteral("labelTriown"));
        labelTriown->setGeometry(QRect(610, 30, 60, 16));
        labelResultat = new QLabel(widgetPurse);
        labelResultat->setObjectName(QStringLiteral("labelResultat"));
        labelResultat->setGeometry(QRect(40, 390, 151, 31));
        QFont font;
        font.setPointSize(18);
        labelResultat->setFont(font);
        labelResultat->setFrameShadow(QFrame::Plain);
        labelResultat->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        buttonQuitter = new QPushButton(Principal);
        buttonQuitter->setObjectName(QStringLiteral("buttonQuitter"));
        buttonQuitter->setGeometry(QRect(580, 670, 113, 32));
        buttonQuitter->setStyleSheet(QStringLiteral("color:rgb(0, 132, 255);"));
        MainWindow->setCentralWidget(Principal);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        labelNom->setText(QApplication::translate("MainWindow", "Nom", nullptr));
        buttonValider->setText(QApplication::translate("MainWindow", "Valider", nullptr));
        labelPrenom->setText(QApplication::translate("MainWindow", "Pr\303\251nom", nullptr));
        labelAlert->setText(QApplication::translate("MainWindow", "Veuillez renseigner vos identifiants.", nullptr));
        labelTitre->setText(QApplication::translate("MainWindow", "Importation du purse", nullptr));
        buttonParcourir->setText(QApplication::translate("MainWindow", "Parcourir", nullptr));
        buttonCollerValider->setText(QApplication::translate("MainWindow", "Valider", nullptr));
        labelTriown->setText(QApplication::translate("MainWindow", "TRIOwn", nullptr));
        labelResultat->setText(QApplication::translate("MainWindow", "R\303\251sultat", nullptr));
        buttonQuitter->setText(QApplication::translate("MainWindow", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
