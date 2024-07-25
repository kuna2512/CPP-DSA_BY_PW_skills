// Take positive integer input and tell if it is divisible by 5 and 3.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number. : ";
    cin>>n;
    if(n%5==0 && n%3==0){
        cout<<"Divisible by 5 and 3";
    }
    else{
        cout<<"Not divisible";
    }
    return 0;
}