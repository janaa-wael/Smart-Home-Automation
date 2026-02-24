#include <iostream>
#include "WirelessCamera.h"
using namespace std;

void WirelessCamera::StartRecording() 
{
    rec_state = STARTED;
    cout << "Wireless Camera started recording" << endl;
}

void WirelessCamera::StopRecording() 
{
    rec_state = STOPPED;
    cout << "Wireless camera stopped recording." << endl;
}

void WirelessCamera::EnableVision() 
{
    night_mode = ENABLED;
    cout << "Wireless camera night vision is enabled" << endl;
}

void WirelessCamera::DisableVision() 
{
    night_mode = DISABLED;
    cout << "Wireless camera night vision is disabled" << endl;
}