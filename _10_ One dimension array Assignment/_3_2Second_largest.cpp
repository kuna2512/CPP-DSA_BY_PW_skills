/*
find the second largest element in the given Array in one pass.
--------------------------
output:
Enter the size of array : 8
Enter the elements : 5 4 66 88 24 652 795 1001
The second Largest number is : 795
*/
#include<iostream>
#include<climits>
using namespace std;
int secondLargest(int a[], int x){
    int max = INT_MIN;
    int secMax = INT_MIN;

    for(int i=0; i<x; i++){
        if(a[i]>max){
            secMax=max;
            max=a[i];
        }
        else if(secMax<a[i] && max!=a[i]){
            secMax = a[i];
        }
    }
    return secMax;
}
int main(){
     int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int secondMax= secondLargest(arr,n);
    if(secondMax==INT_MIN){
        cout<<"This array does not contain any second largest number.";
    }
    else{
        cout<<"The second Largest number is : "<<secondMax<<endl;
    }
}