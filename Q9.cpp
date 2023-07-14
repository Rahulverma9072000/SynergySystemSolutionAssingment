// Write a program to compute the sum of the specified number of Prime numbers.
// For example when n = 7,
// s = 2 + 3 + 5 + 7 + 11 + 13 + 17 = 58.

#include<iostream>
using namespace std;
//Function to check if the number is Prime or not
bool isPrime(int num) {
    //corner cases 
    if (num <= 1)
        return false;
    //If the Number divides with any number ie lies in the range [2,n-1]
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    //if not divided by anyone return true it's prime number 
    return true;
}
//Function to Calculate the Sum of N Prime Numbers 
int SumofNPrimes(int n){
    //Starting with 2 ie 1st Prime Number 
    int num = 2;
    int resSum = 0;
    int cnt = 0;
    while(cnt<n){
        //Checking if num is Prime or not 
        if(isPrime(num)){
            resSum += num;
            cnt+=1;
        }
        num++;
    }
    return resSum;
}
int main(){
    int n;
    cout<<"Enter the Number 'N' to Compute Sum of N Prime Number "<<endl;
    cin>>n;
    cout<<"Sum of N Primes are : "<<SumofNPrimes(n)<<endl;
    return 0;
}