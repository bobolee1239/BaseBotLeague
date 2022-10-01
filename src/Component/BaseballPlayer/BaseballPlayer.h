#ifndef BASEBALLPLAYER_H
#define BASEBALLPLAYER_H

#include <string>

#include "./DataType/FieldPosition/FieldPosition.h"

class BaseballPlayer {
    std::string   name;
    int           number;
    FieldPosition fieldPos; 
public:
    BaseballPlayer(
        const std::string  &name,
        const int           number,
        const FieldPosition posId
    ) : name(name), number(number), fieldPos(posId) 
    {}

    BaseballPlayer() : name(""), number(-1), fieldPos(DH)
    {}

    BaseballPlayer(const BaseballPlayer& player) : name(player.name), number(player.number), fieldPos(player.fieldPos)
    {}

    std::string getName() const
    {return name;}

    std::string getName()
    {return name;}

    int getNumber() const
    {return number;}

    int getNumber()
    {return number;}

    FieldPosition getPos() const 
    {return fieldPos;}

    FieldPosition getPos()
    {return fieldPos;}
};

#endif // !BASEBALLPLAYER_H