/*
1 . int *p, q;
(a) p is a pointer and q is an integer.
(b) p and q both are pointers.
(c) p and q both are integers.
(d) Syntsx is incorrect.

ans : (a)
*/
#include<iostream>
using namespace std;
int main(){
    int a = 10, b = 20;
    int *ptr = &a;
    b = *ptr + 1;
    ptr = &b;
    cout<<*ptr<<" "<<a<<" "<<b;
}