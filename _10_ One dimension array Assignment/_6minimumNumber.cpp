/*
Find the minimum value out of all the elements in the array.
------------------
output : 
Enter size of array : 8
Enter array Elements : 44 55 10 220 103 87 5 555
The minimum number is : 5
*/
#include<bits/stdc++.h>
#include<climits>
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
    // minimum
    int mini = INT_MAX;
    for(int i=0; i<n; i++){
        mini = min(arr[i], mini);
    }
    cout<<"The minimum number is : "<<mini;

}