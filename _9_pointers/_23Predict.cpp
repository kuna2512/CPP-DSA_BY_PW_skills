#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 15;
    int *ptr = &a;
    int b = ++(*ptr); 
    /* here increse firstally value of a by per-increment function,
    and after that increase value store in b.
    */
    cout<<a<<" "<<b;
    /*
    so output will be 16 16 
    */
}