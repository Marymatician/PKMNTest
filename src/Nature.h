#ifndef Nature_H
#define Nature_H

#include <map>
#include <string>
#include "Stats.h"

//an enum list of all the natures
enum class Nature
{
    ADAMANT,
    BASHFUL,
    BOLD,
    BRAVE,
    CALM,
    CAREFUL,
    DOCILE,
    GENTLE,
    HARDY,
    HASTY,
    IMPISH,
    JOLLY,
    LAX,
    LONELY,
    MILD,
    MODEST,
    NAIVE,
    NAUGHTY,
    QUIET,
    QUIRKY,
    RASH,
    RELAXED,
    SASSY,
    SERIOUS,
    TIMID
};

const std::map <std::string, Nature> stringToNatureMap = {
    {"Adamant", Nature::ADAMANT},
    {"Bashful", Nature::BASHFUL},
    {"Bold", Nature::BOLD},
    {"Brave", Nature::BRAVE},
    {"Calm", Nature::CALM},
    {"Careful", Nature::CAREFUL},
    {"Docile", Nature::DOCILE},
    {"Gentle", Nature::GENTLE},
    {"Hardy", Nature::HARDY},
    {"Hasty", Nature::HASTY},
    {"Impish", Nature::IMPISH},
    {"Jolly", Nature::JOLLY},
    {"Lax", Nature::LAX},
    {"Lonely", Nature::LONELY},
    {"Mild", Nature::MILD},
    {"Modest", Nature::MODEST},
    {"Naive", Nature::NAIVE},
    {"Naughty", Nature::NAUGHTY},
    {"Quiet", Nature::QUIET},
    {"Quirky", Nature::QUIRKY},
    {"Rash", Nature::RASH},
    {"Relaxed", Nature::RELAXED},
    {"Sassy", Nature::SASSY},
    {"Serious", Nature::SERIOUS},
    {"Timid", Nature::TIMID},
};

const std::map <Nature, std::pair <Stats, Stats>> natureStatsMap = {
    {Nature::HARDY, {Stats::ATK, Stats::ATK}},
    {Nature::LONELY, {Stats::ATK, Stats::DEF}},
    {Nature::ADAMANT, {Stats::ATK, Stats::SPA}},
    {Nature::NAUGHTY, {Stats::ATK, Stats::SPD}},
    {Nature::BRAVE, {Stats::ATK, Stats::SPE}},
    {Nature::BOLD, {Stats::DEF, Stats::ATK}},
    {Nature::DOCILE, {Stats::DEF, Stats::DEF}},
    {Nature::IMPISH, {Stats::DEF, Stats::SPA}},
    {Nature::LAX, {Stats::DEF, Stats::SPD}},
    {Nature::RELAXED, {Stats::DEF, Stats::SPE}},
    {Nature::MODEST, {Stats::SPA, Stats::ATK}},
    {Nature::MILD, {Stats::SPA, Stats::DEF}},
    {Nature::BASHFUL, {Stats::SPA, Stats::SPA}},
    {Nature::RASH, {Stats::SPA, Stats::SPD}},
    {Nature::QUIET, {Stats::SPA, Stats::SPE}},
    {Nature::CALM, {Stats::SPD, Stats::ATK}},
    {Nature::GENTLE, {Stats::SPD, Stats::DEF}},
    {Nature::CAREFUL, {Stats::SPD, Stats::SPA}},
    {Nature::QUIRKY, {Stats::SPD, Stats::SPD}},
    {Nature::SASSY, {Stats::SPD, Stats::SPE}},
    {Nature::TIMID, {Stats::SPE, Stats::ATK}},
    {Nature::HASTY, {Stats::SPE, Stats::DEF}},
    {Nature::JOLLY, {Stats::SPE, Stats::SPA}},
    {Nature::NAIVE, {Stats::SPE, Stats::SPD}},
    {Nature::SERIOUS, {Stats::SPE, Stats::SPE}}
};

Nature stringToNatureEnum(std::string stringNature);

std::pair <Stats, Stats> natureStats(Nature inputNature);

#endif