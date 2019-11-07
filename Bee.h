//
// Created by Corey Johnson on 11/6/2019.
//

#ifndef JOHNSON_COREY_LAB5_BEE_H
#define JOHNSON_COREY_LAB5_BEE_H

#include <string>
#include <vector>
#include "Insect.h"

class Bee : public Insect {

public:
    //Bee(std::string name, BoardSpace space, int armor);
    Bee();

    Bee(const Bee &orig);
    ~Bee();
    Bee &operator=(const Bee &orig);

    void action() override;
    bool isBee() override ;
    void sting();
    bool isBlocked();
    void moveLeft();
    std::string toString();

private:
    std::string name;
};


#endif //JOHNSON_COREY_LAB5_BEE_H
