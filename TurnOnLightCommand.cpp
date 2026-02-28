#include <iostream>
#include "Command.h"
#include "TurnOnLightCommand.h"

using namespace std;

TurnOnLightCommand::TurnOnLightCommand(shared_ptr<Light> light)
{
    this->light = light;
}


void TurnOnLightCommand::execute() 
{
    light->turnOn();

}

void TurnOnLightCommand::undo() 
{
    light->turnOff();
}
