/*
a
b b
c c c
d d d d
e e e e e
f f f f f f
*/
#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter no. of lines : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<(char)(i+96)<<" ";

        }
        cout<<endl;
    }
}