#include <iostream>
#include "Command.h"
#include "Light.h"

using namespace std;

class TurnOnLightCommand : public Command {
    shared_ptr<Light> light;
public:
    void execute() override;
    void undo() override;
};