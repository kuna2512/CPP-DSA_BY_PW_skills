/*
Ques: Check if the given array is sorted or not.
---------------------------
psecudo : 
bool flag = true;
for(int i=0; i<n-1; i++){ // here we will run loop i<n-1; time loop otherwise it occurs runtime error.
    if(a[i]<=a[i+1]){
        cout<<" ";
    }
    else{
        cout<<"array is unsorted";
        flag=false;
        break;
    }
    if(flag == true){
        cout<<"Array is sorted.";
    }

    if(i==n-1){
        cout<"array is sorted.";
    }
}
----------------------------
output :
Enter the size of array : 8
Enter the Element of array : 3 6 9 7 4 1 2 5 
The array is unsorted.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    
    int a[n];
    cout<<"Enter the Element of array : ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int i;
    for(i=0; i<n-1; i++){
        if(a[i]<a[i+1]){
            break;
        }
    }
    if(i==n-1){
        cout<<"The array is sorted.";
    }
    else{
        cout<<"The array is unsorted.";
    }
}