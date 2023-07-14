//Write a Program to calculate the product of digits of any number 
#include <iostream>
using namespace std;

int main() {
    int num,res = 1;
    cout << "Enter the Number : ";
    cin >> num;
    //there will be 2 cases : Positive Number and Negative Number 
    //For Negative Number we have to remove the negative sign to find the Product 
    if(num<0){
        num *=-1;
    }
    // Calculate the product of the digits
    int digit;
    while (num != 0) {
        // Extracting the last digit of the number
        digit = num % 10;
        // Multiply the digit with the product
        res *= digit;
        // Remove the last digit from the number
        num /= 10;
    }
    // Print the product of the digits
    cout << "Product of the digits: " << res << endl;
    return 0;
}
