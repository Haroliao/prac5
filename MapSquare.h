#ifndef MAPsquare_H
#define MAPsquare_H
#include <vector>
#include <map>
#include<iostream>
#include "MapGeneric.h"
class MapSquare:public MapGeneric{
    public:
    MapSquare();
    virtual int f(int t);
    

};
#endif