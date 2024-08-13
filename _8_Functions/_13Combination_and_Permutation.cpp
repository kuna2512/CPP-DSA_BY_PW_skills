/*
Enter n : 7
Enter r : 2
output : 21
------------------------------
Combination and Permutation
Combination :- (sup n)C(sub r) = ni/ri(n-r)!
                      |
                    int combination(int n, int r0){
                    
                    }

Permutation :- (sup n)p(sub r) = ni/(n-r)
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;
    int nfact=1;
    for(int i=2; i<=n; i++){
        nfact *= i;
    }
    int rfact = 1;
    for(int i=2; i<=r; i++){
        rfact *=i;
    }
    int nrfact =1; // nrfact -> (n-r)!
    for(int i=2; i<=n-r; i++){
        nrfact*= i;
    }
    int ncr = nfact/(rfact*nrfact);
    cout<<"output : "<<ncr;
}