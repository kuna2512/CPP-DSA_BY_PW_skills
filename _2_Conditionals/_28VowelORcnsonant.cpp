// write a program to check whether a given character is a vowel or a consonant.
#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter any character :";
    cin>>ch;
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        cout<<"Character is Vowel";
    }
    else{
        cout<<"Character is consonant";
    }
    return 0;
}
