#include <iostream>

class SmartDevice
{

public:
    virtual string getName() = 0;
    virtual ~SmartDevice() = default;
};