#include <iostream>
#include <vector>
#include "SmartDevice.h"
#include "Observer.h"

class SmartHomeController : public Observer{
private:
    vector<shared_ptr<SmartDevice>> devices;
public:
    void addDevice(shared_ptr<SmartDevice> device);
    void removeDevice(shared_ptr<SmartDevice> device);
    void removeDevice(string device);
    shared_ptr<SmartDevice> getDevice(string device_name);

    void update() override;
};