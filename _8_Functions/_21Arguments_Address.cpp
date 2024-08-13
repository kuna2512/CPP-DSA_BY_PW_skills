/*
Arguments_Address :-

Address of main x is : 0x694a3ffc6c
Address of main y is : 0x694a3ffc68
Address of fun x is : 0x694a3ffc40
Address of fun y is : 0x694a3ffc48
*/
#include<bits/stdc++.h>
using namespace std;
void fun(int x, int y){
    cout<<"Address of fun x is : "<<&x<<endl;
    cout<<"Address of fun y is : "<<&y<<endl;
}

int main(){
      int x=10;
      int y=14;
      cout<<"Address of main x is : "<<&x<<endl; // here & use to print the address of x 
      cout<<"Address of main y is : "<<&y<<endl;
      fun(x,y);
}