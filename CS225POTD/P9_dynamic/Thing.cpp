// Your code here!
#include "Thing.h"
#include <string>
using std::string;

potd::Thing::Thing(int num) {
    props_ct_ = 0;
    props_max_ = num;
    properties_ = new string[props_max_];
    values_ = new string[props_max_];
}

potd::Thing::Thing(const Thing& other) {
    _copy(other);
}
potd::Thing& potd::Thing::operator=(const Thing& other){
    _copy(other);
    return *this;
}
potd::Thing::~Thing() {
    _destroy();
}
void potd::Thing::_destroy() {
    props_ct_ = 0;
    props_max_ = 0;
    delete[] properties_;
    properties_ = NULL;
    delete[] values_;
    values_ = NULL;
}
void potd::Thing::_copy(const Thing & other) {
    this->props_ct_ = other.props_ct_;
    this->properties_ = new string[other.props_max_];
    this->values_ = new string[other.props_max_];
    for(int i = 0; i < other.props_ct_; i++){
        this->properties_[i] = other.properties_[i];
        this->values_[i] = other.values_[i];
    }
}

int potd::Thing::set_property(string prop,string val) {
    if (props_ct_ <= props_max_) {
        for (int i = 0; i < props_ct_; i++) {
            if (properties_[i] == prop) {
                values_[i] = val;
                return i;
            }
        }
        if (props_ct_ < props_max_) {
            properties_[props_ct_] = prop;
            values_[props_ct_] = val;
            props_ct_++;
            return (props_ct_ - 1);
        }
    } 
    return -1;
}

string potd::Thing::get_property(string property) {
    for (int i = 0; i < props_ct_; i++) {
        if (properties_[i] == property) {
            return values_[i];
        }
    }
    return "";
}