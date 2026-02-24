#include <iostream>
#include "HalogenLight.h"

void HalogenLight::turnOn()
{
    cout << "Halogen Light is turned on." << endl;
}
    
void HalogenLight::turnOff()
{
    cout << "Halogen Light is turned off." << endl;
}

void HalogenLight::dim(int brightnessLevel)
{
    cout << "Halogen Light brightness is set to: " << brightnessLevel << endl;
}
    
HalogenLight::~HalogenLight()
{
    cout << "Halogen Light Derived Class is destroyed." << endl;
}