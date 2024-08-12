/*
wap to print sum of digits of a given number.
---------------------
steps :-
1. lastDigit
2. sum+=lastDigit
3. n/=10
---------------------
eg:-
n = 9878
sum = 9+8+7+4
lastDigit= 9874%10 =4
--------------------
algorithm :- 
n = 9874, 987, 98, 9, 0
lastDigit = 4, 7, 8, 9 
sum = 0+4, 0+4+7, 0+4+7+8, 0+4+7+8+9 = 28
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int lastDigit = 0;
    int sum = 0;
    while(n>0){
        lastDigit=n%10;
        sum += lastDigit;
        n/=10;
    }
    cout<<sum;
}
