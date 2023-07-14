// Write a program to get every nth element in a given array.
#include<iostream>
using namespace std;
//Function to Print Every nth element in a given array 
void getElements(int* arr,int n){
    //Traversing over an array 
    for(int i=0;i<n;i++){
        cout<<i<<"th Element "<<arr[i]<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of Elements in an Array : ";
    cin>>n;
    //Making the array dynamic because user have to enter the size of array while running the program
    int* arr = new int[n];
    cout<<"Enter the Elements of Array "<<endl;
    //Taking input of element of array 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Calling Function 
    getElements(arr,n);
    return 0;
}