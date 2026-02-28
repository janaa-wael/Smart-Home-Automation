#include <iostream>
#include <algorithm>
#include <vector>
#include "Observer.h"
#include "Subject.h"
using namespace std;

void Subject::attach(Observer* obs)
{
    observers.push_back(obs);
}

void Subject::notify()
{
    for(auto o : observers)
    {
        o->update();
    }
}

void Subject::detach(Observer* obs)
{
    observers.erase(
      remove_if(observers.begin(), observers.end(), obs),
      observers.end()  
    );
}
