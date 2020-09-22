#include "Derived.h"
#include "Base.h"
#include <string>
using std::string;

string Derived::bar() {
    return "And Ham";
}

string Derived::foo() {
    return  "I will not eat them.";
}

Derived::~Derived(){}