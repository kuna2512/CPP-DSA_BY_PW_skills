/*
1
13
135
1357
13579
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        // first "i" odd numbers
        int a =1;
        for(int j=1; j<=i; j++){
            cout<<a;
            a+=2;
        }
        cout<<endl;
    }
}
