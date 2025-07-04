#pragma once

#include "mazewidget.h"
#include "adjacencylist.h"
#include "solutionlist.h"

#include <QMainWindow>
#include <QActionGroup>

#include <vector>

class QLabel;
class VisualizationDialog;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_buttonGenerate_clicked();
    void on_buttonV_clicked();
    void on_actionSave_triggered();
    void updateShowWhat();

private:
    void initConnection();
    void initUI();

    void doGenerate();
    void doSolve();

    void updateMazeStat();
    void updateSolutionStat();

    Ui::MainWindow *ui;

    QActionGroup m_genGroup;
    QActionGroup m_solveGroup;
    AdjacencyList m_adjacencyList;
    SolutionList m_solutionList;
    std::vector<QLabel *> m_nodeNumLabels;
    std::vector<QLabel *> m_nodePercentLabels;

    VisualizationDialog *m_vDialog;

protected:
    void paintEvent(QPaintEvent *event) override;
};
