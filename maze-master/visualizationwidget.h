#pragma once

#include "adjacencylist.h"

#include <QtOpenGLWidgets/QOpenGLWidget>
#include <QtOpenGL/QOpenGLFunctions_4_5_Core>
#include <QOpenGLShaderProgram>
#include <QEvent>

#include <vector>
#include <memory>

class VisualizationWidget : public QOpenGLWidget, protected QOpenGLFunctions_4_5_Core
{
    Q_OBJECT

public:
    explicit VisualizationWidget(QWidget *parent = nullptr);

    void setAdjacencyList(const AdjacencyList &adjacencyList);
    void setStep(int step);
    void setFps(int fps);

    void play();
    void pause();
    void nextFrame();
    void prevFrame();
    void reset();

protected:
    void timerEvent(QTimerEvent *event) override;

    void initializeGL() override;
    void paintGL() override;

private:
    void updateTimer();
    bool validAdjacencyList() const;
    int nextActionSeq();
    int prevActionSeq();
    void updateVertices(int actionSeq);

    void breakWall(int i, int j, float spacing);
    void buildWall(int i, int j, float spacing);
    QLineF wall(int i, int j, float spacing);

    void appendVertex(float x, float y, std::vector<float> &vertices);
    void appendLine(float x0, float y0, float x1, float y1, std::vector<float> &vertices);

    QRect calcViewport();

private:
    AdjacencyList m_adjacencyList;
    int m_step;
    int m_fps;
    bool m_playing;
    int m_timerId;
    int m_curActionSeq;

    std::vector<std::pair<int, int>> m_gaActions;
    AdjacencyList::GenerationActionType m_gaType;
    std::vector<float> m_vertices;
    std::vector<float> m_negativeVertices;

    unsigned m_vbo;
    unsigned m_negativeVbo;
    std::unique_ptr<QOpenGLShaderProgram> m_program;
    std::unique_ptr<QOpenGLShaderProgram> m_negativeProgram;
};

