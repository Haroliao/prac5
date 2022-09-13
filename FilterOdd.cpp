#include <iostream>
#include <vector>
#include "FilterOdd.h"
#include "FilterGeneric.h"
using namespace std;
FilterOdd::FilterOdd(){

}

bool FilterOdd::g(int V){
    
    if(V%2==1){
        return true;
    }
    else{
        return false;
    }
}