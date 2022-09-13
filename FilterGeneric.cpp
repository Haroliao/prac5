#include <vector>
#include <iostream>
#include "FilterGeneric.h"
using namespace std;
FilterGeneric::FilterGeneric(){

}
vector<int> FilterGeneric::filter(vector<int> input){
  vector<int> output;
  if (input.size()==0){
   return output;
  }
  else{
  int value = input[input.size()-1];
 input.pop_back();
 output=filter(input); 
    bool res = g(value);
    if(res==true){
       output.push_back(value);
    }
    return output;
  }
    
   return output;

    
}
//if (input.size()==0){return output;}
    //if (g(input[0])==1){output.push_back(input[0]);}
    //vector <int> newvec;
    //int size=input.size();
   // for (int i=1;i<size;i++){
      //  newvec.push_back(input[i]);
   // }
   // filter(newvec);
   // return output;