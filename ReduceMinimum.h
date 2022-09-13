#ifndef REDUCEMINIMUM_H
#define REDUCEMINIMUM_H
#include "ReduceGeneric.h"
#include <iostream>
class ReduceMinimum:public ReduceGeneric{
    
    public:
    ReduceMinimum();
    virtual int binaryOperator(int a, int b);

};

#endif