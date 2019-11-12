//
// Created by Corey Johnson on 11/6/2019.
//

#ifndef JOHNSON_COREY_LAB5_ANT_H
#define JOHNSON_COREY_LAB5_ANT_H

#include <string>
#include <vector>
#include "Insect.h"


class Ant: public Insect {

public:
    Ant(std::string name, int armor);
    Ant();

    Ant(const Ant &orig);
    ~Ant();
    Ant &operator=(const Ant &orig);

    virtual std::string getName();
    virtual int getDamage();
    virtual int getFoodCost();

    virtual void setName(std::string name);
    virtual void setDamage(int damage);
    virtual void setFoodCost(int foodCost);

    virtual void action();
    virtual bool isAnt();

private:
    std::string name;
    int damage;
    int foodCost;
};


#endif //JOHNSON_COREY_LAB5_ANT_H
