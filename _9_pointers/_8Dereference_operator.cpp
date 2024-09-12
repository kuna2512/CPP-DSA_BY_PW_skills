/*
playing with pointers

Dereference operator :- Dereferende operator is basically a * (star) operator.
*/
/*
output:-
Value of x is : 140
After updating value throught pointer, then value of x is : 70   
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=140;
    int *p = &x;
    cout<<"Value of x is : "<<x<<endl; // here we simply print value of x
    *p=70; // through this we update value of x.
    cout<<"After updating value throught pointer, then value of x is : "<<*p; 
    /*
    if we print int *p=&x then int x address stores in p and if we write
    cout<<*p; then which address store in p variable, their value will be print
    means here 10 will we print according to procedure if we change value
    of x then print changed value. 
    */
}
// 33 minutes.