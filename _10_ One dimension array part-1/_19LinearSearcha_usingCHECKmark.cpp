/*
Linear search 
Ques. fint the element x in the array. Take array and x as input.
--------------------------
output: 
Enter size of array : 10
Now enter the element of array : 1 5 7 8 6 45 21 85 35 1000
Enter the element that want to you search : 85 
Element is Present.
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
    cout<<"Enter the element that want to you search : ";
    cin>>x;
    //check mark
    bool flag = false; // flase -> not present.
    // search
    for(int i=0; i<=n-1; i++){
        if(arr[i]==x){
            flag=true;
        }
    }
    if(flag==true){
        cout<<"Element is Present.";
    }
    else{
        cout<<"Element isn't present.";
    }
}