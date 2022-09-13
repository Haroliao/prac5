#ifndef FILTERNONPOSITIVE_H
#define FILTERNONPOSITIVE_H
#include "FilterGeneric.h"
#include <iostream>

class FilterNonPositive:public FilterGeneric{

    public:
    FilterNonPositive();
    virtual bool g(int V);

};

#endif