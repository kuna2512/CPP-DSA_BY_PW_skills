/*
WAP to print reverse of a given number.
---------------
eg :-
n=9874
r=4789
-------------------
algorithm :-
1. n = 9874, 987, 98, 9, 0
2. lastDigit =0, 4, 7, 8, 9
3. r = 0, 4, 47, 478, 4789
--------------------
steps:- while(n>0)
1. r=r*10
2. lastDigit=n%10
3. r+=lastDigit
4. n/10
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int lastDigit=0;
    int r=0;
    while(n>0){
        lastDigit=n%10;
        r=r*10;
        r+=lastDigit;
        n/=10;
    }
    cout<<r;
}