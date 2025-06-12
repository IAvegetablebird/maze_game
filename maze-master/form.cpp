#include "form.h"
#include "ui_form.h"
#include <QProcess>
#include <QMessageBox>

Form::Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Form)
{
    ui->setupUi(this);
    connect(ui->pushButton_2, &QPushButton::clicked,
            this, &Form::on_pushButton_2_clicked);
    connect(ui->pushButton, &QPushButton::clicked,
            this, &Form::on_pushButton_clicked);

    QFont labelFont;
    labelFont.setPointSize(50);  // 设置字号为 18 pt
    ui->label->setFont(labelFont);

    // QPushButton 示例
    QFont buttonFont;
    buttonFont.setPointSize(18);
    ui->pushButton->setFont(buttonFont);
    ui->pushButton_2->setFont(buttonFont);

    ui->label->setStyleSheet("color: white;");


    this->setStyleSheet("QWidget { border-image: url(1.jpg) 0 0 0 0 stretch stretch; }");

}

Form::~Form()
{
    delete ui;
}

void Form::on_pushButton_2_clicked()
{
    w.show();
}


void Form::on_pushButton_clicked()
{
    // 检查 Maze.exe 是否已在运行
    QProcess checkProcess;
    checkProcess.start("tasklist", QStringList() << "/FI" << "IMAGENAME eq Maze.exe");
    checkProcess.waitForFinished();
    QString output = checkProcess.readAllStandardOutput();

    if (output.contains("Maze.exe")) {
        QMessageBox::information(this, "提示", "Maze.exe 已经在运行！");
        return;
    }

    // 必须这样写：start "" "绝对路径"
    QString programPath = "D:\\Desktop\\new\\maze_game\\maze-master\\Maze.exe";  // 请确认这个路径真实存在！
    QStringList arguments;
    arguments << "/c" << "start" << "" <<programPath;

    QProcess::startDetached("cmd.exe", arguments);
}

void Form::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    QPixmap bg("D:\\Desktop\\new\\maze_game\\maze-master\\2.jpg");  // 路径是资源文件中的
    painter.drawPixmap(this->rect(), bg);  // 自动拉伸填满窗口
}




