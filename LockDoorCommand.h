#include <iostream>
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