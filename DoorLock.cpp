#include <iostream>
#include "DoorLock.h"

DoorLock::DoorLock()
{

}

DoorLock::DoorLock(string name)
: SmartDevice(name)
{

}

void DoorLock::lock()
{
    state = LOCKED;
    cout << "Door lock is locked." << endl;
}

void DoorLock::unlock()
{
    state = UNLOCKED;
    cout << "Door lock is unlocked." << endl;
}

DoorLock::~DoorLock()
{
    cout << "Door Lock derived class is destroyed." << endl;
}


void DoorLock::activate() 
{
    status = ACTIVE;
    lock();
}

void DoorLock::deactivate() 
{
    status = SmartDevice::ACTIVE;
    unlock();
}
