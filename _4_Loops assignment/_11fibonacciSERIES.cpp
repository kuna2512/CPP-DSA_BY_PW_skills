/*
print first 'n' fibonacci numbers.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int a,b;
    a=0;
    b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=3; i<=n; i++){
        int c= a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
}