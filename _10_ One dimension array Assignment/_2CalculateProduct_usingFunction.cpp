/*
Calculate the product of all the elements in the given array using fuction.
-----------------
output:
Enter the size of array : 6
Enter the elements : 4 5 6 7 2 6 
Product of all element is : 10080
*/
#include<bits/stdc++.h>
using namespace std;
int ProductOFarray(int a[], int x){
    int product = 1;
    for(int i=0; i<x-1; i++){
        product *=a[i];
    }
    return product;
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    // input.
    for(int i=0; i<n-1; i++){
        cin>>arr[i];
    }
    cout<<"Product of arrry Elements : "<<ProductOFarray(arr,n);
}