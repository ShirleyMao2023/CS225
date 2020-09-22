// Your code here! :)
#include "student.h"
#include <string>

using std::string;

namespace potd {
    string Student::get_name() {
        return name_;
    }
    void Student::set_name(string new_name) {
        name_ = new_name;
    }
    int Student::get_grade() {
        return grade_;
    }
    void Student::set_grade(int num) {
        grade_ = num;
    }
}