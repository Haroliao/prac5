#include <iostream>
#include <vector>
#include "MapGeneric.h"
using namespace std;
MapGeneric::MapGeneric(){

}
vector<int> MapGeneric::map(vector<int> input){
  vector<int> output;
  if (input.size()==0){
   return output;
  }
  else{
 int value = input[input.size()-1];
 input.pop_back();


     output=map(input); 
     output.push_back(f(value));
     return output;
  }
    return output;
}

