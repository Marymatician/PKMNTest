#include "Random.h"
#include <cmath>
#include <chrono>
#include <ctime>

Rand::Rand()
{
    setSeed();
}

Rand::~Rand()
{

}

void Rand::setSeed()
{
    auto currentTime = std::chrono::system_clock::now();
    seed = currentTime.time_since_epoch().count();
}

int Rand::randint(int start, int end)
{
    float floatMult = random();
    return end*floatMult;
}

float Rand::random()
{
    //Advance the Linear Congruantial Generator
    lcgRand();
    //Take the higher 16 bits of the binary value
    unsigned upperState = floor(seed / 65536);
    //upperState is now an integer in the range 0-65535
    return float(upperState) / 65535;
}

void Rand::lcgRand()
{
    //as seed is an unsigned integer, it should mod 32 by default.
    unsigned a = 65533;
    unsigned c = 1;

    seed = (a * seed + c);
}