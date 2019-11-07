//
// Created by Smashenpuss on 11/6/2019.
//

#ifndef JOHNSON_COREY_LAB5_SHORTTHROWERANT_H
#define JOHNSON_COREY_LAB5_SHORTTHROWERANT_H

#include <string>
#include <vector>
#include "Ant.h"

class ShortThrowerAnt: public Ant {

public:
    //ShortThrowerAnt(std::string name, BoardSpace space, int armor);
    ShortThrowerAnt();

    ShortThrowerAnt(const ShortThrowerAnt &orig);
    ~ShortThrowerAnt();
    ShortThrowerAnt &operator=(const ShortThrowerAnt &orig);

    void action() override;

private:

};


#endif //JOHNSON_COREY_LAB5_SHORTTHROWERANT_H
