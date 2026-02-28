#ifndef LIGHT_COMMAND
#define LIGHT_COMMAND

#include <iostream>
#include <memory>
#include "SecurityCamera.h"

using namespace std;

class WiredCamera : public SecurityCamera {
private:

public:
    WiredCamera();
    WiredCamera(string name);
    void StartRecording();
    void StopRecording();
    void EnableVision();
    void DisableVision();
};

#endif