// Write a program to check whether a charactor is an alphabet or not.
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;
    // a to z -> 97 to 122
    // A to Z -> 65 to 90
    int ASCII = (int)ch;
    if(ASCII>=97 && ASCII<=122){
        cout<<"The character is lowercase alphabet";
    }
    if(ASCII>=65 && ASCII<=90){
        cout<<"The character is Uppercase alphabet";
    }
    return 0;
}