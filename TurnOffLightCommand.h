#ifndef TURONFF_COMMAND_H
#define TURONFF_COMMAND_H

#include <iostream>
#include "Command.h"
#include "Light.h"
#include <memory>
using namespace std;

class TurnOffLightCommand : public Command {
    shared_ptr<Light> light;
public:
    TurnOffLightCommand(shared_ptr<Light> light);
    void execute() override;
    void undo() override;
};

#endif