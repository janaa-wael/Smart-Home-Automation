#include <iostream>
#include "SecurityCamera.h"

class WirelessCamera : public SecurityCamera{
private:

public:
    WirelessCamera();
    WirelessCamera(string name);
    void StartRecording() override;
    void StopRecording() override;
    void EnableVision() override;
    void DisableVision() override;

};