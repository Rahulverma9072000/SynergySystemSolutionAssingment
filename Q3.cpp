// Write a conditional statement to find the largest of five numbers.
#include<iostream>
using namespace std;

int main(){
    int num1,num2,num3,num4,num5;
    cout<<"Enter All 5 Numbers "<<endl;
    cin>>num1>>num2>>num3>>num4>>num5;
    int res;
    //First Assuming num1 is result 
    res = num1;
    //Now compare with other 4 
    if(res<num2){
        res = num2;
    }
    if(res<num3){
        res = num3;
    }
    if(res<num4){
        res = num4;
    }
    if(res<num5){
        res = num5;
    }
    cout<<"Greatest of all 5 Numbers is "<<res<<endl;
    return 0;
}