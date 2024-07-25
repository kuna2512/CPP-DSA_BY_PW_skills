// Take positive integer input and tell if it is even or odd.
#include<iostream>
using namespace std;
int main(){
    int x ;
    cout<<"Enter positive integer : ";
    cin>>x;
    if(x%2==0){
        cout<<"Entered number is Even";
    } 
    else{
        cout<<"Entered number is odd";
    }
}