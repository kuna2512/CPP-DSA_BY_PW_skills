/*
Caluculate the sum of all the elements in the given array.
----------------------------
output:-
Enter size of array : 5
1 2 5 78 555
Sum of array elements : 641
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    // intput
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0; i<=n-1; i++){
        sum = sum+arr[i];
    }
    cout<<"Sum of no. of array elements : "<<sum;
}