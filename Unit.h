#ifndef UNIT_HEADER
#define UNIT_HEADER
#include "Utils.h"
#include <vector>
#include <iostream>

struct Position
{
    int x_;
    int y_;
};



class Unit
{
private:
    /* data */
    Types type_;
    Position pos_;
    std::vector<Unit*> neighbour_;

public:
    Unit(Types t,Position pos);
    ~Unit() = default;
    
    friend std::ostream& operator<<(std::ostream& os, const Unit& unit);
};

std::ostream& operator<<(std::ostream& os, const Unit& unit)
{
    os << "Type" <<Utils::getTypeString(unit.type_) << " Position: x: " << unit.pos_.x_ << " y: " << unit.pos_.y_;
    return os;
}




#endif // UNIT_HEADER
