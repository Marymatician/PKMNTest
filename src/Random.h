#ifndef Random_H
#define Random_H

class Rand
{
    public:
    //constructs the Rand class, feeding it its starting seed.
    Rand();

    ~Rand();

    void setSeed();

    int randint(int start, int end);
    //returns a float from 0-1, inclusive.
    float random();

    private:
    //Linear congruential generator that alters the value stored in seed.
    void lcgRand();

    //the seed of my RNG
    unsigned seed;
};

#endif