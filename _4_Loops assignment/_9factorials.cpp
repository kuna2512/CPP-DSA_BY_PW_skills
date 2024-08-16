/*
print the nth factorial of first 'n' numbers.
--------------------------------------
ni = n*(n-1)*(n-2)*-----1
eg:-
4i = 4*3*2*1=24
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int product = 1; 
    for(int i=1; i<=n; i++){
        product = product*i;
    }
    cout<<product;
}