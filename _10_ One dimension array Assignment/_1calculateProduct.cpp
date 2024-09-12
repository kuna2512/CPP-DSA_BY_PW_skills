/*
Calculate the product of all the elements in the given array.
-----------------
output:
Enter the size of array : 6
Enter the elements : 4 5 6 7 2 6 
Product of all element is : 10080
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    // input.
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    // product.
    int product = 1;
    for(int i=1; i<=n; i++){
        product *= arr[i]; 
    }
    cout<<"Product of all element is : "<<product;
}