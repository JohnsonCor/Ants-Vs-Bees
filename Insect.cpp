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
    this->name = name;
    this->armor = armor;
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
    this->setName(orig.getName());
    this->setArmor(orig.getArmor());
    this->damage = orig.getDamage();
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
    this->setName(orig.getName());
    this->setArmor(orig.getArmor());
    this->damage = orig.getDamage();
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
 * @return Damage
 * @description Insect damage getter method
 */
int Insect::getDamage() const {
    return this->damage;
}

/**
 *
 * @return foodCost
 * @description Insect foodCost getter method
 */
int Insect::getFoodCost() const {
    return this->foodCost;
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
 * @param damage
 * @description Insect damage setter method
 */
void Insect::setDamage(int damage) {
    this->damage = damage;
}

/**
 *
 * @param damage
 * @description Insect foodCost setter method
 */
void Insect::setFoodCost(int foodCost) {
    this->damage = foodCost;
}

/**
 * @description Pure virtual method, overridden in
 * each child class
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