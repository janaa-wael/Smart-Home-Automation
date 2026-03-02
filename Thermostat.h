#include <iostream>
#include "SmartDevice.h"
using namespace std;

class Thermostat : public SmartDevice
{
private:
    float temperature;
    typedef enum {
        HEATING,
        COOLING,
        OFF
    }SwitchingMode;
    SwitchingMode mode;
public: 
    Thermostat();
    Thermostat(string& name);
    void setTemperature(float temperature);
    void setSwitchingMode(SwitchingMode mode);
    SwitchingMode getSwicthingMode();
    float readTemperature();
    virtual void activate(SwitchingMode mode);
    virtual void deactivate();

} ;