#include <iostream>
#include "Light.h"
#include "LEDLight.h"
#include "SmartHomeController.h"
#include "DeviceFactory.h"
#include "WirelessCamera.h"
using namespace std;

int main()
{
    DeviceFactory* factory = new DeviceFactory();
    shared_ptr<Light> led_light = factory->createLight("LED");
    shared_ptr<SecurityCamera> camera = factory->createSecurityCamera("Wireless");
    camera->StartRecording();
    shared_ptr<MotionSensor> motion_sensor = factory->createMotionSensor("Motion Sensor");
    shared_ptr<DoorLock> door_lock = factory->createDoorLock("Door Lock"); 
    SmartHomeController* hub = new SmartHomeController();
    hub->addDevice(led_light);
    hub->addDevice(camera);
    hub->addDevice(motion_sensor);    
    hub->addDevice(door_lock);
    hub->addDevice(motion_sensor);
}