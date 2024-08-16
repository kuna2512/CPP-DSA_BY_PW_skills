/*
Ques. Write a function to print square of first n natural numbers,
taking n as argument to find fucntion.
---------------------------------------------
Output:-
Enter value of x : 5
1
4
9
16
25
*/
#include<bits/stdc++.h>
using namespace std;
int square (int n){
    return n*n;
}
int main(){
    int x;
    cout<<"Enter value of x : ";
    cin>>x;
    // for(int i=1; i<=n; i++){
        // cout<<i*i<<endl;
    // }
    for(int i=1;  i<=x; i++){
        cout<<square(i)<<endl;
    }
}