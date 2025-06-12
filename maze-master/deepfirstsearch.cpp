#include "deepfirstsearch.h"

#include <vector>
#include <algorithm>

using namespace std;

DeepFirstSearch::DeepFirstSearch(int row, int column)
    : m_row(row)
    , m_column(column)
{

}

AdjacencyList DeepFirstSearch::generate()
{
    enum Color
    {
        White,
        Gray,
        Black
    };

    AdjacencyList result(m_row, m_column);

    vector<int> color(static_cast<size_t>(m_row * m_column), White);
    vector<int> current;
    current.reserve(static_cast<size_t>(m_row * m_column));

    color[0] = Gray;
    current.push_back(0);

    while (current.size())
    {
        int last = current.back();
        random_shuffle(result.surround(last).begin(), result.surround(last).end());

        auto iter = result.surround(last).cbegin();

        for (; iter != result.surround(last).cend(); iter++)
        {
            if (color[static_cast<size_t>(*iter)] == White)
            {
                color[static_cast<size_t>(*iter)] = Gray;
                result.connect(last, *iter);
                current.push_back(*iter);
                break;
            }
        }

        // all adjacent points are found
        if (iter == result.surround(last).cend())
        {
            current.pop_back();
            color[static_cast<size_t>(last)] = Black;
        }
    }

    return result;
}
