/*
Ques: If an array arr contains n elements, then check
if the given array is a palindrome or not.
---------------------
palindrome : i and ith element should we equal.
---------------------------------
psecude : int n = 1 2 3 4 3 2 1;
bool isPalindrom(){

}
// or for (int i=0; i<=n/2; i++){}
for(int i=0; i<n; i++){
    i     j
    0 --> 6 => n-1 => n-i-1
    1 --> 5 => n-2 => n-i-1
    2 --> 4 => n-3
    3 --> 3 => n-4 // it is unique
    4 --> 2 => n-5
    
    if(a[i] != a[n-i-1]){
        return false;
    }
    return treu;
}
--------------------------
output : 
Enter the size of array : 7
Enter the Element of array : 1 2 3 4 3 2 1 
1
*/
#include<bits/stdc++.h>
using namespace std;
bool isPalindrom(int b[], int m){
    for(int i=0; i<m; i++){
        if(b[i] != b[m-i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    
    int a[n];
    cout<<"Enter the Element of array : ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"is the given array a palindrom ? "<<isPalindrom(a,n)<<endl;

}
