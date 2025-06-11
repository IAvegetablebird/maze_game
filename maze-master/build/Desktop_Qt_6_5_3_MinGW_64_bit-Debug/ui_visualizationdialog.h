/********************************************************************************
** Form generated from reading UI file 'visualizationdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISUALIZATIONDIALOG_H
#define UI_VISUALIZATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "visualizationwidget.h"

QT_BEGIN_NAMESPACE

class Ui_VisualizationDialog
{
public:
    QVBoxLayout *verticalLayout;
    VisualizationWidget *vWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *sbStep;
    QLabel *label_2;
    QSpinBox *sbFps;
    QPushButton *buttonPrev;
    QPushButton *buttonPlay;
    QPushButton *buttonNext;
    QPushButton *buttonReset;

    void setupUi(QDialog *VisualizationDialog)
    {
        if (VisualizationDialog->objectName().isEmpty())
            VisualizationDialog->setObjectName("VisualizationDialog");
        VisualizationDialog->resize(530, 563);
        verticalLayout = new QVBoxLayout(VisualizationDialog);
        verticalLayout->setObjectName("verticalLayout");
        vWidget = new VisualizationWidget(VisualizationDialog);
        vWidget->setObjectName("vWidget");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(vWidget->sizePolicy().hasHeightForWidth());
        vWidget->setSizePolicy(sizePolicy);
        vWidget->setMinimumSize(QSize(500, 500));

        verticalLayout->addWidget(vWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(VisualizationDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        sbStep = new QSpinBox(VisualizationDialog);
        sbStep->setObjectName("sbStep");
        sbStep->setMinimum(1);
        sbStep->setMaximum(10000);

        horizontalLayout->addWidget(sbStep);

        label_2 = new QLabel(VisualizationDialog);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        sbFps = new QSpinBox(VisualizationDialog);
        sbFps->setObjectName("sbFps");
        sbFps->setMinimum(1);
        sbFps->setMaximum(60);
        sbFps->setValue(60);

        horizontalLayout->addWidget(sbFps);

        buttonPrev = new QPushButton(VisualizationDialog);
        buttonPrev->setObjectName("buttonPrev");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonPrev->sizePolicy().hasHeightForWidth());
        buttonPrev->setSizePolicy(sizePolicy1);
        buttonPrev->setMinimumSize(QSize(28, 28));
        buttonPrev->setMaximumSize(QSize(28, 28));

        horizontalLayout->addWidget(buttonPrev);

        buttonPlay = new QPushButton(VisualizationDialog);
        buttonPlay->setObjectName("buttonPlay");

        horizontalLayout->addWidget(buttonPlay);

        buttonNext = new QPushButton(VisualizationDialog);
        buttonNext->setObjectName("buttonNext");
        sizePolicy1.setHeightForWidth(buttonNext->sizePolicy().hasHeightForWidth());
        buttonNext->setSizePolicy(sizePolicy1);
        buttonNext->setMinimumSize(QSize(28, 28));
        buttonNext->setMaximumSize(QSize(28, 28));

        horizontalLayout->addWidget(buttonNext);

        buttonReset = new QPushButton(VisualizationDialog);
        buttonReset->setObjectName("buttonReset");

        horizontalLayout->addWidget(buttonReset);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(VisualizationDialog);

        QMetaObject::connectSlotsByName(VisualizationDialog);
    } // setupUi

    void retranslateUi(QDialog *VisualizationDialog)
    {
        VisualizationDialog->setWindowTitle(QCoreApplication::translate("VisualizationDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("VisualizationDialog", "Step", nullptr));
        label_2->setText(QCoreApplication::translate("VisualizationDialog", "Fps", nullptr));
        buttonPrev->setText(QCoreApplication::translate("VisualizationDialog", "<", nullptr));
        buttonPlay->setText(QCoreApplication::translate("VisualizationDialog", "Play", nullptr));
        buttonNext->setText(QCoreApplication::translate("VisualizationDialog", ">", nullptr));
        buttonReset->setText(QCoreApplication::translate("VisualizationDialog", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VisualizationDialog: public Ui_VisualizationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISUALIZATIONDIALOG_H
