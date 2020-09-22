// Your code here
#pragma once
#include <string>

using std::string;
class Food {

    public:
    string get_name();
    void set_name(string new_name);
    int get_quantity();
    void set_quantity(int num);

    private:
    string name_;
    int quantity_;

};