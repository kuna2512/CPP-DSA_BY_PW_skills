/*
output : 
4 5 8 42 43 3 7 12 33 8 9 40 
4 5 8 42 43 3 7 12 33 8 9 
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(4);
    v.push_back(5);
    v.push_back(8);
    v.push_back(42);
    v.push_back(43);
    v.push_back(3);
    v.push_back(7);
    v.push_back(12);
    v.push_back(33);
    v.push_back(8);
    v.push_back(9);
    v.push_back(40);
    
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}