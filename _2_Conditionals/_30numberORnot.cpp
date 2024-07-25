// write a program to check whether a given character is a vowel or a consonant.
#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter any character :";
    cin>>ch;
    int ascii = (int)ch;
    if(ascii>=48 && ascii<=57){
        cout<<"Character is number";
    }
    else{
        cout<<"Character is not a number";
    }
    return 0;
}
