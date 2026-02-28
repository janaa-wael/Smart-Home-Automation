#include <iostream>
#include <vector>
#include <algorithm>
#include "SmartHomeController.h"



void SmartHomeController::executeCommand(shared_ptr<Command> cmd)
{
    cmd->execute();
    history.push(cmd);
}

void SmartHomeController::undoLastCommand(void)
{
    if(!history.empty())
    {
        shared_ptr<Command> command = history.top();
        command->undo();
        history.pop();
    }
}

void SmartHomeController::addDevice(shared_ptr<SmartDevice> device)
{
    devices.push_back(device);
}

void SmartHomeController::removeDevice(shared_ptr<SmartDevice> device)
{
    devices.erase(
        remove_if(devices.begin(), devices.end(), [device](shared_ptr<SmartDevice>d)
        {
            return d->getName() == device->getName();
        }),
        devices.end()
    );
}

void SmartHomeController::removeDevice(string device)
{
    devices.erase(
        remove_if(devices.begin(), devices.end(), [device](shared_ptr<SmartDevice>d)
            {
                return d->getName() == device;
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
    return nullptr;
}

void SmartHomeController::addCommand(shared_ptr<Command> command)
{
    history.push(command);
}

 void SmartHomeController::update() 
 {
    cout << "Motion detected!" << endl;
 }
