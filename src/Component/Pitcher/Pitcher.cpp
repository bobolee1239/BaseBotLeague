#include <cstdlib>
#include "Pitcher.h"

Pitch Pitcher::pitch()
{
    const int max_x = 5;
    const int max_y = 5;
    int x = rand() % max_x;
    int y = rand() % max_y;
    return Pitch(Grid(x, y));
}
