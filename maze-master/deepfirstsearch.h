#pragma once

#include "adjacencylist.h"

class DeepFirstSearch
{
public:
    DeepFirstSearch(int row, int column);
    AdjacencyList generate();

private:
    int m_row;
    int m_column;
};
