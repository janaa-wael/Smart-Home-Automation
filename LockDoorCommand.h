#ifndef LOCK_DOOR_COMM_H
#define LOCK_DOOR_COMM_h

#include <iostream>
#include <memory>
#include <functional>
#include "Command.h"
#include "DoorLock.h"
using namespace std;

class LockDoorCommand : public Command{
private:
    shared_ptr<DoorLock> lock;
public:
    void execute() override;
    void undo() override;
};

#endif