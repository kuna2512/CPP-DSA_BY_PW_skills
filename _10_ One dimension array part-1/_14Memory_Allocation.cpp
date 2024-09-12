/*
Memory Allocation in Arrays
ans : Continuous memory allocation.
      int arr[4]={1,2,4,5}; 
 
                              Memory Allocation in Arrays 
      _________              ______________________________________
arr   |1|2|4|5|              | | | | | | | | | | | | | | | | | | | |
       0 1 2 3               | | | | | | | | | | | | | | | | | | | |
                               ________
                                   1    ________        ________
                                arr[0]      2   ________   5
                                         arr[1]     4    arr[4]
                                                 arr[3]                                               
    hexadecimal : 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
                  0 1 2 3 4 5 6 7 8 9  a  b  c  d  e  f
*/
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Address of arr : "<<&arr<<endl;
    cout<<"Address of 1st index : "<<&arr[0]<<endl;
    cout<<"Address of 2ne index : "<<&arr[1]<<endl;
    cout<<"Address of 3rd index : "<<&arr[2]<<endl;
    cout<<"Address of 4th index : "<<&arr[3]<<endl;
    cout<<"Address of 5th index : "<<&arr[4]<<endl;
    /*
Address of arr : 0xc8ea3ffbe0 // array ka address array ke first element ke first byte ka address hota hain.
Address of 1st index : 0xc8ea3ffbe0
Address of 2ne index : 0xc8ea3ffbe4
Address of 3rd index : 0xc8ea3ffbe8
Address of 4th index : 0xc8ea3ffbec
Address of 5th index : 0xc8ea3ffbf0
------------------------------------
cout<<arr; // than it is print fist elemnet of array.
    */
}
