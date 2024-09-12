/*
playing with pointers

Dereference operator :- Dereferende operator is basically a * (star) operator.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=140;
    int *p = &x;
    x = 50; // here update value of x  now print 50.
    cout<<*p; 
    /*
    if we print int *p=&x then int x address stores in p and if we write
    cout<<*p; then which address store in p variable, their value will be print
    means here 10 will we print according to procedure if we change value
    of x then print changed value. 
    */
}