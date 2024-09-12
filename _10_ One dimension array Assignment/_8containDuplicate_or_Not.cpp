/*
Given an array, predict if the array conatins duplicates or not.
----------------------------
output : 
Enter size of array : 5
Enter array Elements : 44 55 44 6 5
Yes. duplicates exist.

*/
#include<bits/stdc++.h>
using namespace std;
bool duplicates(int a[], int m){
    for(int i=0; i<m; i++){
        for(int j=i+1; j<m; j++){
            if(a[i]== a[j]){
                return true;
            }
        }
    }
    return false;
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
    if(duplicates(arr,n)){
        cout<<"Yes. duplicates exist.";
    }
    else{
        cout<<"No. duplicates don't exist.";
    }
}