#include <iostream>
#include <vector>
#include "ReduceGeneric.h"
using namespace std;

ReduceGeneric::ReduceGeneric(){

}
int ReduceGeneric::reduce(vector<int> input){
    if(input.size()==1){
        return input[0];
    }
        int a=input[input.size()-1];
        input.pop_back();
        int b=reduce(input);
        return binaryOperator(a,b);
}
