#ifndef FILTERODD_H
#define FILTERODD_H
#include<iostream>
#include"FilterGeneric.h"
class FilterOdd:public FilterGeneric{
    public:
    FilterOdd();

     virtual bool g(int V);
};
#endif