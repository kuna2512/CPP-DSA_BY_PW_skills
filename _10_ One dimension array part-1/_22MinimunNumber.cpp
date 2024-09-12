/*
Ques. fint the minimum value out of all the elements in the array.

---------------------
output:
Enter the size of array: 5
Now Enter the elements:  4 5 3 2 8
The minimum element is: 2
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Now Enter the elements: ";
    // input
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // minimum
    int min = arr[0]; 
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    } 
    cout << "The minimum element is: " << min;
}
