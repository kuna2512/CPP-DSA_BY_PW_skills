/*
Ques: Trapping Rain Water (Leetcode-42)
---------------------------
steps : 
height={0,1,0,2,1,0,1,3,2,1,2,1};
1) previous greatest Element.
    -1<-0
       0<-1
        1<-0
          1<-2
            2<-1
              2<-0  and so on.
    => prev = {-1,0,1,1,2,2,2,2,3,3,3,3}
    
2) change in previous for next elements array.
prev = {-1,0,1,1,2,2,2,2,3,3,3,3};  max = 1,2,3
                       | | | | |
                       | | | |-1
                       | | | 1
                       | | 2
                       | 2
        -1,0,1,1,2,2,2,2

-------------------------------------
// previous greatest elememts array
for(int i =1; i<12; i++){
    arr[i] = max;
    if(max<height[i]){
        max=height[i];
    }
}
// next greatest elements array
int n = height.size();
int max = height[n-1];
for(int i=n-2; i>=0; i--){
    brr[i] = max;
    if(max<height[i]){
        max = height[i];
    }
}

*/
#include<bits/stdc++.h>
using namespace std;
int trappeWater(vector<int>& height){
    int n = height.size();
    // previous greatest elements Array.
    int prev[n];
    prev[0] = -1; 
    int max = height[0];
    for(int i=1; i<n; i++){
        prev[i] = max;
        if(max<height[i]){
            max = height[i];
        }
    }
    // next greatest elemets array. --> prev as next
    prev[n-1] = -1;
    max = height[n-1];
    for(int i=n-2; i>=0; i--){
        if(max<prev[i]) prev[i] = max;
        if(max<height[i]){
            max = height[i];
        }
    } 
    // calculation water.
    int water = 0;
    for(int i=1; i<n-1; i++){
        if(height[i]<prev[i]){
            water += (prev[i]-height[i]);
        }
    }
    return water;
}
int main(){
    vector<int> height={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<"Height of array : ";
    for(int i=0; i<height.size(); i++){
        cout<<height[i]<<" ";
    }
    cout<<endl;
    int water  = trappeWater(height);
        cout<<"Traped Water : " <<water<<endl;
    cout<<endl;
    return 0;
}