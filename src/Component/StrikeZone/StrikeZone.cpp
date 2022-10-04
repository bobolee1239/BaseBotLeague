#include "StrikeZone.h"


bool StrikeZone::isStrike(const Pitch &pitch)
{
    Grid pos = pitch.position();
    const bool horizontalOk = (leftBot.x <= pos.x) && (pos.x <= rightTop.x);
    const bool verticalOk   = (leftBot.y <= pos.y) && (pos.y <= rightTop.y);
    return horizontalOk && verticalOk;
}
