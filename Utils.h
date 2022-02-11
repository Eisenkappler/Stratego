#if !defined UTILS_HEADER
#define UTILS_HEADER
#include <map>
#include "Types.h"
class Utils
{
private:
    /* data */
    static const std::map<Types,std::string> enum_to_string_map;
public:
    Utils(/* args */) = delete;
    ~Utils() = delete;
    static std::string getTypeString(Types t);
};


const std::map<Types,std::string> Utils::enum_to_string_map = {  {Types::FLAG,"FLAG"},
                                                        {Types::BOMB,"BOMB"},
                                                        {Types::SPY,"SPY"},
                                                        {Types::SCOUT,"SCOUT"},
                                                        {Types::MINER,"MINER"},
                                                        {Types::SERGEANT,"SERGEANT"},
                                                        {Types::LIEUTENANT,"LIEUTENANT"},
                                                        {Types::CAPTAIN,"CAPTAIN"},
                                                        {Types::MAJOR,"MAJOR"},
                                                        {Types::COLONEL,"COLONEL"},
                                                        {Types::GENERAL,"GENERAL"},
                                                        {Types::MARSHALL,"MARSHALL"}
                                                        };
 


#endif // UTILS_HEADER