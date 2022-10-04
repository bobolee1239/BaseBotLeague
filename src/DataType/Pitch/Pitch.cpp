#include "Pitch.h"

std::ostream& operator << (std::ostream& os, const Pitch& pitch)
{
    os << "pos:" << pitch.pos;
    return os;
}
