#ifndef OBSERVER_H
#define OBSERVER_H

#include <iostream>
#include <memory>
using namespace std;

class Observer {
public:
    virtual void update() = 0;
    virtual ~Observer() = default;
};

#endif