// Your code here
#include "Food.h"
#include <string>

string Food::get_name() {
    return name_;
}
void Food::set_name(string new_name){
    name_ = new_name;
}
int Food::get_quantity(){
    return quantity_;
}
void Food::set_quantity(int num){
    quantity_ = num;
}