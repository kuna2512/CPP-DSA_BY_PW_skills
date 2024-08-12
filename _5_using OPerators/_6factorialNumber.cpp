/*
print the factorial of a given number 'n';
------------------------------
5! = 5*4*3*2*1
n! = n*n-1*n-2*.....3*2*1
1! = 1
0! = 1
------------------------------
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int product = 1;
    for(int i=1; i<=n; i++){
        product *=i; // product = procuct*i;
    }
    cout<<product;
}