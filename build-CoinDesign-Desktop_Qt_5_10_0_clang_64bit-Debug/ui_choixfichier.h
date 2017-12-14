/********************************************************************************
** Form generated from reading UI file 'choixfichier.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOIXFICHIER_H
#define UI_CHOIXFICHIER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QPushButton *buttonParcourir;
    QPushButton *buttonValider;
    QLabel *labelPrix;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(400, 107);
        formLayoutWidget = new QWidget(Form);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(-1, -1, 401, 93));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        buttonParcourir = new QPushButton(formLayoutWidget);
        buttonParcourir->setObjectName(QStringLiteral("buttonParcourir"));

        formLayout->setWidget(0, QFormLayout::FieldRole, buttonParcourir);

        buttonValider = new QPushButton(formLayoutWidget);
        buttonValider->setObjectName(QStringLiteral("buttonValider"));

        formLayout->setWidget(1, QFormLayout::FieldRole, buttonValider);

        labelPrix = new QLabel(formLayoutWidget);
        labelPrix->setObjectName(QStringLiteral("labelPrix"));

        formLayout->setWidget(2, QFormLayout::FieldRole, labelPrix);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", nullptr));
        label->setText(QApplication::translate("Form", "Choix du purse", nullptr));
        buttonParcourir->setText(QApplication::translate("Form", "Parcourir", nullptr));
        buttonValider->setText(QApplication::translate("Form", "Valider", nullptr));
        labelPrix->setText(QApplication::translate("Form", "PRIX", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOIXFICHIER_H
