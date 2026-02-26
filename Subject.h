#include <iostream>
#include <vector>
#include "Observer.h"
using namespace std;


class Subject {
    vector<Observer*> observers;
public:
    void attach(Observer* obs);
    void detach(Observer* obs);
    void update();
    virtual void notify();  
};