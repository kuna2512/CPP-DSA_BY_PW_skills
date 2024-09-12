/*
output : 
1 3 5 2 4 532 
100 3 5 2 4 532 
*/
#include<iostream>
using namespace std;
void display(int a[]){
    for(int i=0; i<=5; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return ;
}
// to change the element of array.
void change(int b[]){
    b[0]=100;
}
int main(){
    int arr[5]={1,3,5,2,4};
    display(arr); // calling means sending the address of array first element.
    // calling change function
    change(arr);
    display(arr);
}