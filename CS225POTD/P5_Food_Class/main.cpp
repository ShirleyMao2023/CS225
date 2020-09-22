// your code here
#include "Food.h"
#include "q5.h"
#include <iostream>

using std::cout;
int main() {
    Food food;
    cout << "You have: " << food.get_quantity() << " " << food.get_name() << std::endl;
    increase_quantity(&food);
    cout << "You have: " << food.get_quantity() << " " << food.get_name() << std::endl;
    return 0;
}