/*
What is an array ? 
ans : an array is a data structure. that use to store 
similar type of data in memory.
----------------------------------
Syntax and Declaration :             _______________________
int x[11]; // declaration of array
x[3]=5; // initialization. x[0] here 0 is indices
x[0]=10;
________________________ 
|10| | |3| | | | | | | |........ and so on.
 0  1 2 3 4 5 6 7 8 9 10
*/
/*
Output: Arrays : 7 4 5 3 8 9 2 
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[7];
    arr[0]=7;
    arr[1]=4;
    arr[2]=5;
    arr[3]=3;
    arr[4]=8;
    arr[5]=9;
    arr[6]=2;
    cout<<"Arrays : ";
    cout<<arr[0]<<" ";
    cout<<arr[1]<<" ";
    cout<<arr[2]<<" ";
    cout<<arr[3]<<" ";
    cout<<arr[4]<<" ";
    cout<<arr[5]<<" ";
    cout<<arr[6]<<" ";
}