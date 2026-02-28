#ifndef MOTION_SENSOR_H
#define MOTION_SENSOR_H

#include <iostream>
#include <vector>
#include "Subject.h"
#include "SmartDevice.h"
#include "Observer.h"
using namespace std;

class MotionSensor : public SmartDevice, public Subject{
private:
    enum class MotionState{
        DETECTED,
        UNDETECTED
    };

    enum class SensorStatus{
        ACTIVE,
        INACTIVE
    };
    vector<shared_ptr<Observer>> observers;
    MotionState state = MotionState::UNDETECTED;
    SensorStatus status = SensorStatus::INACTIVE;
    vector<Observer*> observer;
public:
    MotionSensor();
    MotionSensor(string name);
    void detectMotion();
    void notify() override;
    void activate() override;
    void deactivate() override;


};

#endif