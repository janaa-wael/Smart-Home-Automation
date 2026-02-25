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
