/*
Ques: Merge two sorted arrays. (leetcode - 88)
----------------------
leetcode : num1 |1|2|3|0|0|0|
           num2 |2|5|6|
--------------------
concept :
            i
arr1 |1|4|5|8|
               j
arr2 |2|3|6|7|10|
  // after add the arrays
                       k
arr3 |1|2|3|4|5|6|7|8|10|

int i = n-1;
int j = m-1;
int k = m+n-1;
*/
#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int> merge(vector<int>& v1, vector<int> & v2){
    int n = v1.size();
    int m = v2.size();
    vector<int> res (m+n);
    int i = n-1 // arr1;
    int j = m-1 // arr2;
    int k = m+n-1 // res;
    while(i<=n && j<=m){
        if(v1[i]<v2[j]){
            res[k] = v1[i];
            i--;
            k--;
        }
        else{ // arr2[j]<arr1[i]
            res[k]=v2[j];
            j++;
            k++;
        }
    }
    // for remaning
    if(i==n){ // arr1 ke saare elements utha chuke hoon
        while(j<=m-1){
            res[k] = v2[j];
            k++;
            j++;
        }
    }
    if(j==m){// arr2 ke saare elements utha chuke hai
        while(i<n-1){
            res[k] = v1[i];
            k++;
            i++;
        }
    }
    return res; // Added return statement to return merged vector
}
int main(){
    vector<int> arr1={1,2,5,7,10,11};
    vector<int> arr2={3,4,6,8,9};
    vector<int> arr3();
    for(int i=0; i<arr1.size(); i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<arr2.size(); i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    vector<int> v = merge(arr1,arr2);
    // Print the merged array
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}