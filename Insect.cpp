//
// Created by Corey Johnson on 11/6/2019.
//

#include <string>
#include "Insect.h"

/**
 *
 * @param armor Insect armor
 * @description Insect parameterized constructor
 */
Insect::Insect(std::string name, int armor) {
    this->setArmor(armor);
}

/**
 * @description Insect default constructor
 */
Insect::Insect() {

}

/**
 *
 * @param orig Insect object to be copied
 */
Insect::Insect(const Insect &orig) {
    this->setArmor(orig.getArmor());
}

/**
 * @description Insect object default destructor
 */
Insect::~Insect() = default;

/**
 *
 * @param orig Insect object to be copied
 * @return
 * @description Insect object overloaded assignment operator
 */
Insect &Insect::operator=(const Insect &orig) {
    if (&orig == this) {
        return (*this);
    }
    this->setArmor(orig.getArmor());
    return (*this);
}

/**
 *
 * @return Insect name
 * @description Insect name getter method
 */
std::string Insect::getName() const {
    return this->name;
}

/**
 *
 * @return Armor value
 * @description Insect armor value getter method
 */
int Insect::getArmor() const {
    return this->armor;
}

/**
 *
 * @param name Insect name
 * @description Insect name setter method
 */
void Insect::setName(std::string name) {
    this->name = name;
}

/**
 *
 * @param armorVal Armor value
 * @description Insect armor setter method
 */
void Insect::setArmor(int armorVal) {
    this->armor = armorVal;
}

/**
 * @description
 */
void Insect::action() {

}

/**
 *
 * @param amountDamage Amount of damang an insect is taking
 * @description When an insect takes damage, reduce its armor
 * value
 */
void Insect::takeDamage(int amountDamage) {
    this->setArmor(this->getArmor() - amountDamage);
}

/**
 *
 * @return Boolean
 * @description If insect is an And, return true
 */
bool Insect::isAnt() {
    return false;
}

/**
 *
 * @return Boolean
 * @description If insect is a Bee, return true
 */
bool Insect::isBee() {
    return false;
}