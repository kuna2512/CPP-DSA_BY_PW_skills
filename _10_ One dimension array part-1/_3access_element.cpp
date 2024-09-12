/*
Ques. How to access Element in array ?
    ___________________________________
arr| | | | | | | | | | |  |  |  |  |  |
   ------------------------------------
    0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={9,3,54,8,3,8,2,2,8,14}; // a[] without size mention it work properly. but you need to write element.
    cout<<"Array of 4th index is : "<<a[4]<<endl;
    cout<<"Array of 2th index is : "<<a[2]<<endl;
    cout<<"Array of 9th index is : "<<a[9]<<endl;
    cout<<"Array of 6th index is : "<<a[6]<<endl;
}
/*
#include<iostream>
using namespace std;
int main(){
    int arr[]; // if we not initialize size of array and not give elements of arry then it will be wrong.
    arr[0]=1;
    cout<<arr[0];
}

*/