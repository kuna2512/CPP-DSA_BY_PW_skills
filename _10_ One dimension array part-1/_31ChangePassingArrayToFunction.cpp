/*
output : 
_31ChangePassingArrayToFunction.cpp:9:22: 
warning: 'sizeof' on array function parameter 'a' will 
return size of 'int*' [-Wsizeof-array-argument]
    9 |     int size= sizeof(a)/sizeof(a[0]);
      |                     ~^~
_31ChangePassingArrayToFunction.cpp:8:18: note: declared here     
    8 | void display(int a[]){
      |              ~~~~^~~
1 3 5 2 4 359 
100 3 5 2 4 359
*/
#include<iostream>
using namespace std;
void display(int a[]){
    int size= sizeof(a)/sizeof(a[0]);
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
    int size= sizeof(arr)/sizeof(arr[0]);
    display(arr); // calling means sending the address of array first element.
    // calling change function
    change(arr);
    display(arr);
}