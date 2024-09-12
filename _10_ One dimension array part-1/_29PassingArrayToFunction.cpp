/*

*/
#include<bits/stdc++.h>
using namespace std;
void display(int a[]){ // in the argument initialization of data type is compelsurry.
    for(int i=0; i<=5; i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,5,3,5};
    // accessing the elements of array in another function.
    // updation, pass by value / reference ? 
    display(arr); // in the case of calling data type isn't required.
}