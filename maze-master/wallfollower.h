#pragma once

#include "adjacencylist.h"
#include "solutionlist.h"

class WallFollower
{
public:
    enum Hand
    {
        LeftHand,
        RightHand
    };

public:
    explicit WallFollower(Hand hand);
    SolutionList solve(AdjacencyList &adjList);

private:
    Hand m_hand;
};
