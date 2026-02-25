#include <iostream>
#include "SmartHomeController.h"



void SmartHomeController::update() 
{
    cout << "Smart Home Controller received Motion Event" << endl;
}


void SmartHomeController::addDevice(shared_ptr<SmartDevice> device)
{
    devices.push_back(device);
}

void SmartHomeController::removeDevice(shared_ptr<SmartDevice> device)
{
    devices.erase(
        remove(devices.begin(), devices.end(), device),
        devices.end()
    );
}

void SmartHomeController::removeDevice(string device)
{
    devices.erase(
        remove_if(devices.begin(), devices.end(), [device, this]()
            {
                for(auto d : devices)
                {
                    if(device == d->getName())
                        return true;
                }
            }
        ),
        devices.end()
    );
}

shared_ptr<SmartDevice> SmartHomeController::getDevice(string device_name)
{
    for(auto d : devices)
    {
        if(d->getName() == device_name) return d;
    }
}

