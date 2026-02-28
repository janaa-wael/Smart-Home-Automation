#ifndef LED_LIGHT_H
#define LED_LIGHT_H

#include <iostream>
#include "Light.h"
using namespace std;

class LEDLight : public Light {
private:

public:
    LEDLight();
    LEDLight(string name);
    void turnOn() override;
    void turnOff() override;
    void dim(int brightnessLevel);
    virtual ~LEDLight();
};

#endif