/*
Size and size of operator (How can we use it to find the length of array?)
---------------------------
concept:-
int arr[]={2,4,5,1,32,4,2,3,4,2,4,6,743,2,2}
    int n = sizeof(arr)/sizeof(arr[0]);
-----------------------------------
output:
Size of array is : 17
*/
#include<iostream>
using namespace std;
int main(){
    int arr[]={2,5,6,8,3,7,3,7,3,2,6,255,13,67,32,53,66};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of array is : "<<n;
}