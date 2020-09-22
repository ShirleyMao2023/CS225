// Animal.h
#pragma once
#include <string>

using std::string;

class Animal {
    private:
    string type_;
    public:
    string food_;
    string getType();
    void setType(string);
    string getFood();
    void setFood(string);
    void print();
    Animal();
    Animal(string, string);
};