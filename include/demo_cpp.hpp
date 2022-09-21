#ifndef DEMO_CPP_HPP
#define DEMO_CPP_HPP

#include <demo/demo_types.h>

namespace demo {

struct Demo {
public:
    Demo(const enum demo_case);
    void side_effect();
    static void side_effect_for(const enum demo_case);
private:
    demo_case _case;
};

}

#endif /* DEMO_CPP_HPP */