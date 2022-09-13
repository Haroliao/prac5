#ifndef MAPGENERIC_H
#define MAPGENERIC_H
#include <vector>
#include<iostream>
class MapGeneric{
public:
    std::vector <int> map(std::vector<int> input);
    MapGeneric();
private:
    virtual int f(int t)=0;

};
#endif