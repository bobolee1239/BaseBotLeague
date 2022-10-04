#ifndef STRIKEZONE_H
#define STRIKEZONE_H

#include "./DataType/Grid/Grid.h"
#include "./DataType/Pitch/Pitch.h"

class StrikeZone {
    Grid leftBot; 
    Grid rightTop;

public:
    StrikeZone() : leftBot(1, 1), rightTop(3, 4)
    {}
    StrikeZone(
        const int leftBoundary,
        const int rightBoundary,
        const int bottomBoundary,
        const int topBoundary
    ) : leftBot(leftBoundary, bottomBoundary), rightTop(rightBoundary, topBoundary)
    {}

    void setRange(
        const int leftBoundary,
        const int rightBoundary,
        const int bottomBoundary,
        const int topBoundary
    ) {
        leftBot = Grid(leftBoundary, bottomBoundary);
        rightTop = Grid(rightBoundary, topBoundary);
    } 

    bool isStrike(const Pitch &pitch);
};

#endif // !STRIKEZONE_H