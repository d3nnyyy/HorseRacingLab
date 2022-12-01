#ifndef RACE_H
#define RACE_H
#include "RaceHorse.h"
#include <list>

class Race
{
public:
    // сreating list of racers

    std::list<RaceHorse> temporaryRacerList, racerList;

    void temporaryAddRacer(RaceHorse racer);

    void addRacer(RaceHorse racer);

    void sortRacersByAge();

    void sortRacersBySpeed();
};

#endif