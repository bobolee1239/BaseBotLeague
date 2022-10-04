#include "PitchSpace.h"


bool PitchSpace::isStrike(const Pitch &pitch)
{
    Grid pos = pitch.position();
    const bool horizontalOk = (leftBotOfStrikeZone.x <= pos.x) && (pos.x <= rightTopOfStrikeZone.x);
    const bool verticalOk   = (leftBotOfStrikeZone.y <= pos.y) && (pos.y <= rightTopOfStrikeZone.y);
    return horizontalOk && verticalOk;
}
