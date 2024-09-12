/*
Ques. fint the maximum value out of all the elements in the array.
----------------------
output:
Enter the size of Array: 6
Enter the elements: 4 5 6 7 8 9
Max element of array: 9
Second Max element of array: 8
*/
#include<iostream>
#include<climits> // Include this header for INT_MIN
using namespace std;
int main(){
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;
    int arr[n];
    // input
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // max value
    int max = INT_MIN; // Initializing max with INT_MIN
    for(int i=0; i<n; i++){ // Loop should start from 0 and go till n-1
        if(max<arr[i]){ // Correct condition to find the maximum value
            max=arr[i];
        }
    }
    // second max value
    int smax = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]!=max && smax<arr[i]){
            smax=arr[i];
        }
    }
    cout <<"Max element of array: "<<max<<endl;
    cout <<"Second Max element of array: "<<smax;
}
