#include <iostream>
#include <functional>
#include "DeviceFactory.h"
#include "Light.h"
#include "LEDLight.h"
#include "HalogenLight.h"
#include "WiredCamera.h"
#include "WirelessCamera.h"
#include "MotionSensor.h"
#include "SecurityCamera.h"
#include "DoorLock.h"
#include "SmartDevice.h"

using namespace std;

shared_ptr<Light> DeviceFactory::createLight(string name)
{
    if(name == "LED") return make_shared<LEDLight>();
    if(name == "Halogen") return make_shared<HalogenLight>();
    throw std::invalid_argument("Unknown light variant");
}

shared_ptr<MotionSensor> DeviceFactory::createMotionSensor(string name)
{
    return make_shared<MotionSensor>(name);
}

shared_ptr<SecurityCamera> DeviceFactory::createSecurityCamera(string name)
{
    if(name == "Wireless Camera") return make_shared<WirelessCamera>(name);
    if(name == "Wired Camera") return make_shared<WiredCamera>(name);
    throw invalid_argument("Unknown security camera variant");
}

shared_ptr<DoorLock> DeviceFactory::createDoorLock(string name)
{
    return make_shared<DoorLock>(name);
}
