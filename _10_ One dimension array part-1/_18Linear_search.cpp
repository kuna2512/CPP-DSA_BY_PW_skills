/*
Linear search 
Ques. fint the element x in the array. Take array and x as input.
--------------------------
output: 
Enter size of array : 7
Now enter the element of array :  5 6 7 2 8 4 3  
Enter the element that want to you search : 6 
Yes. Element is present in the array.
*/
#include<iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Now enter the element of array : ";
    //input
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    //search
    cout<<"Enter the element that want to you search : ";
    cin>>x;
    for(int i=0; i<=n-1; i++){
        if(arr[i]==x){
            cout<<"Yes. Element is present in the array."<<endl;
        }
    }
}