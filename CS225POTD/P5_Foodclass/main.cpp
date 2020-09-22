// your code here
#include "Food.h"
#include "q5.h"
#include <iostream>

int main() {
    Food* food = new Food();
    std::cout << food->get_quantity() << std::endl;
    increase_quantity(food);
    std::cout << food->get_quantity() << std::endl;
}