/*
output : 
Print as it is : 3 8 2 7 9 12 194 
After change 0th element : 3 8 2 7 9 12 194 // through this process we can't update element.
*/
#include<bits/stdc++.h>
using namespace std;
void change(vector<int>vec){
    vec[0]=101;
}
int main(){
    vector<int>v;
    v.push_back(3);
    v.push_back(8);
    v.push_back(2);
    v.push_back(7);
    v.push_back(9);
    v.push_back(12);
    v.push_back(194);
    cout<<"Print as it is : ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v); // function calling.
    cout<<"After change 0th element : ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}