#include "Race.h"
#include "RaceHorse.h"
using namespace std;

// сreating list of racers

std::list<RaceHorse> temporaryRacerList, racerList;

// adding racers

void Race::temporaryAddRacer(RaceHorse racer)
{
    temporaryRacerList.push_back(racer);
}

void Race::addRacer(RaceHorse racer)
{
    racerList.push_back(racer);
}

// sorting racers by their age and speed

void Race::sortRacersByAge()
{
    racerList.sort([](const RaceHorse &first, const RaceHorse &second)
                   { return first.ageDiffer < second.ageDiffer; });
}

void Race::sortRacersBySpeed()
{
    racerList.sort([](const RaceHorse &first, const RaceHorse &second)
                   { return first.speed > second.speed; });
};