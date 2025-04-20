#include <string>
using namespace std;

class Desktop {
   string monitor;
   string Keyboard;
   string Ram;
   string Processor;
   string mouse;
   string motherboard;
   string speaker;
public:
  void setMonitor(string pMonitor);
  void setKeyboard(string pKeyboard);
  void setRam(string pRam);
  void setProcessor(string pProcessor);
  void setmouse(string pmouse);
  void setmotherboard(string pmotherboard);
  void setspeaker(string pspeaker);
  void ShowSpecs();
};