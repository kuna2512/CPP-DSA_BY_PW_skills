/*
Enter first Number : 56
Enter second NUmber : 21
77
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
    cout<<*p+*q;
}