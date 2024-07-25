// Take 3 positive integer input and print the greatect of them.
#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter 1st number : ";
    cin>>x;
    cout<<"Enter 2nd number : ";
    cin>>y;
    cout<<"Enter 3rd number : ";
    cin>>z;
    if(x>y && x>z){
        cout<<"Greatest number is : "<<x;
    }
    if(y>x && y>z){
        cout<<"Greatest number is : "<<y;
    }
    if(z>x && z>y){
        cout<<"Greatest number is : "<<z;
    }
   return 0;
}