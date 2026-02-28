#ifndef SECURITY_CAMERA_H
#define SECURITY_CAMERA_H

#include <iostream>
#include <memory>
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

    typedef enum {
        ACTIVE,
        INACTIVE
    }Camera_Status;
    Camera_Status status = INACTIVE;
    RecordingState rec_state;
    NightVisionMode night_mode;
public:
    SecurityCamera();
    SecurityCamera(string name);
    virtual void StartRecording() = 0;
    virtual void StopRecording() = 0;
    virtual void EnableVision() = 0;
    virtual void DisableVision() = 0;
    void activate() override;
    void deactivate() override;

};

#endif