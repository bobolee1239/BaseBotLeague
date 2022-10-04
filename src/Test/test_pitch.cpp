#include <iostream>
#include <sstream>

#include "./DataType/Pitch/Pitch.h"
#include "./Component/Pitcher/Pitcher.h"
#include "./Component/PitchSpace/PitchSpace.h"

#include "./Logger/Logger.h"

using namespace std;

#define RUN_TEST(id)                          \
    do {                                      \
        if (!test##id()){                     \
            LOG_E("Test #" #id " Failed!");   \
            return 1;                         \
        }                                     \
    } while (0)

int test1();

int main(int argc, char* argv[])
{
    RUN_TEST(1);
    return 0;
}

int test1()
{
    Pitcher pitcher;

    const int width = 5;
    const int height = 5;
    PitchSpace pitchSpace(width, height);

    const int leftBoundary = 1;
    const int bottomBoundary = 1;
    const int rightBoundary = 3;
    const int topBoundary = 3;
    pitchSpace.setupStrikeZone(
        leftBoundary, 
        rightBoundary, 
        bottomBoundary, 
        topBoundary
        );

    stringstream ss;
    const int numPitch = 20;
    for (int n=0; n<numPitch; ++n)
    {
        ss.str("");
        ss.clear();

        Pitch p = pitcher.pitch(pitchSpace);
        const bool isStrike = pitchSpace.isStrike(p);

        ss << "ball[" << n << "] => ";
        ss << p << ", strike: " << isStrike;    
        LOG_I(ss.str().c_str());
    }
    return 1;
}