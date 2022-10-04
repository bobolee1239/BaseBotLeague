#include <iostream>
#include <sstream>

#include "./DataType/Pitch/Pitch.h"
#include "./Component/Pitcher/Pitcher.h"
#include "./Component/StrikeZone/StrikeZone.h"

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
    StrikeZone strikeZone;

    stringstream ss;
    const int numPitch = 20;
    for (int n=0; n<numPitch; ++n)
    {
        ss.str("");
        ss.clear();

        Pitch p = pitcher.pitch();
        const bool isStrike = strikeZone.isStrike(p);

        ss << "ball[" << n << "] => ";
        ss << p << ", strike: " << isStrike;    
        LOG_I(ss.str().c_str());
    }
    return 1;
}