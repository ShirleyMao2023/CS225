// Your code here
#pragma once
#include <string>
using std::string;

class Food {
    private:
    string name_;
    int quantity_;
    public:
    Food();
    string get_name();
    void set_name(string name);
    int get_quantity();
    void set_quantity(int num);

};