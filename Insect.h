//
// Created by Corey Johnson on 11/6/2019.
//

#ifndef JOHNSON_COREY_LAB5_INSECT_H
#define JOHNSON_COREY_LAB5_INSECT_H

#include <string>
#include <vector>
#include "BoardSpace.h"

class Insect {

public:
    //Insect(BoardSpace space, int armor);
    Insect();

    Insect(const Insect &orig);
    ~Insect();
    Insect &operator=(const Insect &orig);

    //virtual BoardSpace getSpace();
    virtual int getArmor();

    //virtual void setSpace(BoardSpace space);
    virtual void setArmor(int armorVal);

    virtual void action() = 0;
    virtual void takeDamage();
    virtual bool isAnt();
    virtual bool isBee();
    virtual std::string toString() = 0;

private:
    //BoardSpace space;
    int armor;
};


#endif //JOHNSON_COREY_LAB5_INSECT_H
