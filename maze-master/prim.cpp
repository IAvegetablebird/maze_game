#include "prim.h"
#include "util.h"

#include <vector>
#include <set>
#include <random>
#include <algorithm>
#include <utility>
#include <ctime>

using namespace std;

Prim::Prim(int row, int column)
    : m_row(row)
    , m_column(column)
{

}

AdjacencyList Prim::generate()
{
    AdjacencyList result(m_row, m_column);

    vector<bool> linked(static_cast<size_t>(m_row * m_column), false);
    linked[0] = true;

    set<pair<int ,int>> paths;
    paths.insert(pair<int, int>(0, 1));
    paths.insert(pair<int, int>(0, m_column));

    static default_random_engine e(static_cast<unsigned>(time(nullptr)));

    while (!paths.empty())
    {
        // random select a path in paths
        int pos = static_cast<int>(e() % paths.size());
        auto iter = paths.begin();
        advance(iter, pos);

        // connect the two node of path
        result.connect(iter->first, iter->second);

        // get the node not in linked
        int current = 0;
        if (!linked[static_cast<size_t>(iter->first)])
        {
            current = iter->first;
        }
        else
        {
            current = iter->second;
        }

        // add the node to linked
        linked[static_cast<size_t>(current)] = true;

        // add all not accessed path to paths, and delete all invalid path from paths
        for (auto i : result.surround(current))
        {
            pair<int, int> currentPath = makeOrderedPair(i, current);
            if (!linked[static_cast<size_t>(i)])
            {
                paths.insert(currentPath);
            }
            else
            {
                paths.erase(paths.find(currentPath));
            }
        }
    }

    return result;
}
