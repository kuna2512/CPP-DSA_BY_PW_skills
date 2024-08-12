/*
WAP to check if a number is prime of not.
Defination :- it is no any factor other than 1 & the number itself.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    bool flag = true ; // true means prime.
    for (int i=2; i<=n-1; i++){
        if(n%i==0){ // i is a factor of n
            flag = false; // false means conposite.
            break;
        }
    }
    if(n==1) cout<<"1 is neither prime nor composite";
    else if (flag==true) cout<<n<<" is prime";
    else cout<<n<<" is composite";
}
