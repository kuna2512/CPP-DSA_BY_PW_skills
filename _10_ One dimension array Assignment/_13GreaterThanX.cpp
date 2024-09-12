/*
Count the number of elements strictly greater than x in the given array.
------------------
output : 
Enter the size of n : 6 
4 5 6 3 2 1
Enter the value of x : 2
Number of elements greater than x are : 4
*/
#include<bits/stdc++.h>
using namespace std;
int countGreaterThanX(int a[], int n, int x){
    int count = 0;

    for(int i=0; i<n; i++){
        if(a[i]>x){
            count++;
        }
    }
    return count;
}
int main() {
    int n;
    cout<<"Enter the size of n : ";
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int x;
    cout<<"Enter the value of x : ";
    cin>>x;
    cout<<"Number of elements greater than x are : "<<countGreaterThanX(a,n,x);
}