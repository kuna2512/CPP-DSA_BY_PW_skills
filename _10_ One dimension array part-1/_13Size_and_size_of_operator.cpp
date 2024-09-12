/*
Size and size of operator (How can we use it to find the length of array?)
----------------
output:
Size of Array is : 17 
Size of char array is : ↕
*/
#include<iostream>
using namespace std;
int main(){
    int arr[]={2,5,6,8,3,7,3,7,3,2,6,255,13,67,32,53,66};
    int n = sizeof(arr)/4; /* it also work properly because integer is be of 4 bytees.
    same we can use for char 1 byte and same for others
    */
   cout<<"Size of Array is : "<<n<<" ";
   cout<<endl;
   char ar[]={'a','g','e','s','g','e','d','h','s','d','e','y','e','s','y','d','s','s'};
   char m = sizeof(ar)/sizeof(ar[0]);
   cout<<"Size of char array is : "<<m;
}