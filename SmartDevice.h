#include <iostream>
#include "Observer.h"
using namespace std;

class SmartDevice {
    string name;
public:
    SmartDevice();
    SmartDevice(string name);
    virtual string getName() = 0;
    virtual ~SmartDevice() = default;
};