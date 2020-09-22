#include <iostream>
#include "Thing.h"

int main() {
    potd::Thing * t1 = new potd::Thing(5);
    potd::Thing * t2 = new potd::Thing(5);

    std::cout << t1->set_property("name","Kermit") << std::endl;
    std::cout<< t1->set_property("color","Green") <<std::endl;

    std::cout << t1->get_property("name") << " is " << t1->get_property("color") << std::endl;

    *t2 = *t1;
    std::cout << t1->set_property("name","Grover") << std::endl;
    std::cout << t1->set_property("color","Blue") << std::endl;

    std::cout << t2->get_property("name") << " is " << t2->get_property("color") << std::endl;
    std::cout << t1->get_property("name") << " is " << t1->get_property("color") << std::endl;

    delete t1;
    delete t2;
}
