#include "unionfind.h"

using namespace std;

UnionFind::UnionFind(int n)
    : m_index2parent(static_cast<size_t>(n))
    , m_index2treeSize(static_cast<size_t>(n))
    , m_nodeCount(n)
    , m_connectionCount(0)
{
    for (int i = 0; i < n; i++)
    {
        m_index2parent[static_cast<size_t>(i)] = i;
        m_index2treeSize[static_cast<size_t>(i)] = 1;
    }
}

UnionFind::~UnionFind()
{

}

void UnionFind::connect(int p, int q)
{
    int i = root(p);
    int j = root(q);

    if (i == j)
    {
        return;
    }
    if (m_index2treeSize[static_cast<size_t>(i)] < m_index2treeSize[static_cast<size_t>(j)])
    {
        m_index2parent[static_cast<size_t>(i)] = j;
        m_index2treeSize[static_cast<size_t>(j)] += m_index2treeSize[static_cast<size_t>(i)];
    }
    else
    {
        m_index2parent[static_cast<size_t>(j)] = i;
        m_index2treeSize[static_cast<size_t>(i)] += m_index2treeSize[static_cast<size_t>(j)];
    }
    m_connectionCount++;
}

int UnionFind::root(int p)
{
    while (p != m_index2parent[static_cast<size_t>(p)])
    {
        p = m_index2parent[static_cast<size_t>(p)];
    }
    return p;
}
