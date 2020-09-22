#include <string>
#include "Pet.h"

using namespace std;

// Put your constructor code here!
Pet::Pet() {
  name = "Rover";
  birth_year = 2018;
  type = "dog";
  owner_name = "Wade";
}

Pet::Pet(string new_Name, int birth, string type_name, string owner) {
  name = new_Name;
  birth_year = birth;
  type = type_name;
  owner_name = owner;
}

void Pet::setName(string newName) {
  name = newName;
}

void Pet::setBY(int newBY) {
  birth_year = newBY;
}

void Pet::setType(string newType) {
  type = newType;
}

void Pet::setOwnerName(string newName) {
  owner_name = newName;
}

string Pet::getName() {
  return name;
}

int Pet::getBY() {
  return birth_year;
}

string Pet::getType() {
  return type;
}

string Pet::getOwnerName() {
  return owner_name;
}
