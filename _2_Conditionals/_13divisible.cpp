// Take positive integer input and tell if it is divisible by 5 or 3.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no. : ";
    cin>>n;
    if(n%5==0 || n%3==0){
        cout<<"The number is divisible by 5 or 3";
    }
    else{
        cout<<"The number is not divisible by 5 and it is not divisible by 3";
    }
}