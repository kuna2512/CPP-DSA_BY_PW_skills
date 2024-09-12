/*
Ques : Sort the array of 0's, 1'2 and 2's.(leetcode 75)
------------------------
method
1. Sort color (on leetcode)
2. Dutch flag algorithm
-=-----------------
m-2 : 3 pointer algorithm (dutch falg algo)
    low  mid  high

    |----------------------------------------|
    0<--------->low<---------->mid<---------->n-1
          0             1              2
    hints ->  0 to low-1 -> 0
              hint+1 to n-1 -> 2
              mid -> play -> if
    -------------------------------
  low/high    high
     |         |
     2 0 2 1 1 0 
while(mid<=high){
    // there should be three conditions.
  1. if(nums[mid]==2){
        swap(mid,high);
        high--;
    }
2. if(nums[mid]==0){
        swap(mid,low);
        low++;
        mid++;
    }
3.  if(nums[mid]==1){
        mid++;
    }
}
  
output : 
Original array : 1 2 0 1 1 2 2 0 0 1 1 
Sorting array : 0 0 0 1 1 1 1 1 2 2 2 
*/
#include<bits/stdc++.h>
using namespace std;
void sortColors(vector<int>& nums){
    // one pass solution
    int n = nums.size();
    int low = 0;
    int mid = 0;
    int high = n-1;
    // 1. think about mid.
    // 2. 0 to low-1 -> 0, high+1 to end -> 2
    //    low to mid-1 -> 1
    while(mid<=high){
      if(nums[mid]==2){
        int temp = nums[mid];
        nums[mid]=nums[high];
        nums[high]=2;
        high--;
      }
      else if(nums[mid]==0){
        int temp = nums[mid];
        nums[mid]=nums[low];
        nums[low]=0;
        low++;
        mid++;
      }
      else{
        mid++;
      }
    }
    return ;
}
int main(){
    cout<<"Original array : ";
    vector<int> v={1,2,0,1,1,2,2,0,0,1,1};
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sortColors(v);
    cout<<"Sorting array : ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}