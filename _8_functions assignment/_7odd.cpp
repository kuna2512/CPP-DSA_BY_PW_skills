/*
Ques. Given two numbers a and b, write a function to print
all odd numbers between them.
-----------------------------
Output:-
Enter the value of a : 6
Enter the value of b : 20
7 9 11 13 15 17 19
*/
#include<bits/stdc++.h>
using namespace std;
void odd(int x, int y){
    if(x>y){
        odd(x,y);
    }
    for(int i=x; i<=y; i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
    return ;
}
int main(){
    int a,b;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    odd(a,b);
}