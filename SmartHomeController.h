#include <iostream>
#include <vector>
#include <stack>
#include "Command.h"
#include "SmartDevice.h"
#include "Observer.h"

class SmartHomeController : public Observer{
private:
    vector<shared_ptr<SmartDevice>> devices;
    stack<shared_ptr<Command>> history;
public:
    void addDevice(shared_ptr<SmartDevice> device);
    void removeDevice(shared_ptr<SmartDevice> device);
    void removeDevice(string device);
    shared_ptr<SmartDevice> getDevice(string device_name);

    void update() override;
};