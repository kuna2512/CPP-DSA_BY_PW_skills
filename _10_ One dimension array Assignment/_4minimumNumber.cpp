/*
Find the minimum value out of all the elements in the array.
----------------
output : 
Enter the size of array : 4
Enter the elements : 4 5 9 8
4
*/
#include<iostream>
#include<climits>
using namespace std;
int minimum(int a[], int x){
    int min = INT_MAX;
    for(int i=0; i<x; i++){
        if(a[i]<min){ // here array should be small as compare to min.
            min=a[i];
        }
    }
    return min;
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
    cout<<minimum(arr,n);
}