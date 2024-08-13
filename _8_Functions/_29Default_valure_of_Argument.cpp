/*
Output:-
_29Default_valure_of_Argument.cpp: In function 'int main()':      
_29Default_valure_of_Argument.cpp:12:9: error: too few arguments to function 'void fun(int, int)'
   12 |     fun(); // if we not define any thing in fun call then it will give output error.
      |         ^
_29Default_valure_of_Argument.cpp:8:6: note: declared here        
    8 | void fun(int x, int y){
      |      ^~~
*/

#include<bits/stdc++.h>
using namespace std;
void fun(int x, int y){ 
    cout<<"Value of x is : "<<x<<endl<<"Value of y is : "<<y; 
}
int main(){
    fun(); // if we not define argumrnts in fun call then it will give output error. 
}