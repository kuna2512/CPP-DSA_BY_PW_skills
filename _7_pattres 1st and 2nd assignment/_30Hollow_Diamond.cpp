/*

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        //upper left stars.
        cout<<"* ";
        // Upper middle spaces
        for(int k=1; k<=2*i-1; k++){
            cout<<"  ";
        }
        // upper right stars.
        cout<<"* ";
        cout<<endl;
    }
    for(int i=1; i<n-1; i++){
        // space 
        for(int j=1; j<=i; j++){
            cout<<"  ";
        }
        // Lower left spaces.
        cout<<"*";
        // lower middle spaces.
        int m=2*(n-i);
        for(int k=1; k<m; k++){
            cout<<"  ";
        }
        // Lower right stars.
        cout<<"* ";
        cout<<endl;
    }
    for(int i=1; i<=n-1; i++){
        cout<<"  ";
    }
    cout<<" * ";
}
// not complete.