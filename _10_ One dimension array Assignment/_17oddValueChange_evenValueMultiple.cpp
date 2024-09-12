/*
Ques: Given an array of integers, change the value of
all odd indexed elements to its second multiple and
increment all even indexed value by 10.
---------------------
output : 
Enter the size of array : 9
Enter the Element of array : 4 5 6 7 8 9 1 2 3 
14 10 16 14 18 18 11 4 13
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
    for(int i=0; i<n; i++){
        if(i%2 != 0){
            a[i] *= 2;
        }
        else{
            a[i] += 10;
        }
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}