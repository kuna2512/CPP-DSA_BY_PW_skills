/*
scope of variable :- Limits
--------------------------------
#include<bits/stdc++.h>
using namespace std;
void fun(int x, int y){
    cout<<"Address of fun x is : "<<&x<<endl;
    cout<<"Address of fun y is : "<<&y<<endl;
}

int main(){

      int x=10; 
      int y=14;
       // here x and y scope lie in main variable.
       so it is print in main variable not in other.

      cout<<"Address of main x is : "<<&x<<endl; // here & use to print the address of x 
      cout<<"Address of main y is : "<<&y<<endl;
      fun(x,y);
}
*/


/*
output:-
_23Scope_of_variable_Or_limits.cpp: In function 'void fun()':     
_23Scope_of_variable_Or_limits.cpp:26:11: error: 'x' was not declared in this scope
   26 |     cout<<x;
      |           ^
_23Scope_of_variable_Or_limits.cpp:27:11: error: 'y' was not declared in this scope; did you mean 'yn'?
   27 |     cout<<y;
      |           ^
      |           yn
*/
#include<bits/stdc++.h>
using namespace std;
void fun(){
    cout<<x; 
    cout<<y;
}
int main(){
      int x=10;
      int y=14;
}