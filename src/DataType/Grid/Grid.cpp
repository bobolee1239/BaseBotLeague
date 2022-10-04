#include "Grid.h"

std::ostream& operator << (std::ostream& os, const Grid& grid)
{
    os << "(" << grid.x << "," << grid.y << ")";
    return os;
}
