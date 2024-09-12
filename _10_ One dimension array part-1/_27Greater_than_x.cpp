/*
Cout the number of elements in given array greater than a given number x.
--------------------
output:
Enter size of array : 6
Now enter the element of array : 4 6 8 6 7 9
Enter the element that want to you search : 6
Greater number as compare to x : 3
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
    // search
    int count=0;
    for(int i=0; i<=n-1; i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<"Greater number as compare to x : "<<count<<" ";
}