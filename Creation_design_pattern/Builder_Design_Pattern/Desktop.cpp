#include "Desktop.hpp"
#include <iostream>
using namespace std;

void Desktop::setMonitor(string pMonitor){
    monitor = pMonitor;
}

void Desktop::setKeyboard(string pKeyboard){
     Keyboard = pKeyboard;
}

void Desktop::setRam(string pRam){
    Ram = pRam;
}

void Desktop::setProcessor(string pProcessor){
    Processor = pProcessor;
}

void Desktop::setmouse(string pmouse){
    mouse = pmouse;
}

void Desktop::setmotherboard(string pmotherboard){
      motherboard = pmotherboard;
}

void Desktop::setspeaker(string pspeaker){
    speaker = pspeaker;
}

void Desktop::ShowSpecs(){
  cout << "-------------------------------------------------------------------------- "<<endl;
  cout << "Monitor" << monitor <<endl;
  cout << "Keyboard" << Keyboard <<endl;
  cout << "Ram" << Ram <<endl;
  cout << "Processor" << Processor <<endl;
  cout << "mouse" << mouse <<endl;
  cout << "motherboard" << motherboard <<endl;
  cout << "speaker" << speaker <<endl;
  cout << "-------------------------------------------------------------------------- "<<endl;
}


