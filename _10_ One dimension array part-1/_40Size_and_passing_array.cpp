/*
output :
Size of array : 8
3 5 2 13 12 15 16 19
299 5 2 13 235 384 16 19
*/
#include<iostream>
using namespace std;
void display(int* a, int size){
    for(int i=0; i<=size-1; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return ;
}
void change(int* b, int size){
    b[0]=299;
    b[4]=235;
    b[8]=335;
    b[5]=384;
}
int main(){
    int arr[]={3,5,2,13,12,15,16,19};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of array : "<<size<<endl;
    // accessing the elemets of arry in another function
    // updation, pass by value / refrence ?
    display(arr,size);
    change(arr,size);
    display(arr,size);
}