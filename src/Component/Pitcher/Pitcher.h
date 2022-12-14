#ifndef PITCHER_H
#define PITCHER_H

#include "./DataType/Pitch/Pitch.h"
#include "../BaseballPlayer/BaseballPlayer.h"
#include "../PitchSpace/PitchSpace.h"

class Pitcher : public BaseballPlayer {

public:
    Pitcher(
        const std::string  &name,
        const int           number,
        const FieldPosition posId
    ) : BaseballPlayer(name, number, posId)
    {}

    Pitcher() : BaseballPlayer()
    {}

    Pitcher(const Pitcher& player) : BaseballPlayer(static_cast<BaseballPlayer>(player))
    {}

    Pitch pitch(const PitchSpace& space);

};

#endif // !PITCHER_H