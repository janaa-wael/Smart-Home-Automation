#include <iostream>
#include "Light.h"
using namespace std;

class LEDLight : public Light {
private:

public:
    LEDLight();
    LEDLight(string name);
    void turnOn();
    void turnOff();
    void dim(int brightnessLevel);
    virtual ~LEDLight();
};