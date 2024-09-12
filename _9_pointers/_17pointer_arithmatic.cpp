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
    cout<<ptr<<endl; // 0x7be71ffdec 
    /* 1. if we using * before ptr then it print value of x not address of x.
       eg ; cout<<*ptr<<end;

     2. if we pritn ptr without using * then it will print address of x.
     eg : cout<<ptr<endl;
    */
    ptr= ptr+1;
    cout<<ptr<<endl; // 0x7be71ffdf0
    bool flag = true;
    bool* ptr2 = &flag; 
    cout<<ptr2<<endl; // 0x7be71ffdeb 
    ptr2 = ptr2 + 1;
    cout<<ptr2<<endl; // 0x7be71ffdec
}