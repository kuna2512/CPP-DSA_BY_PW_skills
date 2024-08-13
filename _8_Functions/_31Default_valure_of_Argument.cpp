/*
Output:-
Value of x is : 100
Value of y is : 10
*/

#include<bits/stdc++.h>
using namespace std;
void fun(int x = 30, int y=400){ 
/* whose argument define in void fun() variable that is default.
in this situation if we calling void fun in int main() varible then
output generate of main() variable value.
*/
    cout<<"Value of x is : "<<x<<endl<<"Value of y is : "<<y; 
}
int main(){
    int a=100;
    int b=10;
    fun(a,b);
}