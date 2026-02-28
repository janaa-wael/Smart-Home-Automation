#ifndef DOOR_LOCK_H
#define DOOR_LOCK_H

#include <iostream>
#include "SmartDevice.h"
using namespace std;

class DoorLock : public SmartDevice {
private:
    typedef enum {
        LOCKED,
        UNLOCKED
    }LockedState;
    LockedState state;
public:
    DoorLock();
    void lock();
    void unlock();
    void activate() override;
    void deactivate() override;
    virtual ~DoorLock();
};

#endif