#include <iostream>
#include "Light.h"

using namespace std;

Light::Light()
{

}

Light::Light(string name)
: SmartDevice(name)
{

}


Light::~Light()
{
    cout << "Light Abstract Base Class is destroyed." << endl;
}
