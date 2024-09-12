/*
Enter first Number : 5652
Enter second NUmber : 552
6204
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    int *p=&a;
    int *q=&b;
    cout<<"Enter first Number : ";
    cin>>*p;
    cout<<"Enter second NUmber : ";
    cin>>*q;
    cout<<a+b;
}