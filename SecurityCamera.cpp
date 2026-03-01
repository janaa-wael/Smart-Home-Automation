#include <iostream>
#include "SecurityCamera.h"
using namespace std;


SecurityCamera::SecurityCamera()
: SmartDevice("Security Camera")
{

}

SecurityCamera::SecurityCamera(string name)
: SmartDevice(name)
{

}


void SecurityCamera::activate() 
{
    status = ACTIVE;
    StartRecording();
}

void SecurityCamera::deactivate() 
{
    status = INACTIVE;
    StopRecording();
}
