#ifndef SMART_DEVICE
#define SMART_DEVICE 

#include <iostream>
#include <memory>
#include "Observer.h"
using namespace std;


class SmartDevice {
    string name;
    typedef enum {
        INACTIVE,
        ACTIVE
    }StatusType;
    StatusType status = INACTIVE;
public:
    SmartDevice();
    SmartDevice(string name);
    virtual void activate() = 0;
    virtual void deactivate() = 0;
    string getName();
    virtual ~SmartDevice() = default;
};

#endif