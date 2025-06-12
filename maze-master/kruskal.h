#pragma once

#include "adjacencylist.h"

class Kruskal
{
public:
    Kruskal(int row, int column);
    AdjacencyList generate();

private:
    int m_row;
    int m_column;
};
