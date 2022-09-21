#include <iostream>
#include <demo_cpp.hpp>
#include <demo.h>

demo::Demo::Demo(const enum demo_case x) : _case{x} {}

void demo::Demo::side_effect()
{
    Demo::side_effect_for(_case);
}

void demo::Demo::side_effect_for(const enum demo_case c)
{
    std::cout << "Calling into C code\n";
    ::side_effect_for(c);
    #ifdef EXTRA_MSG
    std::cout << "Did call into C code\n";
    #endif
}