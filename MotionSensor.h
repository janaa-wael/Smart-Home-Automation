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

    MotionState state = MotionState::UNDETECTED;
    SensorStatus status = SensorStatus::INACTIVE;
    vector<Observer*> observer;
public:
    MotionSensor();
    MotionSensor(string name);
    void detectMotion();

};