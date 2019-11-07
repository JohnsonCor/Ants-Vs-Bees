//
// Created by Corey Johnson on 11/6/2019.
//

#include "Insect.h"
#include "BoardSpace.h"

Insect::Insect() {

}

Insect::Insect(const Insect &orig) {

}

Insect::~Insect() {

}

Insect &Insect::operator=(const Insect &orig) {
    return (*this);
}

int Insect::getArmor() {
    return 0;
}

void Insect::setArmor(int armorVal) {

}

void Insect::takeDamage() {

}

bool Insect::isAnt() {
    return false;
}

bool Insect::isBee() {
    return false;
}
