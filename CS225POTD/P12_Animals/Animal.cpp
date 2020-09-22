// Animal.cpp
#include "Animal.h"
#include <string>
#include <iostream>

using std::string;

Animal::Animal() {
    type_ = "cat";
    food_ = "fish";
}
Animal::Animal(string t, string f){
    type_ = t;
    food_ = f;
}

string Animal::getType() {
    return type_;
}
void Animal::setType(string t) {
    type_ = t;
}
string Animal::getFood() {
    return food_;
}
void Animal::setFood(string f) {
    food_ = f;
}
void Animal::print() {
    std::cout << "I am a  " << type_ << "."<< std::endl;
}