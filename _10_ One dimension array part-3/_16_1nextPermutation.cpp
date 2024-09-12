/*
Ques : Fing the next permutation of Array.(leetcode - 31)
Note :- if not possible then print the sorted order in ascending order.
------------------------------
concept : 
permutation of 1,2,3 => 3! permutation possible.
1,2,3  1,3,2  3,2,1 // permutation means next array number should be bigger as compare to original/previous number.
3,1,2  2,1,3  2,3,1 // there can be 6 permutation of 1,2,3
// if we treat this as a number like :
 => 123  132  321  312  213  231 
 // if we arranage it like assending number.
 => 123 132 213 231 312 321 
---------------------------------------------
permutation of 1,4,2,3 => 4! = 24 permutation possible.
1,4,2,3 -> 1,4,3,2 -> 2,1,3,4 -> 2,1,4,3 -> 2,3,1,4 -> 2,3,4,1 -> and so on.
    ---      -----        ---        ---
  assending    |       assending      |
               |                   forword of pivot number. number is in dessending order.
            forword of pivot number. number is in dessending order.
 pivot index => change in point 
 eg :- 
 point-1 .-----------------------.point-2
         =>
                point-3 => pivot index
                  /\
                 /  \
                /    \
               /      \
              /        \
             /          \
            /            \
        point-1       point-2 
    int idx = -1; 
    for(int i=n-2; i>=0; i--){
        if(arr[i]<arr[i+1]){
            idx = i;
            break;
        }
    }
------------------
step-1) find pivot idx.
     2) idx+1 to end -> reverse Or sort.

  note) if given no. can'nt be permutataion
        eg : 4,3,2,1
        if(idx==-1){
            reverse the array
        }
*/
#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int>& nums, int i, int j){
    while(i<j){
        int temp = nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
        i++;
        j--;
    }
    return;
}
void nextPermutation(vector<int>& nums){
    int n = nums.size();
    // 1) finding pivot index.
    int idx = -1;
    for(int i=n-2; i>=0; i--){
        if(nums[i]<nums[i+1]){
            idx = i;
            break;
        }
    }
    if(idx==-1){ // if array is already greatest.
        reverse(nums, 0, n-1);
        return;
    }
    // 2) sorting/reverse after pivot.
    reverse(nums.begin()+idx+1, nums.end());
    // 3) swapping idx and idx+1.
    int temp = nums[idx];
    nums[idx]=nums[idx+1];
    nums[idx+1]=temp;
}
int main(){
    vector<int> v = {1,4,2,3};
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl; 
    nextPermutation(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
// 2:12