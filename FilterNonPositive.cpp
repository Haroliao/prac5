#include <iostream>
#include <vector>
#include "FilterGeneric.h"
#include "FilterNonPositive.h"
FilterNonPositive::FilterNonPositive(){

}
bool FilterNonPositive::g(int V){
     if (V<0){
        return true;
        }
    else{
        return false;
    }
}