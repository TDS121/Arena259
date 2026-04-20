#ifndef CREATURE_H
#define CREATURE_H

#include <string>
#include <cstdlib>

class Creature
{
public:
    std::string name;
    int health;
    int damage;

    Creature(std::string n, int h, int d)
    {
        name = n;
        health = h;
        damage = d;
    }
//  simple randomness attack
    void attack(Creature &other)
    {
        int hit = damage + (std::rand() % 3) - 1;
        if (hit < 0)
        {
            hit = 0;
        }

        other.health -= hit; // reduce health by hit amount
        if (other.health < 0)
        {
            other.health = 0;
        }
    }

    bool isAlive()
    {
        return health > 0;
    }
};

#endif