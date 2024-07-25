// Take float negative input and print the fraction part of real number.
#include<iostream>
using namespace std;
int main(){
    // float x ;
    // cout<<"Enter any float no. : ";
    // cin>>x; // x= -1.3
    // int y = (int)x; //  y= -1
    // if(y<0) y=y-1; 
    // float z = (float)y; // z= -2
    // x = x - z; // -1.3 - 2.0
    // cout<<x;
    float x;
    cout<<"Enter the negative float value : ";
    cin>>x;
    int y = (int)x;
    if(y<0) y=y-1;
    float z = (float)y;
    x = x-z;
    cout<<x;
}