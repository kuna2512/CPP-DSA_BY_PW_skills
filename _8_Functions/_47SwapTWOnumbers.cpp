/*
Enter two numbers.
Enter first value : 5
Enter secong value : 10
Before swap value of a is = 5
Before swap value of b is = 10
After swap Value of a is = 10
After swap Value of b is = 5
*/
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
    int temp =a; // temp=5
    a=b; // a=10
    b=temp; // b=5
    cout<<"After swap Value of a is = "<<a<<endl;
    cout<<"After swap Value of b is = "<<b<<endl;
}