#include <iostream>
#include "LEDLight.h"
using namespace std;

void LEDLight::turnOn()
{
    mode = ON;
    cout << "Led Light is turned on" << endl;
}

void LEDLight::turnOff()
{
    mode = OFF;
    cout << "Led Light is turned off." << endl;
}

void LEDLight::dim(int brightnessLevel)
{
    this->brightnessLevel = brightnessLevel;
    cout << "Led light brightness is set to: " << brightnessLevel << endl;
}

LEDLight::~LEDLight()
{
    cout << "Led Light derived object is destroyed." << endl;
}
