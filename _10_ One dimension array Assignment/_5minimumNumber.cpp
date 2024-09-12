/*
Find the minimum value out of all the elements in the array.
----------
output : 
Enter size of array : 7
Enter array Elements : 4 5 6 88 22 99 1
The minimum number is : 1
*/
#include<bits/stdc++.h>
#include<climits>
using namespace std;
int minimum(int a, int b){
    if(a<b){
        return a;
    }
    return b;
}
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    // input
    cout<<"Enter array Elements : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // minimum
    int mini = INT_MAX;
    for(int i=0; i<n; i++){
        mini = minimum(arr[i], mini);
    }
    cout<<"The minimum number is : "<<mini;
}