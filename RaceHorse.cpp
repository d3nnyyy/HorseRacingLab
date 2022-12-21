#include "RaceHorse.h"
#include "Race.h"
using namespace std;

float speed, ageDiffer;
int age, placeInRace, id;
string name;

RaceHorse::RaceHorse(float speed, int age, string name, int id, float ageDiffer)
{
    this->speed = speed;
    this->age = age;
    this->name = name;
    this->id = id;
    this->ageDiffer = ageDiffer;
}
