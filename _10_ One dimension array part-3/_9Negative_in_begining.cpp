/*
Ques: Move all negative numbers to begining and positive to end with constant extra space.
-------------------
Original array : 1 -2 3 -5 6 8 -10 
Negative in begning : -10 -2 -5 3 6 8 1
*/
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void negINbeg(vector<int>& v){
    int n = v.size();
    int i = 0;
    int j = n - 1;
    while(i<=j){
         if(v[i] >= 0 && v[j] < 0){
            // swap 
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
        else if(v[i]<0){
            i++;
        }
        else if(v[j]>=0){
            j--;
        }
    }
}
int main(){
    vector<int> v = {1, -2, 3, -5, 6, 8, -10};
    cout<<"Original array : ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // negative in begining
    negINbeg(v);
    cout<<"Negative in begning : ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
// 41 