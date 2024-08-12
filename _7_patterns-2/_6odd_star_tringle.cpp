/*

*
***
*****
*******
*********
***********
*************
***************
*****************
*******************

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No. of rows : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        int a = 2*i-1;
        for(int j=1; j<=a; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}