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
output : 2 5 7 3 9 0  
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,5,7,3,9};
    int* ptr = &arr[0]; // here store the array first element address.
    for(int i=0; i<=5; i++){
        cout<<arr[i]<<" ";
    }
    
}