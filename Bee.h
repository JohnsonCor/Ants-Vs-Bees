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
    //explicit Bee(int armor);
    Bee();

    Bee(const Bee &orig);
    ~Bee() override;
    Bee &operator=(const Bee &orig);

    void action();
    //bool isBee();
    void sting(Insect &ant);
    void setBlocked(bool isBlocked);
    bool getBlocked();
    void moveLeft();
    std::string toString();

protected:
    bool isBlocked;
};


#endif //JOHNSON_COREY_LAB5_BEE_H
