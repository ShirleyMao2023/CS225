// your code here
#include "q5.h"

void increase_quantity(Food *food) {
    int newNum = food->get_quantity() + 1;
    food->set_quantity(newNum);

};