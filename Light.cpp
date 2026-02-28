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
    status = ACTIVE;
    turnOn();
}

void Light::deactivate()
{
    status = INACTIVE;
    turnOff();
}

Light::~Light()
{
    cout << "Light Abstract Base Class is destroyed." << endl;
}
