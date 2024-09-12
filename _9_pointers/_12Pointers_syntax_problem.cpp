/*
pointer syntax :-
int *p = &a;
int *q = &b;
int* p = &x;
int* p2 = &y;
int *p1=&a, *p2=&b;

int* p1=&x, p2=&y; // we can not decelare pointer like this. 
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=10, b=20;
    int *p1=&a, *p2=&b;
    cout<<*p1+*p2;
}
