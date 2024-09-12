/*
output:-
0x1f187ff914
0x1f187ff914
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x =5;
    int* p = &x; // decelaration of pointer.
    float y = 3.9;
    float *q= &y;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<&y<<endl;
    cout<<q;
}