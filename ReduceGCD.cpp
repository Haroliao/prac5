#include <iostream>
#include <vector>
#include "ReduceGeneric.h"
#include "ReduceGCD.h"
using namespace std;


ReduceGCD::ReduceGCD(){

}


int ReduceGCD::binaryOperator(int a, int b){
    int x=0;
    if (a==b){return a;}
    if (a>b){
        x=b;
        while(x>0){
            if (b%x==0){return x;}
            x--;
        }
    }
    else{
        x=a;
        while(x>0){
            if (a%x==0){return x;}
            x--;
        }
    }
    return x;
}