//
// Created by Corey Johnson on 11/6/2019.
//

#ifndef JOHNSON_COREY_LAB5_NINJAANT_H
#define JOHNSON_COREY_LAB5_NINJAANT_H

#include <string>
#include <vector>
#include "Ant.h"

class NinjaAnt: public Ant {

public:
    //NinjaAnt(std::string name, BoardSpace space, int armor);
    NinjaAnt();

    NinjaAnt(const NinjaAnt &orig);
    ~NinjaAnt();
    NinjaAnt &operator=(const NinjaAnt &orig);

    void action() override;

private:

};


#endif //JOHNSON_COREY_LAB5_NINJAANT_H
