#include <iostream>
#include "SmartDevice.h"

SmartDevice::SmartDevice()
{

}

SmartDevice::SmartDevice(string name)
: name(name)
{

}

string SmartDevice::getName()
{
    return name;
}


