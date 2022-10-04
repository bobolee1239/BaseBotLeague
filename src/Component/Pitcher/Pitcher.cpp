#include <cstdlib>
#include "Pitcher.h"

Pitch Pitcher::pitch(const PitchSpace& space)
{
    const int max_x = space.getWidth();
    const int max_y = space.getHeight();
    int x = rand() % max_x;
    int y = rand() % max_y;
    return Pitch(Grid(x, y));
}
