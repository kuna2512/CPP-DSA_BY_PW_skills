/*
Output:-
Value of x is : 8 // here it print integer value not float value because it is stored in interger data type.
Value of y is : 8.97
Value of z is : Kunal__Yadav
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
    fun(8.99);
}