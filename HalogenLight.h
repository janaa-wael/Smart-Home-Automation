#ifndef HALOGEN_LIGHT_H
#define HALOGEN_LIGHT_H

#include <iostream>
#include "Light.h"
using namespace std;

class HalogenLight : public Light {
private:

public:
    void turnOn();
    void turnOff();
    void dim(int brightnessLevel);
    virtual ~HalogenLight();
};

#endif