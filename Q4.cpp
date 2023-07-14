// Write a program to sort the characters of a string Alphabetically.
#include<iostream>
using namespace std;
#include<string>
void sortString(string &str){
    //Assuming ASCII CharacterSet : 256 Characters 
    //so we can use hashmap to store the value 
    int data[256] = {0};
    //Traversing over the string and count all character frequency 
    for(int i=0;i<str.size();i++){
        data[str[i]]+=1;
    }
    //pointer to form the result and overwrite the string str
    int idx = 0;
    //Now form the Result 
    for(int i=0;i<256;i++){
        //if data[i] is +ve it means it have some occurence 
        if(data[i]){
            //iterating till it's frquency becomes 0 
            while(data[i]){
                str[idx++] = i;
                data[i] = data[i]-1;
            }
        }
    }
}
int main(){
    string str;
    cout<<"Enter the String : ";
    cin>>str;
    sortString(str);
    cout<<"Sorted String : "<<str<<endl;
    return 0;
}