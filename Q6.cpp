// Write a program to Find the smallest and second smallest element in an array

//basic way is to sort the array first element -> min and second element -> Second Min 
//Most Optimised way to Solve this problem using 2 Pointer 
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout << "Enter number of Elements in an Array : ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the Elements of an Array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int firstMin,secondMin;
    //Initialising both pointer with the maximum value 
    firstMin = secondMin = INT_MAX;
    //Traversing over the array 
    for(int i=0;i<n;i++){
        //if current element is samller than the firstMin 
        //than secondMin = firstMin and firstMin changes to current element 
        if(arr[i]<firstMin){
            secondMin = firstMin;
            firstMin = arr[i];
        }else if(arr[i] < secondMin){
            //this means current element is greater than firstMin 
            //but smaller than secondMin so update it 
            secondMin = arr[i];
        }
    }
    cout<<"First Minimum : "<<firstMin<<" Second Minimum : "<<secondMin<<endl;
    return 0;
}
