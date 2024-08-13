/*
Output:-
Value of x is : 100
Value of y is : 10
Value of z is : 120
*/

#include<bits/stdc++.h>
using namespace std;
void fun(int x = 30, int y=23, int z=34){ 
/* if we not define value in all argument then it is give output error.
so because of this reason we need to initialize value in all arguments
or otherwise not initialize in any one.
*/
    cout<<"Value of x is : "<<x<<endl<<"Value of y is : "<<y<<endl<<"Value of z is : "<<z; 
}
int main(){
    int a=100;
    int b=10;
    int c=120;
    fun(a,b,c);
}