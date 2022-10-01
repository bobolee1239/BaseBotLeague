#ifndef GRID_H
#define GRID_H

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
};


#endif // !GRID_H
