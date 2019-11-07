//
// Created by Corey Johnson on 11/6/2019.
//

#ifndef JOHNSON_COREY_LAB5_LONGTHROWERANT_H
#define JOHNSON_COREY_LAB5_LONGTHROWERANT_H

#include <string>
#include <vector>
#include "Ant.h"

class LongThrowerAnt: public Ant {

public:
    //ThrowerAnt(std::string name, BoardSpace space, int armor);
    LongThrowerAnt();

    LongThrowerAnt(const LongThrowerAnt &orig);
    ~LongThrowerAnt();
    LongThrowerAnt &operator=(const LongThrowerAnt &orig);

    void action() override;

private:

};


#endif //JOHNSON_COREY_LAB5_LONGTHROWERANT_H
