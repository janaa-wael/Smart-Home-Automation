#include <iostream>
#include "SmartDevice.h"

using namespace std;

class Light : SmartDevice {
protected:
        int brightnessLevel = 0;
        typedef enum {
            ON,
            OFF
        }LedMode;
        LedMode mode;
public:
    Light();
    Light(string name);
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    virtual void dim(int brightnessLevel) = 0;
    virtual ~Light();
};