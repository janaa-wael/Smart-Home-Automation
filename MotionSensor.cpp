#include <iostream>
#include "MotionSensor.h"

MotionSensor::MotionSensor()
{

}

void MotionSensor::detectMotion()
{
    state = MotionState::DETECTED;
    cout << "Movement detected by motion sensor";
}
