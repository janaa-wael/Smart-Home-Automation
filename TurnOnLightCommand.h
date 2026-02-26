#include <iostream>
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