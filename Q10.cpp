// Write a program to find the frequency of each digit in a given integer.
// Input any number: 122345
// The frequency of 0 = 0
// The frequency of 1 = 1
// The frequency of 2 = 2
// The frequency of 3 = 1
// The frequency of 4 = 1
// The frequency of 5 = 1
// The frequency of 6 = 0
// The frequency of 7 = 0
// The frequency of 8 = 0
// The frequency of 9 = 0

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the Number "<<endl;
    cin>>num;
    //Maintaining a data to store the frequency of digits 
    int data[10] = {0};
    //Traversing over the number 
    while(num){
        //Finding the last_Digit 
        int last_dig = num%10;
        //increasing the frequency count of the digit
        data[last_dig]+=1;
        //Removing the last_digit of Number 
        num = num/10;
    }
    cout<<"Printing All the Digits Frequency "<<endl;
    for(int i=0;i<10;i++){
        cout<<"The frequency of "<<i<<" = "<<data[i]<<endl;
    }cout<<endl;
    return 0;
}