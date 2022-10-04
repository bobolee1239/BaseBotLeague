#ifndef PITCH_H
#define PITCH_H

#include <iostream>
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

    Grid position() const 
    {return pos;}
    Grid position()
    {return pos;}

    friend std::ostream& operator << (std::ostream& os, const Pitch& pitch)
    {
        os << "pos:" << pitch.pos;
        return os;
    }
};

#endif // !PITCH_H