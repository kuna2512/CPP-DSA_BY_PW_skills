/*
Two numbers are entered through the keywrd. Write a program to 
find the value of one number raised to the power of another.
-------------------------------
add a condition in question if exponant is negative.
*/
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the base : ";
    cin>>a;
    cout<<"Enter the exponent : ";
    cin>>b;
    float power=1;
    bool flage=true; // true means power positive.
    if(b<0){
        flage=false; // false means negative power.
        b=-b;
    }
    for(int i=1; i<=b; i++){
        power= power*a;
    }
    if(flage==false){ // for exponent (b) is negative.
        power=1/power;
        b=-b;
    }
    if(a==0 && b==0){ // for a & b both are zero then in that condition.
        cout<<"Not defined";
    }
    else{
    cout<<a<<" raised to the power "<<b<<" is "<<power;
    }
}