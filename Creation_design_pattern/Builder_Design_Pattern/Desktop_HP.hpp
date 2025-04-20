#include <iostream>
#include "Desktop_builder.hpp"

class HPDesktopbuilder : public Desktop_Builder {
    void buildMonitor() = 0;
    void buildKeyboard() = 0;
    void buildRam() = 0;
    void buildProcessor() = 0;
    void buildmouse() = 0;
    void buildmotherboard() = 0;
    void buildspeaker() = 0;

};