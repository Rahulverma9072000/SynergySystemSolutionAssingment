// Write a function that accepts a string as a parameter and converts the
// first letter of each word of the string in upper case.
// Example string : the quick brown fox
// Expected Output : The Quick Brown Fox

#include <iostream>
#include <string>
using namespace std;
//Function to Change First Letter to UpperCase 
void changetoUpper(string &sentence){
    //edge case 
    //if enpty string is passed 
    if(sentence[0]=='\0') return ;
    //Changing the first letter 
    if(sentence[0] >= 'a' and sentence[0] <= 'z'){
        sentence[0] = sentence[0] - 32;
    }
    //Flag to mark character to Capitalize 
    bool toCapitalize = false;
    //Traversing over the String 
    for(int i=0;i<sentence.size();i++){
        if(sentence[i]==' '){
            //this is a delimator next element we have to Change it to Capital
            toCapitalize = true;
        }else if(toCapitalize){
            //If character is in LowerCase than only Changes else no need 
            if(sentence[i] >= 'a' and sentence[i] <= 'z'){
                sentence[i] = sentence[i] - 32;
            }
            //Reverse Back the toCapitalize Flag 
            toCapitalize = false;
        }
    }
}
int main()
{
    string sentence;
    cout<<"Enter the Sentence : ";
    getline(cin, sentence);
    changetoUpper(sentence);
    cout<<"Updated Sentence : ";
    cout<<sentence<<endl;
    return 0;
}
// Time Complexity : O(n) : n is length of string 
// Space Complexity : O(1)