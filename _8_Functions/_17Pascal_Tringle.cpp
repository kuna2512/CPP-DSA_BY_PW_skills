/*
Enter the value of n : 5
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
-------------------------------
pascal tringle :- use of ncr heavly.

   0 1 2  3  4 5
0  1
1  1 1
2  1 2 1
3  1 3 3  1 
4  1 4 6  4  1
5  1 5 10 10 5 1
 
 or
0             1
1          1     1
2        1    2    1
3      1   3    3    1 
4    1   4    6    4   1
5  1   5   10   10   5   1

or

0  0c0
1  1c0 1c1
2  2c0 2c1 2c2  
3  3c0 3c1 3c2 3c3
4  4c0 4c1 4c2 4c3 4c4
5  5c0 5c1 5c2 5c3 5c4 5c5

0! = 1 
nc0 = 1
nc1 = n

calculating 6 = (4,2)
(sup 4)c(sub 2) = 4!/2!(4-2)! =>4!/2!*2! => 4*3*2*1/2*1*2*1 => 6 ans

calculating 10 = (5,3)
(sup 5)c(sub 3) = 5!/3!*2! => 5*4*3*2*1/3*2*1*2*1 => 10 ans

*/
#include<bits/stdc++.h>
using namespace std;
int fact(int x){
    int f = 1; 
    for(int i=2; i<=x; i++){
        f *= i;
    }
    return f;
}
int combination(int n, int r){
    int ncr=fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" "; // icj
        }
        cout<<endl;
    }
}