#ifndef GRID_H
#define GRID_H

#include <iostream>

class Grid {
public:
    int x;
    int y;

    Grid(const int x, const int y) : x(x), y(y)
    {}
    Grid(const Grid& other) : x(other.x), y(other.y)
    {}
    Grid() : x(0), y(0)
    {}

    friend std::ostream& operator << (std::ostream& os, const Grid& grid);
};


#endif // !GRID_H
