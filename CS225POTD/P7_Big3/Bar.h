// your code here
#pragma once
#include "Foo.h"
#include <string>

namespace potd {
    class Bar {
        public:
        Bar(std::string);
        Bar(const Bar &);
        ~Bar();
        std::string get_name();
        Bar & operator=(const Bar &);

        private:
        Foo *f_;
    
    };
}
