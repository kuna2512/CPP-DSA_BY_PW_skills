/*
Output:-
Value of x is : 100
Value of y is : 10
Value of z is : Priyanshu__Yadav
*/

#include<bits/stdc++.h>
using namespace std;
void fun(int x = 30, float y=8.97, string z="Kunal__Yadav"){ 
    cout<<"Value of x is : "<<x<<endl<<"Value of y is : "<<y<<endl<<"Value of z is : "<<z; 
}
int main(){
    int a=100;
    float b=10.0;
    string c="Priyanshu__Yadav";
    fun(a,b,c); // in this condition if arguments of void fun() diffrect-2 data types then we need to initialize value in int main() faunction accorging to void() function.
}