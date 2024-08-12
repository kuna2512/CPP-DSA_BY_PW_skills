/*
print the sum of this series: 1-2+3-4+5-6....upto 'n'.
---------------------------
condition:-
1. if n is even => (1+2)+(3-4)+(5-6)+(7+8)....((n-1)n)
so it comes n/2 times.
then sum=-n/2
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int sum = 0;
    if(n%2==0){
        sum = -n/2;
        cout<<sum;// it is eligible for even no.
    }
    else{
        sum= -n/2+n;
        cout<<sum;// it is eligible for odd no.
    }
}
