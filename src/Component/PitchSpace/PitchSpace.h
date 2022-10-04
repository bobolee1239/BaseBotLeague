#ifndef STRIKEZONE_H
#define STRIKEZONE_H

#include "./DataType/Grid/Grid.h"
#include "./DataType/Pitch/Pitch.h"

class PitchSpace {
    int width;
    int height;
    Grid leftBotOfStrikeZone; 
    Grid rightTopOfStrikeZone;

public:
    PitchSpace(
        const int width,
        const int height
    ) : width(width), height(height), leftBotOfStrikeZone(1, 1), rightTopOfStrikeZone(3, 3)
    {}

    int setupStrikeZone(
        const int leftBoundary,
        const int rightBoundary,
        const int bottomBoundary,
        const int topBoundary
    ) {
        if ((leftBoundary > rightBoundary) || (bottomBoundary > topBoundary))
        {return 0;}
        leftBotOfStrikeZone = Grid(leftBoundary, bottomBoundary);
        rightTopOfStrikeZone = Grid(rightBoundary, topBoundary);
        return 1;
    } 

    int getWidth() {return width;}
    int getWidth() const {return width;}

    int getHeight() {return height;}
    int getHeight() const {return height;}

    bool isStrike(const Pitch &pitch);
};

#endif // !STRIKEZONE_H