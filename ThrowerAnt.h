//
// Created by Corey Johnson on 11/6/2019.
//

#ifndef JOHNSON_COREY_LAB5_THROWERANT_H
#define JOHNSON_COREY_LAB5_THROWERANT_H

#include <string>
#include <vector>
#include "Ant.h"

class ThrowerAnt: public Ant {

public:
    //ThrowerAnt(std::string name, BoardSpace space, int armor);
    ThrowerAnt();

    ThrowerAnt(const ThrowerAnt &orig);
    ~ThrowerAnt();
    ThrowerAnt &operator=(const ThrowerAnt &orig);

    void action() override;

private:

};


#endif //JOHNSON_COREY_LAB5_THROWERANT_H
