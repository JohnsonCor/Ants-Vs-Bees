//
// Created by Corey Johnson on 11/6/2019.
//

#ifndef JOHNSON_COREY_LAB5_HARVESTERANT_H
#define JOHNSON_COREY_LAB5_HARVESTERANT_H

#include <string>
#include <vector>
#include "Ant.h"

class HarvesterAnt: public Ant {

public:
    //HarvesterAnt(std::string name, BoardSpace space, int armor);
    HarvesterAnt();

    HarvesterAnt(const HarvesterAnt &orig);
    ~HarvesterAnt();
    HarvesterAnt &operator=(const HarvesterAnt &orig);

    void action() override;

private:

};


#endif //JOHNSON_COREY_LAB5_HARVESTERANT_H
