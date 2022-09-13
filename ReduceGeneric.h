#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H
#include <vector>
#include <iostream>
class ReduceGeneric{
    private:
       virtual int binaryOperator(int a, int b)=0;
    public:
    ReduceGeneric();
    int reduce(std::vector<int> input);
};
#endif