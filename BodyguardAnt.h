//
// Created by Corey Johnson on 11/6/2019.
//

#ifndef JOHNSON_COREY_LAB5_BODYGUARDANT_H
#define JOHNSON_COREY_LAB5_BODYGUARDANT_H

#include <string>
#include <vector>
#include "Ant.h"

class BodyguardAnt: public Ant {

public:
    //BodyguardAnt(std::string name, BoardSpace space, int armor);
    BodyguardAnt();

    BodyguardAnt(const BodyguardAnt &orig);
    ~BodyguardAnt();
    BodyguardAnt &operator=(const BodyguardAnt &orig);

    void action() override;

private:

};


#endif //JOHNSON_COREY_LAB5_BODYGUARDANT_H
