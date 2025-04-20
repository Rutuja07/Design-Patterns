#include "Desktop_HP.hpp"
#include <iostream>

void HPDesktopbuilder :: buildMonitor() {
    desktop->setMonitor("HP Monitor");
}
void HPDesktopbuilder :: buildKeyboard() {
    desktop->setKeyboard("HP Keyboard");
}
void HPDesktopbuilder :: buildRam() {
    desktop->setRam("HP Ram");
}
void HPDesktopbuilder :: buildProcessor() {
    desktop->setProcessor("HP Processor");
}
void HPDesktopbuilder :: buildmouse() {
    desktop->setmouse("HP mouse");
}
void HPDesktopbuilder :: buildmotherboard() {
    desktop->setmotherboard("HP motherboard");
}
void HPDesktopbuilder :: buildspeaker() {
    desktop->setspeaker("HP speaker");
}
