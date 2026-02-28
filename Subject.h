#ifndef SUBJECT_H
#define SUBJECT_H

#include <iostream>
#include <vector>
#include <memory>
#include <functional>
#include "Observer.h"
using namespace std;


class Subject {
    vector<shared_ptr<Observer>> observers;
public:
    void attach(shared_ptr<Observer> obs);
    void detach(shared_ptr<Observer> obs);
    void update();
    virtual void notify();  
};

#endif