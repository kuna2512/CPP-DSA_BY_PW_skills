/*
Output :-
Enter two values.
Enter 1st value : 24
Enter 2nd value : 60
Greatest Common Divisor of two no. is : 12
*/
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    int hcf = 1;
    // 24   60
    // i = 24, 23, 21, 20,....1
    for(int i=min(a,b); i>=1; i--){
        if(a%i==0 && b%i==0){ // i is a common factor
            hcf=i;
            break;
        }
    }
    return hcf;
}
int main(){
    int n,m;
    cout<<"Enter two values."<<endl;
    cout<<"Enter 1st value : ";
    cin>>n;
    cout<<"Enter 2nd value : ";
    cin>>m;
    cout<<"Greatest Common Divisor of two no. is : "<<gcd(n,m);
}