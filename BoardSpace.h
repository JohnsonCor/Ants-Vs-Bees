//
// Created by Corey Johnson on 11/6/2019.
//

#ifndef JOHNSON_COREY_LAB5_BOARDSPACE_H
#define JOHNSON_COREY_LAB5_BOARDSPACE_H

#include <string>
#include <vector>
#include "Insect.h"
#include "Bee.h"
#include "HarvesterAnt.h"
#include "ThrowerAnt.h"
#include "FireAnt.h"
#include "LongThrowerAnt.h"
#include "ShortThrowerAnt.h"
#include "WallAnt.h"
#include "NinjaAnt.h"
#include "BodyguardAnt.h"

class BoardSpace {

public:
    explicit BoardSpace(int spaceNum);
    BoardSpace();

    BoardSpace(const BoardSpace &orig);
    ~BoardSpace();
    BoardSpace &operator=(const BoardSpace &orig);

    int getSpaceNum() const ;

    void setSpaceNum(int spaceNum);

    bool hasAnt();
    bool hasBee();
    //void addAnt(Ant* ant);
    void addInsect(Insect* insect);
    //void removeInsect(Insect insect);

protected:
    Insect* insectPtr;
    Bee b;
    std::vector<Insect*> insects;
    std::vector<Ant> ants;
    std::vector<Bee> bees;
    int spaceNum;
};


#endif //JOHNSON_COREY_LAB5_BOARDSPA{}CE_H
