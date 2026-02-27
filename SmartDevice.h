#ifndef SMART_DEVICE
#define SMART_DEVICE 

#include <iostream>
#include <memory>
#include "Observer.h"
using namespace std;


class SmartDevice {
    string name;
public:
    SmartDevice();
    SmartDevice(string name);
    virtual void activate() = 0;
    virtual void deactivate() = 0;
    virtual string getName() = 0;
    virtual ~SmartDevice() = default;
};

#endif