#include <iostream>
#include "Thermostat.h"
using namespace std;

Thermostat::Thermostat()
{

}

Thermostat::Thermostat(string& name)
: SmartDevice(name)
{

}

void Thermostat::setTemperature(float temperature)
{
    this->temperature = temperature;
}

void Thermostat::setSwitchingMode(SwitchingMode mode)
{
    this->mode = mode;
}

Thermostat::SwitchingMode Thermostat::getSwicthingMode()
{
    if(status == INACTIVE || mode == OFF)
    {
        throw runtime_error("Thermostat is OFF or Inactive. Please activate it first");
    }
    return mode;
}

float Thermostat::readTemperature()
{
    if(status == INACTIVE || mode == OFF)
    return this->temperature;
}

void Thermostat::activate(SwitchingMode mode)
{
    status = ACTIVE;
    this->mode = mode;
}
    
void Thermostat::deactivate()
{
    status = INACTIVE;
    mode = OFF;
}
