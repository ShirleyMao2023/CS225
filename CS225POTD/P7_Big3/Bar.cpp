// your code here
#include "Bar.h"
#include <string>

namespace potd {
    Bar::Bar(std::string name) {
        f_ = new Foo(name);
    }
    Bar::Bar(const Bar& that) {
        f_ = new Foo(that.f_->get_name());
    }
    std::string Bar::get_name() {
        return f_->get_name();
    }
    Bar::~Bar() {
        delete f_;
        f_ = NULL;
    }
    Bar& Bar::operator=(const Bar& that) {
        delete this->f_;
        this->f_ = new Foo(that.f_->get_name());
        return *this;
    }
}