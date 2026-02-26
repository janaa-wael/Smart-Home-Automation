#include <iostream>
#include "LockDoorCommand.h"

void LockDoorCommand::execute() 
{
    lock->lock();
}

void LockDoorCommand::undo() 
{
    lock->unlock();
}
