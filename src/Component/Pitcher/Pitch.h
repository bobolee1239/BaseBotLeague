#ifndef PITCH_H
#define PITCH_H

#include "./DataType/Grid/Grid.h"

class Pitch {
    Grid pos;
public:
    Pitch(Grid& pos) : pos(pos)
    {}
    Pitch(Grid&& pos) : pos(pos)
    {}
    Pitch() : pos()
    {}
};

#endif // !PITCH_H