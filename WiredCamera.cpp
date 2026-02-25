#include <iostream>
#include "WiredCamera.h"
using namespace std;

WiredCamera::WiredCamera()
{

}

WiredCamera::WiredCamera(string name)
: SecurityCamera(name)
{

}


void WiredCamera::StartRecording()
{
    cout << "Wired Camera started recording" << endl;
    rec_state = STARTED;
}

void WiredCamera::StopRecording()
{
    cout << "Wired Camera stopped recording" << endl;
    rec_state = STOPPED;

}

void WiredCamera::EnableVision()
{
    night_mode = ENABLED;
    cout << "Wired camera night vision is disabled" << endl;

}

void WiredCamera::DisableVision()
{
    night_mode = DISABLED;
    cout << "Wired camera night vision is disabled" << endl;

}