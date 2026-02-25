#include <iostream>
#include "Observer.h"
using namespace std;

class SmartDevice : public Observer
{

public:
    virtual string getName() = 0;
    virtual ~SmartDevice() = default;
};