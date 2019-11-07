//
// Created by Corey Johnson on 11/6/2019.
//

#ifndef JOHNSON_COREY_LAB5_FIREANT_H
#define JOHNSON_COREY_LAB5_FIREANT_H

#include <string>
#include <vector>
#include "Ant.h"

class FireAnt: public Ant {

public:
    //FireAnt(std::string name, BoardSpace space, int armor);
    FireAnt();

    FireAnt(const FireAnt &orig);
    ~FireAnt();
    FireAnt &operator=(const FireAnt &orig);

    void action() override;

private:

};


#endif //JOHNSON_COREY_LAB5_FIREANT_H
