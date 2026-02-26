#ifndef TURNON_LIGHT_COMM_H
#define TURNON_LIGHT_COMM_H

#include <iostream>
#include <functional>
#include <memory>
#include "Command.h"
#include "Light.h"

using namespace std;

class TurnOnLightCommand : public Command {
    shared_ptr<Light> light;
public:
    TurnOnLightCommand(shared_ptr<Light> light);
    void execute() override;
    void undo() override;
};

#endif