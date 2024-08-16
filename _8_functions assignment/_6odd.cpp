/*
Ques. Given two numbers a and b, write a function to print
all odd numbers between them.
-----------------------------
Output:-
Enter the value of a : 150
Enter the value of b : 100
101 103 105 107 109 111 113 115 117 119 121 123 125 127 129 131 133 135 137 139 141 143 145 147 149 
*/
#include<bits/stdc++.h>
using namespace std;
void odd(int x, int y){
    if(x>y){
        swap(x,y);
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