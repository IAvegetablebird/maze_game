#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

protected:
    void paintEvent(QPaintEvent *event) override;


private:
    Ui::Form *ui;
    MainWindow w;
};

#endif // FORM_H
