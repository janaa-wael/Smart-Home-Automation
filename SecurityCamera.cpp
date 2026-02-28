#include <iostream>
#include "SecurityCamera.h"
using namespace std;

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
