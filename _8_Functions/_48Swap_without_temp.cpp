#include<bits/stdc++.h>
using namespace std; 
int main(){
    int a,b;
    cout<<"Enter two numbers."<<endl;
    cout<<"Enter first value : ";
    cin>>a; // 5
    cout<<"Enter secong value : ";
    cin>>b; // 10
    cout<<"Before swap value of a is = "<<a<<endl;
    cout<<"Before swap value of b is = "<<b<<endl;
    a = a + b; // a = 5 + 10 = 15
    b = a - b; // b = 15 - 10 = 5
    a = a - b; // a = 15 - 5 = 10
    cout<<"After swap Value of a is = "<<a<<endl;
    cout<<"After swap Value of b is = "<<b<<endl;
}