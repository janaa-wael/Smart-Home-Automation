#include <iostream>
#include "SecurityCamera.h"

using namespace std;

class WiredCamera : public SecurityCamera {
private:

public:
    void StartRecording();
    void StopRecording();
    void EnableVision();
    void DisableVision();
};