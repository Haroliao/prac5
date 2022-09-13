#include <iostream>
#include <vector>
#include "FilterGeneric.h"
#include "FilterForTwoDigitPositive.h"
using namespace std;

FilterForTwoDigitPositive::FilterForTwoDigitPositive(){

}

bool FilterForTwoDigitPositive::g(int a){
    if (a>9 && a<100){
    return true;
    }
    else{
        return false;
    }
}
