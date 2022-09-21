#include <demo_cpp.hpp>

int main() {
    auto d = demo::Demo{CASE_B};
    d.side_effect();

    demo::Demo::side_effect_for(CASE_A);

    return 0;
}