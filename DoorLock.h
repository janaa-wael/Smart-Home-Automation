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
    virtual ~DoorLock();
};
