/*
Pointer Arithmetic

Increment and Decrement
---------------------------------
hexaDecimal No. :-
0 1 2 3 4 5 6 7 8  9  a  b  c  d  e  f
| | | | | | | | |  |  |  |  |  |  |  |
1 2 3 4 5 6 7 8 9 10  11 12 13 14 15 16
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x= 9;
    int* ptr = &x;
    cout<<*ptr<<endl; // 9
    /*
    1. here it is print value of x, because we use * before ptr.
       eg : cout<<*ptr<<endl;
    */
    ptr = ptr + 1; 
    /* here we increasing the value of ptr.
    suppose ptr having address of x(ac600)and in that address increase
    by 9 becouse ptr = ptr +1 means add the vlaue of x in the ptr so now value
    address will be ac600+9 => ac609 and after that it will search address in memory
    and it will be not find so it print diffrent value.
    */
    cout<<*ptr<<endl; // 2009069768
    
}