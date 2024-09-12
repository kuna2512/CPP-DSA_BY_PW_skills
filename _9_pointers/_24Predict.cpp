#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 15;
    int *ptr = &a;
    int b = (*ptr)++; 
    /* here increse firstally value of a by post-increment ((*ptr)++;) function,
    then value of a will be increase by 1 but after that not increase value store in b.
    because we firstally store the value of a in b after that we will increase the value of a.
    */
    cout<<a<<" "<<b;
    /*
    so output will be 16 15 
    */
}