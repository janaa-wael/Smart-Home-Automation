#include <iostream>
#include "SmartDevice.h"
using namespace std;

class SecurityCamera : public SmartDevice {
protected:
    typedef enum {
        STARTED,
        STOPPED
    }RecordingState;
    typedef enum {
        ENABLED,
        DISABLED
    }NightVisionMode;

    RecordingState rec_state;
    NightVisionMode night_mode;
public:
    SecurityCamera();
    SecurityCamera(string name);
    virtual void StartRecording() = 0;
    virtual void StopRecording() = 0;
    virtual void EnableVision() = 0;
    virtual void DisableVision() = 0;
};