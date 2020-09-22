// Your code here! :)
#pragma once
#include <string>

using std::string;
namespace potd {
    class Student {
        private:
        string name_;
        int grade_;
        public:
        string get_name();
        void set_name(string new_name);
        int get_grade();
        void set_grade(int num);
    };
}