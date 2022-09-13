#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H
#include <vector>
#include<iostream>
class FilterGeneric{
    public:
    
    std::vector<int> filter(std::vector<int> input);

    FilterGeneric();
    private:

    virtual bool g(int V)=0;
};
#endif