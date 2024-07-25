/*
1. take integer as input and print half of the number.
*/
#include<iostream>
using namespace std;
int main(){
    int ch;
    cout<<"Enter integer value : ";
    cin>>ch;
    float x = (float)ch/2;
    cout<<x<<endl;

// 2. take float input and print the fractional part of real number.
    float f ;
    cout<<"Enter float value : ";
    cin>>f;
    float fl = f-(int)f;
    cout<<"Fractional part of "<<f<<" is the : "<<fl;
}