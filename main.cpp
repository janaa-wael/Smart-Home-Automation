#include <iostream>
#include <memory>
#include <functional>
#include "Light.h"
#include "LEDLight.h"
#include "SmartHomeController.h"
#include "DeviceFactory.h"
#include "WirelessCamera.h"
#include "TurnOnLightCommand.h"
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
    shared_ptr<TurnOnLightCommand> turn_on_light = make_shared<TurnOnLightCommand>(led_light);
    hub->addCommand(make_shared<TurnOnLightCommand>(turn_on_light));
    turn_on_light->execute();
    turn_on_light->undo();

}