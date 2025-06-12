#pragma once

#ifdef _WIN32
#  include <windows.h>
#endif

#include <QOpenGLContext>
#include <QOpenGLFunctions>

#include <utility>
#include <string>

std::pair<int, int> makeOrderedPair(int a, int b);
int64_t currentNSecsSinceEpoch();

// glCheckError_ && glDebugOutput is from https://learnopengl.com/In-Practice/Debugging
// it's licensed under the terms of the CC BY-NC 4.0
GLenum glCheckError_(const char *file, int line);
#define glCheckError() glCheckError_(__FILE__, __LINE__)
void APIENTRY glDebugOutput(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei, const GLchar *message, const void *);

class StopWatch
{
public:
    explicit StopWatch(const std::string &tag);
    ~StopWatch();

    void stop();

private:
    static std::string prefix();
    static void log(const std::string &s);

private:
    static int m_aliveCount;
    bool m_stopped;
    int64_t m_startTimeInNs;
    std::string m_tag;
};
