/*
Address of a variable

Understanding address-of operator
*/
#include<iostream>
using namespace std;
int main(){
    int a =19;
    int b=30;
    cout<<&a<<endl; // 0xeeda5ff9cc
    cout<<&b<<endl; // 0xeeda5ff9c8
}