#include <iostream>
#include "Light.h"
#include "MotionSensor.h"
#include "SecurityCamera.h"
#include "DoorLock.h"
#include "SmartDevice.h"

using namespace std;

class DeviceFactory {
private:

public:
    shared_ptr<Light> createLight(string name);
    shared_ptr<MotionSensor> createMotionSensor(string name);
    shared_ptr<SecurityCamera> createSecurityCamera(string name);
    shared_ptr<DoorLock> createDoorLock(string name);
};