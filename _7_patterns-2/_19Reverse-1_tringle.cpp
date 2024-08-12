/*
No. of rows : 5
****
***
**
*

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No. of rows : ";
    cin>>n;
    int m= n-1; // new lines.
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m+1-i; j++){ // this condition helps to print 1 line row less.
            cout<<"*";
        }
        cout<<endl;
    }
}