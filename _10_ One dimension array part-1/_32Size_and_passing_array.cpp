/*
size of array : 7
2 4 1 4 2 5 8 
2 4 1 108 2 5 8 
*/
#include<iostream>
using namespace std;
void display(int a[], int size){
    for(int i=0; i<=size-1; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int b[], int size){
    b[3]=108;
}
int main(){
    int arr[]={2,4,1,4,2,5,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"size of array : "<<size<<endl;
    display(arr, size);
    change(arr, size);
    display(arr,size);
}
// 16:26 minutes