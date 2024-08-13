/*
swap does'nt work in function.
---------------------------------------
Enter two numbers.
Enter first value : 10
Enter secong value : 5
Before swap value of a is = 10
Before swap value of b is = 5
After swap Value of a is = 10
After swap Value of b is = 5
*/
#include<bits/stdc++.h>
using namespace std; 
int swap(int x, int y){
    int temp =x; // temp=5
    x=y; // x=10
    y=temp; // y=5
    return 0;
}
int main(){
    int a,b;
    cout<<"Enter two numbers."<<endl;
    cout<<"Enter first value : ";
    cin>>a; // 5
    cout<<"Enter secong value : ";
    cin>>b; // 10
    cout<<"Before swap value of a is = "<<a<<endl;
    cout<<"Before swap value of b is = "<<b<<endl;
    swap(a,b);
    cout<<"After swap Value of a is = "<<a<<endl;
    cout<<"After swap Value of b is = "<<b<<endl;
}