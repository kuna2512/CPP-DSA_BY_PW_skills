/*

What if we want to make a same pattern for number?
1. The importance of functions :- in project we always tend to use same/similer piece of
code in the project multiple times, but not always we are looking for continuous repetation.

2. syntax for functions :- Wrapping the logic under a name.
    function_name{
        // function body
    }

or  function_name(int a, int b, int c){
        // fuction body
    }

3. The need for a return type:- understanding with example
    <void/int/float> function_name(int a, int b, int c){
        // function body
    }
    // here <void/int/flaot> :- these all known as return type
    // (int a, int b, int c) :- these all knwon as arguments.

    eg:- 1. int abc(){}
         2. void fun(){}
         3. bool fun(){}
         4. return_type abc(){}
         5. char ch(){}
----------------------------------------
1. int main(){} function always work first as compare to other fuction
either that is written before of main funtion.
         
*/
#include<bits/stdc++.h>
using namespace std;
void greeting (){
    cout<<"Hello Everyone !.."<<endl;
    cout<<"Good Morning"<<endl;
}
int main(){
    greeting(); // fuction calling
    greeting();
    greeting();
    greeting();
    greeting();
    greeting();
}