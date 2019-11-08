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

    virtual int getSpaceNum() const ;

    virtual void setSpaceNum(int spaceNum);

    virtual bool hasAnt();
    virtual bool hasBee();
    virtual void addInsect(Insect insect);
    virtual void removeInsect(Insect insect);

private:
    Insect insect;
    //FireAnt f;
    Bee b;
    //std::vector<Ant> ants; no work
    std::vector<Bee> bees;
    int spaceNum;
};


#endif //JOHNSON_COREY_LAB5_BOARDSPA{}CE_H
