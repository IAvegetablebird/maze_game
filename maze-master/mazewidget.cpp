#include "mazewidget.h"
#include "util.h"

#include <QPainter>
#include <QPen>
#include <iostream>
#include <QDebug>
#include <QPixmap>
#include <QFileDialog>
#include <QResizeEvent>

#include <cassert>
#include <algorithm>

using namespace std;

MazeWidget::MazeWidget(QWidget *parent)
    : QLabel(parent)
    , m_showWhat(Path)
    , m_adjacencyList(-1, -1)
    , m_pictureMargin(50)
    , m_minSpacing(10)
    , m_spacing(50)
{

}

void MazeWidget::setAdjacencyList(const AdjacencyList &list)
{
    StopWatch sw(__FUNCTION__);

    m_adjacencyList = list;

    int column = m_adjacencyList.column();
    int row = m_adjacencyList.row();

    assert(row >= 2 && column >= 2);

    adjustSpacing(row, column);

    generatePath();
    generateWall();

    updateShowWhat(m_showWhat);
}

void MazeWidget::setSolutionList(const SolutionList &list)
{
    StopWatch sw(__FUNCTION__);

    m_solutionList = list;

    generateSolution();
    generateAccessed();

    updateShowWhat(m_showWhat);
}

void MazeWidget::save()
{
    QString fileName = QFileDialog::getSaveFileName(this, "", "", tr("Image Files (*.png)"));
    if (fileName.isEmpty())
    {
        return;
    }
    //QPixmap pixmap(this->size());
    QPixmap pixmap(this->width() + 2 * m_pictureMargin, this->height() + 2 * m_pictureMargin);
    this->render(&pixmap, QPoint(m_pictureMargin, m_pictureMargin));
    pixmap.save(fileName, "png");
}

void MazeWidget::updateShowWhat(int showWhat)
{
    m_showWhat = showWhat;

    int column = m_adjacencyList.column();
    int row = m_adjacencyList.row();

    if (row == -1 || column == -1)
    {
        return;
    }

    compositeShowing();

    setPixmap(QPixmap::fromImage(m_showing));
}

void MazeWidget::resizeEvent(QResizeEvent *)
{
    m_showing.fill(Qt::white);

    int column = m_adjacencyList.column();
    int row = m_adjacencyList.row();

    if (row != -1 && column != -1)
    {
        adjustSpacing(row, column);
        generatePath();
        generateWall();
        generateSolution();
        generateAccessed();
        updateShowWhat(m_showWhat);
    }
}

void MazeWidget::clearImage(QImage &image)
{
    int column = m_adjacencyList.column();
    int row = m_adjacencyList.row();

    image = QImage(column * m_spacing + 1, row * m_spacing + 1, QImage::Format_ARGB32);
    image.fill(Qt::transparent);
}

void MazeWidget::drawVertex(QPainter &painter, int p)
{
    int x = p % m_adjacencyList.column();
    int y = p / m_adjacencyList.column();

    painter.drawEllipse(QRectF((x + 0.5) * m_spacing - 1.5, (y + 0.5) * m_spacing - 1.5,
                               3, 3));
}

void MazeWidget::drawEdge(QPainter &painter, int p, int q)
{
    int column = m_adjacencyList.column();
    int x1 = p % column;
    int y1 = p / column;
    int x2 = q % column;
    int y2 = q / column;

    painter.drawLine(QPointF((x1 + 0.5) * m_spacing, (y1 + 0.5) * m_spacing), QPointF((x2 + 0.5) * m_spacing, (y2 + 0.5) * m_spacing));
}

void MazeWidget::adjustSpacing(int row, int column)
{
    int rowSpacing = (this->parentWidget()->height() - 1) / row;
    int columnSpacing = (this->parentWidget()->width() - 1) / column;
    m_spacing = rowSpacing > columnSpacing ? columnSpacing : rowSpacing;
    m_spacing = m_spacing > m_minSpacing ? m_spacing : m_minSpacing;
}

void MazeWidget::generatePath()
{
    StopWatch sw(__FUNCTION__);

    int column = m_adjacencyList.column();
    int row = m_adjacencyList.row();

    assert(row >= 2 && column >= 2);

    clearImage(m_path);

    QPainter painter;
    painter.begin(&m_path);

    QPen pen;
    pen.setBrush(Qt::SolidPattern);
    pen.setColor(Qt::black);
    painter.setPen(pen);
    painter.setBrush(Qt::SolidPattern);

    for (int i = 0; i < row * column; i++)
    {
        drawVertex(painter, i);
        if (count(m_adjacencyList.neighbor(i).begin(), m_adjacencyList.neighbor(i).end(), i + 1) == 1)
        {
            drawEdge(painter, i, i + 1);
        }
        if (count(m_adjacencyList.neighbor(i).begin(), m_adjacencyList.neighbor(i).end(), i + column) == 1)
        {
            drawEdge(painter, i, i + column);
        }
    }

    painter.end();
}

void MazeWidget::generateWall()
{
    StopWatch sw(__FUNCTION__);

    int column = m_adjacencyList.column();
    int row = m_adjacencyList.row();

    assert(row >= 2 && column >= 2);

    clearImage(m_wall);

    QPainter painter;
    painter.begin(&m_wall);

    QPen pen;
    pen.setBrush(Qt::SolidPattern);
    pen.setColor(Qt::black);
    painter.setPen(pen);

    for (int i = 0; i < row * column; i++)
    {
        int x = i % column;
        int y = i / column;

        if (x == 0)
        {
            painter.drawLine(0, y * m_spacing, 0, (y + 1) * m_spacing);
        }
        if (y == 0)
        {
            painter.drawLine(x * m_spacing, 0, (x + 1) * m_spacing, 0);
        }

        if (count(m_adjacencyList.neighbor(i).begin(), m_adjacencyList.neighbor(i).end(), i + 1) == 0)
        {
            painter.drawLine((x + 1) * m_spacing, y * m_spacing, (x + 1) * m_spacing, (y + 1) * m_spacing);
        }
        if (count(m_adjacencyList.neighbor(i).begin(), m_adjacencyList.neighbor(i).end(), i + column) == 0)
        {
            painter.drawLine(x * m_spacing, (y + 1) * m_spacing, (x + 1) * m_spacing, (y + 1) * m_spacing);
        }
    }

    painter.end();
}

void MazeWidget::generateSolution()
{
    StopWatch sw(__FUNCTION__);

    clearImage(m_solution);

    QPainter painter;
    painter.begin(&m_solution);

    QPen pen;
    pen.setBrush(Qt::SolidPattern);
    pen.setColor(Qt::red);
    pen.setWidth(2);
    painter.setPen(pen);

    for (auto &&edge : m_solutionList.m_solution)
    {
        drawEdge(painter, edge.first, edge.second);
    }

    painter.end();
}

void MazeWidget::generateAccessed()
{
    StopWatch sw(__FUNCTION__);

    clearImage(m_accessed);

    QPainter painter;
    painter.begin(&m_accessed);

    QPen pen;
    pen.setBrush(Qt::SolidPattern);
    pen.setColor(Qt::blue);
    painter.setPen(pen);

    for (auto &&edge : m_solutionList.m_accessed)
    {
        drawEdge(painter, edge.first, edge.second);
    }

    painter.end();
}

void MazeWidget::compositeShowing()
{
    StopWatch sw(__FUNCTION__);

    int column = m_adjacencyList.column();
    int row = m_adjacencyList.row();

    m_showing = QImage(column * m_spacing + 1, row * m_spacing + 1, QImage::Format_ARGB32);
    m_showing.fill(Qt::white);

    QPainter painter(&m_showing);

    QPen pen;
    pen.setBrush(Qt::SolidPattern);
    pen.setColor(Qt::green);
    pen.setWidth(3);
    painter.setPen(pen);

    painter.drawLine(QPointF(0.5 * m_spacing, 0), QPointF(0.5 * m_spacing, m_spacing));
    painter.drawLine(QPointF(0.5 * m_spacing, m_spacing), QPointF(0, 0.5 * m_spacing));
    painter.drawLine(QPointF(0.5 * m_spacing, m_spacing), QPointF(m_spacing, 0.5 * m_spacing));

    painter.drawLine(QPointF((0.5 + column - 1) * m_spacing, (row - 1) * m_spacing), QPointF((0.5 + column - 1) * m_spacing, row * m_spacing));
    painter.drawLine(QPointF((0.5 + column - 1) * m_spacing, row * m_spacing), QPointF((column - 1) * m_spacing, (0.5 + row - 1) * m_spacing));
    painter.drawLine(QPointF((0.5 + column - 1) * m_spacing, row * m_spacing), QPointF(column * m_spacing, (0.5 + row - 1) * m_spacing));

    painter.setCompositionMode(QPainter::CompositionMode_Multiply);

    if (m_showWhat & Path)
    {
        StopWatch s("draw Path");
        painter.drawImage(0, 0, m_path);
    }
    if (m_showWhat & Wall)
    {
        StopWatch s("draw Wall");
        painter.drawImage(0, 0, m_wall);
    }
    painter.setCompositionMode(QPainter::CompositionMode_SourceOver);
    if (m_showWhat & Accessed)
    {
        StopWatch s("draw Accessed");
        painter.drawImage(0, 0, m_accessed);
    }
    if (m_showWhat & Solution)
    {
        StopWatch s("draw Solution");
        painter.drawImage(0, 0, m_solution);
    }

    painter.end();
}
