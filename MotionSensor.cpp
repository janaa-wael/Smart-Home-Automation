#include <iostream>
#include "MotionSensor.h"

MotionSensor::MotionSensor()
{

}

MotionSensor::MotionSensor(string name)
: SmartDevice(name)
{

}

void MotionSensor::detectMotion()
{
    state = MotionState::DETECTED;
    cout << "Movement detected by motion sensor";
}

void MotionSensor::notify() 
{
    for(auto o : observers)
    {
        o->update();
    }
}

void MotionSensor::activate() 
{
    status = ACTIVE;
}
    
void MotionSensor::deactivate() 
{
    status = INACTIVE;
}


