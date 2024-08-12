/*
Two numbers are entered through the keywrd. Write a program to 
find the value of one number raised to the power of another.
-------------------------------

*/
#include<iostream>
using namespace std;
int main(){
    int a,b,power;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    power=1;
    for(int i=1; i<=b; i++){
        power*=a;
    }
    cout<<power;

}