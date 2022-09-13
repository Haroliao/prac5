#ifndef REDUCEGCD_H
#define REDUCEGCD_H
#include "ReduceGeneric.h"
#include <iostream>

class ReduceGCD:public ReduceGeneric{
    

    public:
    ReduceGCD();
    virtual int binaryOperator(int a, int b);

};

#endif