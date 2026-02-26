#ifndef SMART_HOME_CONTROLLER_H
#define SMART_HOME_CONTROLLER_H

#include <iostream>
#include <vector>
#include <memory>
#include <functional>
#include <stack>
#include "Command.h"
#include "SmartDevice.h"
#include "Observer.h"
#include "Command.h"



class SmartHomeController : public Observer{
private:
    vector<shared_ptr<SmartDevice>> devices;
    stack<shared_ptr<Command>> history;
public:
    void addDevice(shared_ptr<SmartDevice> device);
    void removeDevice(shared_ptr<SmartDevice> device);
    void removeDevice(string device);
    shared_ptr<SmartDevice> getDevice(string device_name);
    void addCommand(shared_ptr<Command> command);
    void undoLastCommand(void);
    void executeCommand(shared_ptr<Command> cmd);
    void update() override;
};

#endif