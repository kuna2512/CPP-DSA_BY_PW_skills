/*
Vector are passed by value : Each time you pass, New vector is created.
we can achive this by using this : & --> ampercant
=======================
output : 
As it is element print : 9 23 19 34 14 18
Print after update the value : 9 100 19 34 14 18
*/
#include<bits/stdc++.h>
using namespace std;
void change(vector<int>& vec){ // if we here using & operator bofore vec then it's help to update value.
    vec[1]=100;
}
int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(23);
    v.push_back(19);
    v.push_back(34);
    v.push_back(14);
    v.push_back(18);
    cout<<"As it is element print : ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
    cout<<"Print after update the value : ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}
// 1:23 hours.
