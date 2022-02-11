#include "Unit.h"



Unit::Unit(Types t, Position pos)
{
    type_ = t;
    pos_  = pos;
    neighbour_ = {nullptr,nullptr,nullptr,nullptr};
}