/*
Enter n : 5
Enter r : 3
Output of ncr : 10
Output of npr : 60
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
int combination(int n, int r){
    int ncr=fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int permutation(int n, int r){
    int npr = fact(n)/fact(n-r);
    return npr;
}
int main(){
    int n,r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;
    int ncr = combination(n,r);
    int npr = permutation(n,r);
    cout<<"Output of ncr : "<<ncr<<endl;
    cout<<"Output of npr : "<<npr;
}
// 1:03 hours