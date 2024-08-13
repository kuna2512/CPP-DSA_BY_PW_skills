/*
Enter n : 5
Enter r : 2
output : 10
------------------------------
Combination and Permutation
Combination :- (sup n)C(sub r) = ni/ri(n-r)!
                      |
                    int combination(int n, int r0){
                    
                    }

Permutation :- (sup n)p(sub r) = ni/(n-r)
-------------------------------
code execution :-
n = 5
r = 2
1. nfacr = fact(n) -> fact(5) 
   x = 0 , after fact(5) and x also become 5 
   and f = has stored f=5i=>120.
   return f => 120;
2. same procedure for rfact = fact(r) and so on.
3. after that nrfact = fact(n-r) -> fact(5-2) => fact(3)
    x = 0 , after fact(3) and x also become 3 
   and f = has stored f=3i=>6.
   return f => 6;
4. int ncr = nfact/(rfact*nrfact) => 120/2*6 => 10 ans
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
int main(){
    int n,r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;
   int nfact = fact(n);
   int rfact = fact(r);
   int nrfact = fact(n-r);
    int ncr = nfact/(rfact*nrfact);
    cout<<"output : "<<ncr;
}