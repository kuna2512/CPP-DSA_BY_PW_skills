/*
Output : 
Enter size of array : 5
Enter array Elements : 45 78 25 46 5
The maximum number is : 78
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
    // maximum
    int Maximum = INT_MIN;
    for(int i=0; i<n; i++){
        Maximum = max(arr[i], Maximum);
    }
    cout<<"The maximum number is : "<<Maximum;

}