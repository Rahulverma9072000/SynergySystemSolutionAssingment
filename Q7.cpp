// Write a function that reverse a number.
#include<iostream>
#include<climits>
using namespace std;
//Function to Reverse the Number 
int reverseNum(int num){
    int reversedNum = 0;
    bool isNegative = false;
    //case where number is negative 
    if(num<0){
        isNegative = true;
        num = -1*num;
    }
    while(num){
        //find the last digit
        int lastDig = num%10;
        //Forming the Result 
        reversedNum = (reversedNum)*10 + lastDig;
        //Removing the lastDigit for next iteration 
        num = num/10;
    }
    return isNegative ? -1*reversedNum : reversedNum;
}
int main(){
    int num;
    cout<<"Enter the Number "<<endl;
    cin>>num;
    cout<<"Reverse Number : ";
    cout<<reverseNum(num)<<endl;
    return 0;
}
// Time Complexity : O(number of digits) : O(logn) 
// Space Complexity : O(1)