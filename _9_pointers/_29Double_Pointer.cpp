/*
Double pointer :- it is used to store address of a single pointer.
----------------------------------
Print value of x : 
20
20
20
20

Print address of x :
0x1766bff894
0x1766bff894
0x1766bff894
0x1766bff894

Pirnt address of ptr :
0x1766bff888
0x1766bff888
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x = 20;
    int* ptr = &x;
    int** p = &ptr;
    int*** q = &p;
    cout<<"Print value of x : "<<endl;
    cout<<x<<endl; // print value of x. 
    cout<<*ptr<<endl; // print value of x.
    cout<<**p<<endl; // print value of x.
    cout<<***q<<endl; // print value of x.
    cout<<endl;
    cout<<"Print address of x : "<<endl;
    cout<<ptr<<endl; // print address of x.
    cout<<*p<<endl; // print address of x.
    cout<<&x<<endl; // print address of x.
    cout<<**q<<endl; // print address of x.
    cout<<endl;
    cout<<"Pirnt address of ptr :"<<endl;
    cout<<*q<<endl; // print address of ptr.
    cout<<p<<endl; // print address of ptr.
} 