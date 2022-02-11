#include "Utils.h"


std::string Utils::getTypeString(Types t)
{
    auto it  = enum_to_string_map.find(t);

    if(it == enum_to_string_map.end())
    {
        return "ERROR";
    }else
    {
        return it->second;
    }
    

}