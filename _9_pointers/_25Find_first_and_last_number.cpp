/*
Que. Write a fuction to find out the first and
last digit of a number without returning anything.
-------------------------------------------------
concenpt :- n=12345
1. last digit = n%10;
2. start a loop and find first value of n
while(n>9){
    n=n/10;
}
-------------------------------------------------
output:-
Enter the value of N : 654352
firstDigit is : 6
lastDigit is : 2
*/
#include<bits/stdc++.h>
using namespace std;
void find(int x, int *pointer1, int *pointer2){
    *pointer2 = x%10; // lastDigit.
    while(x>9){
        x/=10; // firstDigit.
    }
    *pointer1=x;
    return ;
}
int main(){
    int n;
    cout<<"Enter the value of N : ";
    cin>>n;
    int firstDigit, lastDigit;
    int *ptr1=&firstDigit, *ptr2=&lastDigit;
    /*
    or
    int* ptr1 = &firstDigit;
    int* ptr2 = &lastDigit; */
    find(n, ptr1, ptr2);
    /* Here we sending the address of firstDigit and lastDigit and value of n
    by using of find(n, ptr1, ptr2) */
    cout<<"firstDigit is : "<<firstDigit<<endl;
    cout<<"lastDigit is : "<<lastDigit;
}