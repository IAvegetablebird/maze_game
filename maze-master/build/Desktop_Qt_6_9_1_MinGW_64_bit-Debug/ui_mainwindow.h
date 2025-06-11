/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mazewidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionWall;
    QAction *actionPath;
    QAction *actionDFS;
    QAction *actionKruskal;
    QAction *actionPrim;
    QAction *actionDiv;
    QAction *actionSolution;
    QAction *actionAccessed;
    QAction *actionLeftHand;
    QAction *actionRightHand;
    QAction *actionManhattan;
    QAction *actionEuclidian;
    QAction *actionZero;
    QAction *actionSave;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_4;
    QScrollArea *scrollArea;
    MazeWidget *mazeWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBoxWall;
    QCheckBox *checkBoxPath;
    QCheckBox *checkBoxSolution;
    QCheckBox *checkBoxAccessed;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *rowSpinBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *columnSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *buttonGenerate;
    QPushButton *buttonV;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label4neighborpercent;
    QLabel *label1neighborpercent;
    QLabel *label4neighbor;
    QLabel *label2neighborpercent;
    QLabel *label_11;
    QLabel *label1neighbor;
    QLabel *label2neighbor;
    QLabel *label3neighbor;
    QLabel *label_5;
    QLabel *label3neighborpercent;
    QLabel *label1neighbor_2;
    QLabel *label1neighbor_3;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QLabel *labelSolutionNode;
    QLabel *label4neighbor_4;
    QLabel *labelAccessedNode;
    QLabel *label4neighbor_3;
    QLabel *labelAccessedNodePercent;
    QLabel *labelSolutionNodePercent;
    QLabel *label4neighbor_5;
    QLabel *labelTraceNode;
    QLabel *labelTraceNodePercent;
    QLabel *labelSolutionNode_2;
    QLabel *labelSolutionNode_3;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QMenu *menuGen;
    QMenu *menuSolve;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(878, 602);
        actionWall = new QAction(MainWindow);
        actionWall->setObjectName("actionWall");
        actionWall->setCheckable(true);
        actionWall->setChecked(true);
        actionPath = new QAction(MainWindow);
        actionPath->setObjectName("actionPath");
        actionPath->setCheckable(true);
        actionDFS = new QAction(MainWindow);
        actionDFS->setObjectName("actionDFS");
        actionDFS->setCheckable(true);
        actionDFS->setChecked(true);
        actionKruskal = new QAction(MainWindow);
        actionKruskal->setObjectName("actionKruskal");
        actionKruskal->setCheckable(true);
        actionPrim = new QAction(MainWindow);
        actionPrim->setObjectName("actionPrim");
        actionPrim->setCheckable(true);
        actionDiv = new QAction(MainWindow);
        actionDiv->setObjectName("actionDiv");
        actionDiv->setCheckable(true);
        actionSolution = new QAction(MainWindow);
        actionSolution->setObjectName("actionSolution");
        actionSolution->setCheckable(true);
        actionAccessed = new QAction(MainWindow);
        actionAccessed->setObjectName("actionAccessed");
        actionAccessed->setCheckable(true);
        actionLeftHand = new QAction(MainWindow);
        actionLeftHand->setObjectName("actionLeftHand");
        actionLeftHand->setCheckable(true);
        actionLeftHand->setChecked(true);
        actionRightHand = new QAction(MainWindow);
        actionRightHand->setObjectName("actionRightHand");
        actionRightHand->setCheckable(true);
        actionManhattan = new QAction(MainWindow);
        actionManhattan->setObjectName("actionManhattan");
        actionManhattan->setCheckable(true);
        actionEuclidian = new QAction(MainWindow);
        actionEuclidian->setObjectName("actionEuclidian");
        actionEuclidian->setCheckable(true);
        actionZero = new QAction(MainWindow);
        actionZero->setObjectName("actionZero");
        actionZero->setCheckable(true);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        horizontalLayout_4 = new QHBoxLayout(centralWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignCenter);
        mazeWidget = new MazeWidget();
        mazeWidget->setObjectName("mazeWidget");
        mazeWidget->setGeometry(QRect(0, 0, 650, 518));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mazeWidget->sizePolicy().hasHeightForWidth());
        mazeWidget->setSizePolicy(sizePolicy);
        scrollArea->setWidget(mazeWidget);

        horizontalLayout_4->addWidget(scrollArea);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName("groupBox");
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        checkBoxWall = new QCheckBox(groupBox);
        checkBoxWall->setObjectName("checkBoxWall");
        checkBoxWall->setChecked(true);

        verticalLayout_2->addWidget(checkBoxWall);

        checkBoxPath = new QCheckBox(groupBox);
        checkBoxPath->setObjectName("checkBoxPath");

        verticalLayout_2->addWidget(checkBoxPath);

        checkBoxSolution = new QCheckBox(groupBox);
        checkBoxSolution->setObjectName("checkBoxSolution");

        verticalLayout_2->addWidget(checkBoxSolution);

        checkBoxAccessed = new QCheckBox(groupBox);
        checkBoxAccessed->setObjectName("checkBoxAccessed");

        verticalLayout_2->addWidget(checkBoxAccessed);


        verticalLayout->addWidget(groupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(50, 0));
        label_2->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_2->addWidget(label_2);

        rowSpinBox = new QSpinBox(centralWidget);
        rowSpinBox->setObjectName("rowSpinBox");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(rowSpinBox->sizePolicy().hasHeightForWidth());
        rowSpinBox->setSizePolicy(sizePolicy2);
        rowSpinBox->setMinimumSize(QSize(50, 0));
        rowSpinBox->setMaximumSize(QSize(50, 16777215));
        rowSpinBox->setMinimum(2);
        rowSpinBox->setMaximum(200);
        rowSpinBox->setValue(20);

        horizontalLayout_2->addWidget(rowSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(50, 0));
        label->setMaximumSize(QSize(40, 16777215));

        horizontalLayout->addWidget(label);

        columnSpinBox = new QSpinBox(centralWidget);
        columnSpinBox->setObjectName("columnSpinBox");
        sizePolicy2.setHeightForWidth(columnSpinBox->sizePolicy().hasHeightForWidth());
        columnSpinBox->setSizePolicy(sizePolicy2);
        columnSpinBox->setMinimumSize(QSize(50, 0));
        columnSpinBox->setMaximumSize(QSize(50, 16777215));
        columnSpinBox->setMinimum(2);
        columnSpinBox->setMaximum(200);
        columnSpinBox->setValue(20);

        horizontalLayout->addWidget(columnSpinBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        buttonGenerate = new QPushButton(centralWidget);
        buttonGenerate->setObjectName("buttonGenerate");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(buttonGenerate->sizePolicy().hasHeightForWidth());
        buttonGenerate->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(buttonGenerate);

        buttonV = new QPushButton(centralWidget);
        buttonV->setObjectName("buttonV");
        buttonV->setEnabled(false);
        buttonV->setMinimumSize(QSize(30, 0));
        buttonV->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_3->addWidget(buttonV);


        verticalLayout->addLayout(horizontalLayout_3);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(70, 0));
        label_7->setMaximumSize(QSize(70, 16777215));

        gridLayout->addWidget(label_7, 2, 0, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName("label_9");
        label_9->setMinimumSize(QSize(70, 0));
        label_9->setMaximumSize(QSize(70, 16777215));

        gridLayout->addWidget(label_9, 3, 0, 1, 1);

        label4neighborpercent = new QLabel(groupBox_2);
        label4neighborpercent->setObjectName("label4neighborpercent");
        label4neighborpercent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label4neighborpercent, 4, 2, 1, 1);

        label1neighborpercent = new QLabel(groupBox_2);
        label1neighborpercent->setObjectName("label1neighborpercent");
        label1neighborpercent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label1neighborpercent, 1, 2, 1, 1);

        label4neighbor = new QLabel(groupBox_2);
        label4neighbor->setObjectName("label4neighbor");
        label4neighbor->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label4neighbor, 4, 1, 1, 1);

        label2neighborpercent = new QLabel(groupBox_2);
        label2neighborpercent->setObjectName("label2neighborpercent");
        label2neighborpercent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label2neighborpercent, 2, 2, 1, 1);

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName("label_11");
        label_11->setMinimumSize(QSize(70, 0));
        label_11->setMaximumSize(QSize(70, 16777215));

        gridLayout->addWidget(label_11, 4, 0, 1, 1);

        label1neighbor = new QLabel(groupBox_2);
        label1neighbor->setObjectName("label1neighbor");
        label1neighbor->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label1neighbor, 1, 1, 1, 1);

        label2neighbor = new QLabel(groupBox_2);
        label2neighbor->setObjectName("label2neighbor");
        label2neighbor->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label2neighbor, 2, 1, 1, 1);

        label3neighbor = new QLabel(groupBox_2);
        label3neighbor->setObjectName("label3neighbor");
        label3neighbor->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label3neighbor, 3, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(70, 0));
        label_5->setMaximumSize(QSize(70, 16777215));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label3neighborpercent = new QLabel(groupBox_2);
        label3neighborpercent->setObjectName("label3neighborpercent");
        label3neighborpercent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label3neighborpercent, 3, 2, 1, 1);

        label1neighbor_2 = new QLabel(groupBox_2);
        label1neighbor_2->setObjectName("label1neighbor_2");
        label1neighbor_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label1neighbor_2, 0, 1, 1, 1);

        label1neighbor_3 = new QLabel(groupBox_2);
        label1neighbor_3->setObjectName("label1neighbor_3");
        label1neighbor_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label1neighbor_3, 0, 2, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setMinimumSize(QSize(200, 0));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName("gridLayout_2");
        labelSolutionNode = new QLabel(groupBox_3);
        labelSolutionNode->setObjectName("labelSolutionNode");
        labelSolutionNode->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelSolutionNode, 1, 1, 1, 1);

        label4neighbor_4 = new QLabel(groupBox_3);
        label4neighbor_4->setObjectName("label4neighbor_4");
        label4neighbor_4->setMinimumSize(QSize(70, 0));
        label4neighbor_4->setMaximumSize(QSize(70, 16777215));

        gridLayout_2->addWidget(label4neighbor_4, 2, 0, 1, 1);

        labelAccessedNode = new QLabel(groupBox_3);
        labelAccessedNode->setObjectName("labelAccessedNode");
        labelAccessedNode->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelAccessedNode, 2, 1, 1, 1);

        label4neighbor_3 = new QLabel(groupBox_3);
        label4neighbor_3->setObjectName("label4neighbor_3");
        label4neighbor_3->setMinimumSize(QSize(70, 0));
        label4neighbor_3->setMaximumSize(QSize(70, 16777215));

        gridLayout_2->addWidget(label4neighbor_3, 1, 0, 1, 1);

        labelAccessedNodePercent = new QLabel(groupBox_3);
        labelAccessedNodePercent->setObjectName("labelAccessedNodePercent");
        labelAccessedNodePercent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelAccessedNodePercent, 2, 2, 1, 1);

        labelSolutionNodePercent = new QLabel(groupBox_3);
        labelSolutionNodePercent->setObjectName("labelSolutionNodePercent");
        labelSolutionNodePercent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelSolutionNodePercent, 1, 2, 1, 1);

        label4neighbor_5 = new QLabel(groupBox_3);
        label4neighbor_5->setObjectName("label4neighbor_5");
        label4neighbor_5->setMinimumSize(QSize(70, 0));
        label4neighbor_5->setMaximumSize(QSize(70, 16777215));

        gridLayout_2->addWidget(label4neighbor_5, 3, 0, 1, 1);

        labelTraceNode = new QLabel(groupBox_3);
        labelTraceNode->setObjectName("labelTraceNode");
        labelTraceNode->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelTraceNode, 3, 1, 1, 1);

        labelTraceNodePercent = new QLabel(groupBox_3);
        labelTraceNodePercent->setObjectName("labelTraceNodePercent");
        labelTraceNodePercent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelTraceNodePercent, 3, 2, 1, 1);

        labelSolutionNode_2 = new QLabel(groupBox_3);
        labelSolutionNode_2->setObjectName("labelSolutionNode_2");
        labelSolutionNode_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelSolutionNode_2, 0, 1, 1, 1);

        labelSolutionNode_3 = new QLabel(groupBox_3);
        labelSolutionNode_3->setObjectName("labelSolutionNode_3");
        labelSolutionNode_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelSolutionNode_3, 0, 2, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_4->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 878, 26));
        menuGen = new QMenu(menuBar);
        menuGen->setObjectName("menuGen");
        menuSolve = new QMenu(menuBar);
        menuSolve->setObjectName("menuSolve");
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName("menuFile");
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuGen->menuAction());
        menuBar->addAction(menuSolve->menuAction());
        menuGen->addAction(actionDFS);
        menuGen->addAction(actionKruskal);
        menuGen->addAction(actionPrim);
        menuGen->addAction(actionDiv);
        menuSolve->addAction(actionLeftHand);
        menuSolve->addAction(actionRightHand);
        menuSolve->addAction(actionManhattan);
        menuSolve->addAction(actionEuclidian);
        menuSolve->addAction(actionZero);
        menuFile->addAction(actionSave);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Maze", nullptr));
        actionWall->setText(QCoreApplication::translate("MainWindow", "Wall", nullptr));
#if QT_CONFIG(tooltip)
        actionWall->setToolTip(QCoreApplication::translate("MainWindow", "Wall", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPath->setText(QCoreApplication::translate("MainWindow", "Path", nullptr));
#if QT_CONFIG(tooltip)
        actionPath->setToolTip(QCoreApplication::translate("MainWindow", "Path", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDFS->setText(QCoreApplication::translate("MainWindow", "DFS", nullptr));
        actionKruskal->setText(QCoreApplication::translate("MainWindow", "Kruskal", nullptr));
        actionPrim->setText(QCoreApplication::translate("MainWindow", "Prim", nullptr));
        actionDiv->setText(QCoreApplication::translate("MainWindow", "Recursive division", nullptr));
        actionSolution->setText(QCoreApplication::translate("MainWindow", "Solution", nullptr));
        actionAccessed->setText(QCoreApplication::translate("MainWindow", "Accessed", nullptr));
        actionLeftHand->setText(QCoreApplication::translate("MainWindow", "Wall follower(Left hand)", nullptr));
        actionRightHand->setText(QCoreApplication::translate("MainWindow", "Wall follower(Right hand)", nullptr));
        actionManhattan->setText(QCoreApplication::translate("MainWindow", "A*(Manhattan)", nullptr));
        actionEuclidian->setText(QCoreApplication::translate("MainWindow", "A*(Euclidian)", nullptr));
        actionZero->setText(QCoreApplication::translate("MainWindow", "A*(0)", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Show", nullptr));
        checkBoxWall->setText(QCoreApplication::translate("MainWindow", "Wall", nullptr));
        checkBoxPath->setText(QCoreApplication::translate("MainWindow", "Path", nullptr));
        checkBoxSolution->setText(QCoreApplication::translate("MainWindow", "Solution", nullptr));
        checkBoxAccessed->setText(QCoreApplication::translate("MainWindow", "Accessed", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Row", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Column", nullptr));
        buttonGenerate->setText(QCoreApplication::translate("MainWindow", "Generate", nullptr));
#if QT_CONFIG(tooltip)
        buttonV->setToolTip(QCoreApplication::translate("MainWindow", "Visualize the process", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonV->setText(QCoreApplication::translate("MainWindow", "V", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Degree", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        label4neighborpercent->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        label1neighborpercent->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        label4neighbor->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        label2neighborpercent->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        label1neighbor->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        label2neighbor->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        label3neighbor->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label3neighborpercent->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        label1neighbor_2->setText(QCoreApplication::translate("MainWindow", "Count", nullptr));
        label1neighbor_3->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Node in", nullptr));
        labelSolutionNode->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        label4neighbor_4->setText(QCoreApplication::translate("MainWindow", "Accessed", nullptr));
        labelAccessedNode->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        label4neighbor_3->setText(QCoreApplication::translate("MainWindow", "Solution", nullptr));
        labelAccessedNodePercent->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        labelSolutionNodePercent->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        label4neighbor_5->setText(QCoreApplication::translate("MainWindow", "Trace", nullptr));
        labelTraceNode->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        labelTraceNodePercent->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        labelSolutionNode_2->setText(QCoreApplication::translate("MainWindow", "Count", nullptr));
        labelSolutionNode_3->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        menuGen->setTitle(QCoreApplication::translate("MainWindow", "Generation algorithm", nullptr));
        menuSolve->setTitle(QCoreApplication::translate("MainWindow", "Solving algorithm", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
