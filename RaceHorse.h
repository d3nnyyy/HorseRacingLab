#ifndef RACEHORSE_H
#define RACEHORSE_H

using namespace std;

#include <iostream>
#include <string>

class RaceHorse
{
public:
    float speed, ageDiffer;
    int age, placeInRace, id;
    string name;

    RaceHorse(float speed, int age, string name, int id, float ageDiffer);
};

#endif