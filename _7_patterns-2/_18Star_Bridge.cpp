/*
No. of rows : 5
*********
**** ****
***   ***
**     **
*       *
-------------------------------
concept:- 
******* it print totally 
***-***    ***   -      ***
**---** => **  + ---  + **
*-----**   *     -----  *
---------------
m = 3
j<=m+1-i

1  *** -> j=m+1-i -> j=3+1-1 =>3
2  **  -> j=m+1-i -> j=3+1-2 =>2
3  *   -> j=m+1-i -> j=3+1-3 =>1
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No. of rows : ";
    cin>>n;
    // 2n-1 stars
    for(int h=1; h<=2*n-1; h++){
        cout<<"*";
    }
    cout<<endl;
    int nsp = 1;
    int m= n-1; // new lines.
    for(int i=1; i<=m; i++){
        // stars
        for(int j=1; j<=m+1-i; j++){ // this condition helps to print 1 line row less.
            cout<<"*";
        }
        // space
        for(int k=1; k<=nsp; k++){
            cout<<" ";
        }
        nsp+=2;
        // stars
        for(int j=1; j<=m+1-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}