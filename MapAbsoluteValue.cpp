#include <iostream>
#include <vector>
#include "MapGeneric.h"
#include "MapAbsoluteValue.h"
using namespace std;

MapAbsoluteValue::MapAbsoluteValue(){

}

int MapAbsoluteValue::f(int a){
    int x=abs(a);
    return x;
}