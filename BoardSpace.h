//
// Created by Corey Johnson on 11/6/2019.
//

#ifndef JOHNSON_COREY_LAB5_BOARDSPACE_H
#define JOHNSON_COREY_LAB5_BOARDSPACE_H

#include <string>
#include <vector>
//#include "Insect.h"
//#include "Ant.h"
#include "FireAnt.h"

class BoardSpace {

public:
    BoardSpace(int spaceNum);
    BoardSpace();

    BoardSpace(const BoardSpace &orig);
    ~BoardSpace();
    BoardSpace &operator=(const BoardSpace &orig);

    virtual int getSpaceNum();

    virtual void setSpaceNum(int spaceNum);

    virtual bool hasAnt();
    virtual bool hasBee();
    //virtual void addInsect(Insect insect);
    //virtual void removeInsect(Insect insect);

private:
    //Insect insect;
    //std::vector<Ant> ants;
    //std::vector<Bee> bees;
    int spaceNum;
};


#endif //JOHNSON_COREY_LAB5_BOARDSPACE_H
