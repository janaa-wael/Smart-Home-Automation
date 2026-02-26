#include <iostream>
#include "RecordCameraCommand.h"

using namespace std;


void RecordCameraCommand::execute() 
{
    camera->StartRecording();
}

void RecordCameraCommand::undo() 
{
    camera->StopRecording();
}