#include<vector>
#include<iostream>
//#include"MapGeneric.h"
//#include"MapSquare.h"
//#include"MapTriple.h"
//#include"MapAbsoluteValue.h"

//#include "FilterOdd.h"
#include "FilterGeneric.h"
//#include"ReduceGeneric.h"
//#include"ReduceMinimum.h"
//#include"ReduceGCD.h"
#include "FilterNonPositive.h"
//#include"FilterForTwoDigitPositive.h"


using namespace std;
int main(){
//MapSquare B;
//MapTriple B;
//MapAbsoluteValue B;
//FilterOdd B;
//ReduceMinimum B;
//ReduceGCD B;
FilterNonPositive B;
//FilterForTwoDigitPositive B;
vector<int> input;
input.push_back(-9);
input.push_back(12);
input.push_back(-13);
//vector <int> result = B.map(input);
vector <int> result = B.filter(input);
//cout<<B.reduce(input)<<endl;

for(int i=0; i<input.size(); i++){
    cout<< result.at(i)<< endl;
}
}

