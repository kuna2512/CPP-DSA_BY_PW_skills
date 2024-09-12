/*
Ques: Fint the different between the sum of elements 
at even indices to the sum of Elements at odd indices.
----------------
output :
Enter the size of array : 6
Enter the Element of array : 5 4 6 8 7 9
The difference is : 18
*/
#include<bits/stdc++.h>
using namespace std;
int evaluateDifference(int a[], int n){
    int sumE = 0;
    int sumO = 0;

    for(int i=0; i<n; i++){
        if(i%2==0){
            sumE += a[i];
        }
        else{

        }
    }
    return (sumE - sumO);
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    
    int a[n];
    cout<<"Enter the Element of array : ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"The difference is : "<<evaluateDifference(a,n);
}