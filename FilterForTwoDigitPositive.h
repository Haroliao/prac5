#ifndef FILTERFORTWODIGITPOSITIVE_H
#define FILTERFORTWODIGITPOSITIVE_H
#include "FilterGeneric.h"
#include <iostream>

class FilterForTwoDigitPositive:public FilterGeneric{
    

    public:
    FilterForTwoDigitPositive();
     virtual bool g(int V);

};

#endif