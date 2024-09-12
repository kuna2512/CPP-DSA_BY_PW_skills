/*
Ques. fint the maximum value out of all the elements in the array.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of Array : ";
    cin>>n;
    int arr[n];
    // input;
    cout<<"Enter the elements : ";
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    //max value.
    int max = arr[0]; // max=INT_MIN; ka bhi use kar sakate hain.
    for(int i=1; i<=n; i++){
        if(max<arr[i]){
        max = arr[i];
        }
    }
    cout<<"Max element of array : "<<max;
}