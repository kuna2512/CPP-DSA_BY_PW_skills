/*
Given an array, predict if the array conatins duplicates or not.
-------------
output : 
Enter size of array : 5
Enter array Elements : 4 5 6 7 8 
duplicate not exits.
*/
#include<bits/stdc++.h>
using namespace std;
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
    bool flag = false; // flase -> not present.
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                cout<<"Duplicate exits.";
                flag=true;
                break;
            }
        }
    }
    if(flag==false){
        cout<<"duplicate not exits.";
    }
}