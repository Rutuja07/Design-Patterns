#include <iostream>
#include <Desktop.hpp>

class Desktop_Builder {
    protected:
    Desktop* desktop;
    public:
      Desktop_Builder() {
        desktop = new Desktop();
      }
    virtual void buildMonitor() = 0;
    virtual void buildKeyboard() = 0;
    virtual void buildRam() = 0;
    virtual void buildProcessor() = 0;
    virtual void buildmouse() = 0;
    virtual void buildmotherboard() = 0;
    virtual void buildspeaker() = 0;
    virtual Desktop* getDesktop() {
        return desktop;
    }
};



