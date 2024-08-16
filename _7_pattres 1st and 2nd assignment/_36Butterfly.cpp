/*
Enter no. of lines : 5
*               *
* *           * *
* * *       * * *
* * * *   * * * *
* * * * * * * * *
* * * * * * * * *
* * * *   * * * *
* * *       * * *
* *           * *
*               *
----------------------------
contcept:-
for Uppwer half :-
1. for nth row => 2*(n-1)-1;
2. for n+1th row => 2*(n-1);

for Lower half:-
1. for left star => n-i;
2. for space => 2*i-1;
2. for right stars => n-i;

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines : ";
    cin>>n;
    // Upper half == n-1 upper rows
    for(int i=1; i<=n-1; i++){
        //srats
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        // space
        for(int j=1; j<=2*(n-i)-1; j++){
            cout<<"  ";
        }
        // stars
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    // upper without space stars.
    for(int i=1; i<=2*n-1; i++){
        cout<<"* ";
    }
    cout<<endl;
    // lower without space stars.
    for(int i=1; i<=2*n-1; i++){
        cout<<"* ";
    }
    cout<<endl;
    // lower half == n-1 lower rows
    for(int i=1; i<=n-1; i++){
        // stars
        for(int j=1; j<=n-i; j++){
            cout<<"* ";
        }
        //space
        for(int j=1; j<=2*i-1; j++){
            cout<<"  ";
        }
        //stars
        for(int j=1; j<=n-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}