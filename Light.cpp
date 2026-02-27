#include <iostream>
#include "Light.h"

using namespace std;

Light::Light()
{

}

Light::Light(string name)
: SmartDevice(name)
{

}

void Light::activate()
{
    turnOn();
}

void Light::deactivate()
{
    turnOff();
}

Light::~Light()
{
    cout << "Light Abstract Base Class is destroyed." << endl;
}
