/*
Formal parameters and Actual Parameters.
---------------------------------------
#include<bits/stdc++.h>
using namespace std;
void fun(int x, int y){ // here it is receiving fun(x,y) that is known as formar parameters.

    cout<<"Address of fun x is : "<<&x<<endl;
    cout<<"Address of fun y is : "<<&y<<endl;
}

int main(){
      int x=10;
      int y=14;
      cout<<"Address of main x is : "<<&x<<endl; // here & use to print the address of x 
      cout<<"Address of main y is : "<<&y<<endl;
      
      fun(x,y); // here is known as actual parameters
}
*/