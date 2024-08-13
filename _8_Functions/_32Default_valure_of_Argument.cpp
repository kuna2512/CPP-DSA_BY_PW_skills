/*
Output:-
Value of x is : 100
Value of y is : 400
*/

#include<bits/stdc++.h>
using namespace std;
void fun(int x = 30, int y=400){ 
/* whose argument define in void fun() variable that is default.
in this situation if we calling void fun in int main() varible then
output generate of main() variable value. but if we calling one only 
one value from main variable then one value print of int main() funtion 
& another one print from void fun() function.
*/
    cout<<"Value of x is : "<<x<<endl<<"Value of y is : "<<y; 
}
int main(){
    int a=100;
    int b=10;
    fun(a);
}