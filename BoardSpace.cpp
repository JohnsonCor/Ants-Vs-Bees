//
// Created by Corey Johnson on 11/6/2019.
//

#include "BoardSpace.h"

/**
 *
 * @param spaceNum Space number
 * @description BoardSpace parameterized constructor
 */
BoardSpace::BoardSpace(int spaceNum) {
    this->spaceNum = spaceNum;
}

/**
 * @description BoardSpace default constructor
 */
BoardSpace::BoardSpace() = default;

/**
 *
 * @param orig BoardSpace object to be copied
 * @description BoardSpace copy constructor
 */
BoardSpace::BoardSpace(const BoardSpace &orig) {
    this->setSpaceNum(orig.getSpaceNum());
}

/**
 * @description BoardSpace destructor
 */
BoardSpace::~BoardSpace() = default;

/**
 *
 * @param orig BoardSpace object to be copied
 * @return Copy of BoardSpace object
 * @description BoardSpace overloaded copy constructor
 */
BoardSpace &BoardSpace::operator=(const BoardSpace &orig) {
    if (&orig == this) {
        return (*this);
    }
    this->setSpaceNum(orig.getSpaceNum());
    return (*this);
}

/**
 *
 * @return Space number
 * @description BoardSpace space number getter method
 */
int BoardSpace::getSpaceNum() const {
    return this->spaceNum;
}

/**
 *
 * @param spaceNum Space number
 * @description BoardSpace space number setter method
 */
void BoardSpace::setSpaceNum(int spaceNum) {
    this->spaceNum = spaceNum;
}

/**
 *
 * @return Boolean
 * @description Return true if the space is occupied by an Ant
 */
bool BoardSpace::hasAnt() {
    if (sizeof(ants) != 0) {
        return true;
    }
    return false;
}

/**
 *
 * @return Boolean
 * @description Return true if the space is occupied by a Bee
 */
bool BoardSpace::hasBee() {
    return false;
}

/**
 *
 * @param insect An Insect object
 * @description Add an Insect to a BoardSpace
 */
/*
void BoardSpace::addInsect(Insect &insect) {
    if (insect.isAnt()) {
        insects.push_back(insect);
        //ants.push_back(insect);
    }
    if (insect.isBee()) {
        insects.push_back(insect);
        //bees.push_back(insect);
    }
}
*/
/**
 *
 * @param insect An Insect object
 * @description Remove an Isect from a BoardSpace
 */
 /*
void BoardSpace::removeInsect(Insect insect) {

}
*/