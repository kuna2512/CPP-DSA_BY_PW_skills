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
    (*ptr)++; // (*ptr) here under bricket *ptr calculate value of x and increase value of x by 1.
    /* 
    if we increase ptr value by +1 and add * before ptr then it
    will be increase the value of x and print x = 9 + 1 => 10.
    */
   // *ptr ++; // it is not working because here it will not calculate the vlaue of x. so we will increse value by above method. (*ptr)++;
    cout<<*ptr<<endl; // 10
    
}