/*
Ques: Sort the array of 0's and 1's.
*/
#include<bits/stdc++.h>
#include<vector>
using namespace std; 
int main(){
    vector<int>v;
    v.push_back(4);
    v.push_back(2);
    v.push_back(5);
    v.push_back(8);
    v.push_back(9);
    v.push_back(1);
    v.push_back(15);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
// it is done by two pass method.