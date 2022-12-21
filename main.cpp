#include <iostream>
#include <list>
#include <math.h>

#include "Race.h"
#include "RaceHorse.h"

using namespace std;

int main()
{
    // adding racers

    RaceHorse racer1(44, 9, "Bush", 1, 0);
    RaceHorse racer2(42, 3, "Roosevelt", 2, 0);
    RaceHorse racer3(12, 2, "Obama", 3, 0);
    RaceHorse racer4(43, 6, "Trump", 4, 0);
    RaceHorse racer5(50, 3, "Washinghton", 5, 0);

    Race race;
    race.temporaryAddRacer(racer1);
    race.temporaryAddRacer(racer2);
    race.temporaryAddRacer(racer3);
    race.temporaryAddRacer(racer4);
    race.temporaryAddRacer(racer5);

    for (const RaceHorse &racer : race.temporaryRacerList)
    {
        if (racer.age >= 3 && racer.age <= 7)
        {
            race.addRacer(racer);
        }
    }

    // finding the difference between their age and the average age of horses

    float sumOfAllAges, averageAge;

    for (const RaceHorse &horseage : race.racerList)
    {

        sumOfAllAges += horseage.age;
        averageAge = sumOfAllAges / race.racerList.size();
    }

    // sorting racers by age difference

    cout << "\nBefore sorting:" << endl;
    for (RaceHorse &racer : race.racerList)
    {

        racer.ageDiffer = abs(averageAge - racer.age);
        cout << racer.name << "'s age difference is  " << racer.ageDiffer << endl;
    }

    race.sortRacersByAge();
    cout << "\nAfter sorting:" << endl;
    for (RaceHorse &racer : race.racerList)
    {
        cout << racer.name << "'s age difference is  " << racer.ageDiffer << endl;
    }

    // sorting them by speed

    cout << "\n\nBefore sorting:" << endl;
    for (const RaceHorse &racer : race.racerList)
    {
        cout << racer.name << "'s speed is  " << racer.speed << endl;
    }
    race.sortRacersBySpeed();

    cout << "\nAfter sorting:" << endl;
    for (const RaceHorse &racer : race.racerList)
    {
        cout << racer.name << "'s speed is  " << racer.speed << endl;
    }

    // determining the winner

    for (const RaceHorse &winner : race.racerList)
    {
        cout << "\nThe Winner is " << winner.name << endl;
        break;
    }

    // assign to the best 3 racers their place in race

    int place = 1;
    for (RaceHorse &racer : race.racerList)
    {
        while (place != 4)
        {
            racer.placeInRace = place;
            place++;
            cout << racer.name << "'s place is " << racer.placeInRace << endl;
            break;
        }
    }

    return 0;
}