/*
char arr[5]={'a','n','s','h','u'}
int arr[] = {1,5,2,3,3,5,5}
int* ptr = arr; // this is also a way of initialization of pointer. if doing like that then
                   first element first byte address will be stored in the pointer.
                   eg : int* ptr = arr; // right
                        int* ptr = &arr; // wrong
                        int* ptr = &arr[0] // right. and this is an address.
                        int* ptr = arr[0] // wrong. and this is a integer. 
*/
/*
output :
0x43511ff7a0
108 4 6 2 6 33 6 3 1361049504 67  
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={8,4,6,2,6,33,6,3};
    int* ptr = &arr[0]; // giving address of first element first byte address.
    cout<<ptr<<endl;
    ptr[0]=108;
    for(int i=0; i<=9; i++){
        cout<<ptr[i]<<" ";
    }
}