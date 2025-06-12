#include "visualizationdialog.h"
#include "ui_visualizationdialog.h"

VisualizationDialog::VisualizationDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::VisualizationDialog)
{
    ui->setupUi(this);
    setWindowTitle("Visualization");

    ui->vWidget->setStep(ui->sbStep->value());
    ui->vWidget->setFps(ui->sbFps->value());
}

VisualizationDialog::~VisualizationDialog()
{
    delete ui;
}

void VisualizationDialog::setAdjacencyList(const AdjacencyList &list)
{
    ui->vWidget->setAdjacencyList(list);
    ui->vWidget->reset();
}

void VisualizationDialog::on_buttonPlay_clicked()
{
    QString s = ui->buttonPlay->text();
    if (s == "Play")
    {
        ui->buttonPlay->setText("Pause");
        ui->vWidget->play();
        ui->buttonPrev->setEnabled(false);
        ui->buttonNext->setEnabled(false);
    }
    else
    {
        ui->buttonPlay->setText("Play");
        ui->vWidget->pause();
        ui->buttonPrev->setEnabled(true);
        ui->buttonNext->setEnabled(true);
    }
}

void VisualizationDialog::on_buttonReset_clicked()
{
    ui->vWidget->reset();
}

void VisualizationDialog::on_buttonNext_clicked()
{
    ui->vWidget->nextFrame();
}

void VisualizationDialog::on_buttonPrev_clicked()
{
    ui->vWidget->prevFrame();
}

void VisualizationDialog::on_sbStep_valueChanged(int value)
{
    ui->vWidget->setStep(value);
}

void VisualizationDialog::on_sbFps_valueChanged(int value)
{
    ui->vWidget->setFps(value);
}
