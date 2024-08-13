#include<bits/stdc++.h>
using namespace std;
int a = 9; // globle varible :- it is access from any where 
void fun(){
    cout<<"Output of fun variable : "<<a<<endl;
}
int main(){
    int n= 5; // local variable :- it is local variable that is access only from int main() funtion.
    cout<<"Output of main variable : "<<a+7<<endl;
    fun(); //  yaha function call karane ke baad hi value void fun() me value pahuchi hain.
}
// 1:40