#ifndef MAPABSOLUTEVALUE_H
#define MAPABSOLUTEVALUE_H
#include "MapGeneric.h"
#include <iostream>

class MapAbsoluteValue:public MapGeneric{


    public:
    MapAbsoluteValue();
     virtual int f(int t);

};

#endif