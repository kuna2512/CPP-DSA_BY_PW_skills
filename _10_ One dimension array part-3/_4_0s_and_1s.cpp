/*
Ques: Sort the array of 0's and 1's.
----------------------
method - 2 : Two Pointers
int n; 

|0|1|0|0|1|1|0|1|
 i             j

while(i<j){
    if(arr[j]==1){
        j--;
    }
    if(arr[i]==0){
        i++;
    }
    if(arr[i]==1 && arr[j]==0){
        // do swap
        int temp = a;
        a = b; 
        temp = b;
        //or
        arr[i]=0;
        arr[j]=0;
        //
        i++;
        j--; 
    }
}
Hint -> 0's are to the front.
        1's are to the back.
        swapping.
*/
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void sort01m2(vector<int>& v){
    int n = v.size();
    int i = 0;
    int j = n-1;
    while(i<j){
        if(v[i]==0){
            i++;
        }
        if(v[j]==1){
            j--;
        }
        if((v[i]==1) && (v[j]==0)){
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
    }
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort01m2(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
// it is done by two pass method.
// 30