#include <iostream>
#include "Command.h"
#include "TurnOnLightCommand.h"

using namespace std;

void TurnOnLightCommand::execute() 
{
    light->turnOn();

}

void TurnOnLightCommand::undo() 
{
    light->turnOff();
}
