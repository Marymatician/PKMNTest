#ifndef Stats_H
#define Stats_H

#include <string>
#include <map>

enum class Stats
{
    HP,
    ATK,
    DEF,
    SPA,
    SPD,
    SPE
};

const std::map <Stats, std::string> enumToStatStringMap = {
    {Stats::HP,"HP"},
    {Stats::ATK,"ATK"},
    {Stats::DEF,"DEF"},
    {Stats::SPA,"SPA"},
    {Stats::SPD,"SPD"},
    {Stats::SPE,"SPE"}
};

std::string enumToStatString(Stats statEnum);

#endif