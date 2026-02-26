#include <iostream>
#include "SecurityCamera.h"
#include "Command.h"
using namespace std;

class RecordCameraCommand : public Command{
private:
    shared_ptr<SecurityCamera> camera;
public:
    void execute() override;
    void undo() override;
};