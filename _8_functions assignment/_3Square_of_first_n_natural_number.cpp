/*
Ques. Write a function to print square of first n natural numbers,
taking n as argument to find fucntion.
---------------------------------------------
Output:-
Enter the value of x : 10
1 4 9 16 25 36 49 64 81 100 
*/
#include<bits/stdc++.h>
using namespace std;
void sqr(int n){
    for(int i=1; i<=n; i++){
        cout<<i*i<<" ";
    }
    return ;
}
int main(){
    int x;
    cout<<"Enter the value of x : ";
    cin>>x;
    sqr(x);
}