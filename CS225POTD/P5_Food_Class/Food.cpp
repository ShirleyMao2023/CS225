// Your code here
#include <string>
#include "Food.h"
using std::string;
Food::Food() {
    name_ = "Apple";
    quantity_ = 5;
}
string Food::get_name() {
    return name_;
}
void Food::set_name(string name) {
    name_ = name;
}
int Food::get_quantity() {
    return quantity_;
}
void Food::set_quantity(int num) {
    quantity_ = num;
}