/*
Output:-

_33Default_valure_of_Argument.cpp:9:26: error: default argument missing for parameter 2 of 'void fun(int, int, int)'
    9 | void fun(int x = 30, int y, int z){
      |                      ~~~~^
_33Default_valure_of_Argument.cpp:9:14: note: ...following parameter 1 which has a default argument
    9 | void fun(int x = 30, int y, int z){
      |          ~~~~^~~~~~
_33Default_valure_of_Argument.cpp:9:33: error: default argument missing for parameter 3 of 'void fun(int, int, int)'
    9 | void fun(int x = 30, int y, int z){
      |                             ~~~~^
*/

#include<bits/stdc++.h>
using namespace std;
void fun(int x = 30, int y, int z){ 
/* if we not define value in all argument then it is give output error.
so because of this reason we need to initialize value in all arguments
or otherwise not initialize in any one.
*/
    cout<<"Value of x is : "<<x<<endl<<"Value of y is : "<<y<<"Value of z is : "<<z; 
}
int main(){
    int a=100;
    int b=10;
    int c=120;
    fun(a,b,c);
}