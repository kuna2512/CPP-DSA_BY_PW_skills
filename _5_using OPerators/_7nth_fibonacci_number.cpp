/*
Print the nth fibonacci number.
-------------------------------
1  1  2  3  5  8  13  21  34.....and so on.
----               -----
 2 ----        ----- 34  and so on.
    3 ----  -----21
       5 ---- 13
          8
-----------------------------------
relation:-
fino(n)=fibo(n-1)+fibo(n-2)
---------------------------------
algorithm:-
int a,b,sum;
a=1;
b=1;
sum=0;
------------------------------
steps:-
1. sum=a+b
2. a=b
3. b=sum
eg:- run the loops four times
a = 1,   
b= 1,    
sum = 0,

(1)
a = b => 1
b= sum => 2    
sum = a+b => 2

(2)
a = b => 2 
b= sum => 3  
sum = a+b = 1+2 => 3

(3)
a = b => 3 
b= sum =>5    
sum = a+b = 2+3 => 5

(4)
a = b => 5 
b= sum => 8    
sum = a+b = 3+5 => 8 
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int a = 1;
    int b= 1;
    int sum =0;
    for(int i=1; i<=n; i++){
        sum = a+b;
        a=b;
        b=sum;
    }
    cout<<sum;
}
