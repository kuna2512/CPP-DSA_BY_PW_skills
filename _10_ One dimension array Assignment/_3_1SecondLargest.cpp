/*
find the second largest element in the given Array in one pass.
-------------------------
output:
Enter the size of array : 6
Enter the elements : 45 7 88 6 3 5  
Second largest element in arry : 45

*/
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    for(int i=0; i<n; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    // second max
    int secMax=INT_MIN;
    for(int i=0; i<n; i++){
        if(max!=arr[i] && secMax<arr[i]){
            secMax = arr[i];
        }
    }
    cout<<"Second largest element in arry : "<<secMax;
}