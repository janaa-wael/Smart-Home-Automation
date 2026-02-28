#ifndef RECORD_CAMERA_H
#define RECORD_CAMERA_H
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

#endif