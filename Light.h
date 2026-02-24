#include <iostream>
#include "SmartDevice.h"

using namespace std;

class Light : SmartDevice {
protected:
        int brightnessLevel = 0;

public:
    virtual void dim(int brightnessLevel) = 0;
    virtual ~Light();
};