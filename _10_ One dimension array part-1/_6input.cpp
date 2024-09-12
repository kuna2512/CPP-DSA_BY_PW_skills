/*
output:-
Enter the input : 
4 5 3 7 52
4 5 3 7 52 
*/
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter the input : "<<endl;
    // intput
    for(int i=0; i<=4; i++){
        cin>>arr[i];
    }
    // output
    for(int i=0; i<=4; i++){
        cout<<arr[i]<<" ";
    }
} 
/*
for loop -> throught for loop we do input and output and input both by using indices.
here i -> i used as a indices
*/