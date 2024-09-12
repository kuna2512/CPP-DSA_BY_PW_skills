/*
Ques : Sort the array of 0's, 1'2 and 2's.(leetcode 75)
------------------------
method
1. Sort color (on leetcode)
2. Dutch flag algorithm
-=-----------------
output : 
Original array : 1 2 0 1 1 2 2 0 0 1 1 
Sorting array : 0 0 0 1 1 1 1 1 2 2 2 
*/
#include<bits/stdc++.h>
using namespace std;
void sortColors(vector<int>& nums){
    // method no.1 two pass solution.
    int n = nums.size();
    int noz = 0; 
    int noO = 0; 
    int noT = 0;
    for(int i=0; i<n; i++){
        if(nums[i]==0){
            noz++;
        }
        else if(nums[i]==1){
            noO++;
        }
        else{
            noT++;
        }
    }
     // fill
    for(int i=0; i<n; i++){
        if(i<noz){
            nums[i]=0;
        }
        else if(i<(noz+noO)){
            nums[i]=1;
        }
        else{
            nums[i]=2;
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