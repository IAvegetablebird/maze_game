#pragma once

#include "adjacencylist.h"
#include "solutionlist.h"

#include <QWidget>
#include <QLabel>
#include <QImage>
#include <QPainter>

class QResizeEvent;

class MazeWidget : public QLabel
{
    Q_OBJECT

public:
    enum ShowWhat
    {
        Path = 1,
        Wall = 1 << 1,
        Solution = 1 << 2,
        Accessed = 1 << 3
    };

public:
    explicit MazeWidget(QWidget *parent = nullptr);
    void setAdjacencyList(const AdjacencyList &list);
    void setSolutionList(const SolutionList &list);

public slots:
    void save();
    void updateShowWhat(int showWhat);

protected:
    void resizeEvent(QResizeEvent *event);

private:
    void clearImage(QImage &image);
    void drawVertex(QPainter &painter, int p);
    void drawEdge(QPainter &painter, int p, int q);
    void adjustSpacing(int row, int column);

    void generatePath();
    void generateWall();
    void generateSolution();
    void generateAccessed();

    void compositeShowing();

private:
    int m_showWhat;
    AdjacencyList m_adjacencyList;
    SolutionList m_solutionList;

    const int m_pictureMargin;
    const int m_minSpacing;
    int m_spacing;

    QImage m_wall;
    QImage m_path;
    QImage m_solution;
    QImage m_accessed;
    QImage m_showing;
};
