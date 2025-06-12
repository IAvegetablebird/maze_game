#pragma once

#include "adjacencylist.h"

#include <QDialog>

namespace Ui {
class VisualizationDialog;
}

class VisualizationDialog : public QDialog
{
    Q_OBJECT

public:
    explicit VisualizationDialog(QWidget *parent = nullptr);
    ~VisualizationDialog() override;

    void setAdjacencyList(const AdjacencyList &list);

private slots:
    void on_buttonPlay_clicked();
    void on_buttonReset_clicked();
    void on_buttonNext_clicked();
    void on_buttonPrev_clicked();
    void on_sbStep_valueChanged(int value);
    void on_sbFps_valueChanged(int value);

private:
    Ui::VisualizationDialog *ui;
};

