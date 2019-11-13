//
// Created by Smashenpuss on 11/6/2019.
//

#ifndef JOHNSON_COREY_LAB5_WALLANT_H
#define JOHNSON_COREY_LAB5_WALLANT_H

#include <string>
#include <vector>
#include "Ant.h"

class WallAnt: public Ant {

public:
    //WallAnt(std::string name, BoardSpace space, int armor);
    WallAnt();

    WallAnt(const WallAnt &orig);
    ~WallAnt() override;
    WallAnt &operator=(const WallAnt &orig);

    void action() override;

private:

};


#endif //JOHNSON_COREY_LAB5_WALLANT_H
