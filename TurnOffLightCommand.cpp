#include <iostream>
#include "Light.h"s
#include "TurnOffLightCommand.h"
using namespace std;

TurnOffLightCommand::TurnOffLightCommand(shared_ptr<Light> light)
: light(light)
{

}
    
void TurnOffLightCommand::execute()
{
    light->turnOff();
}

void TurnOffLightCommand::undo() 
{
    light->turnOn();
}