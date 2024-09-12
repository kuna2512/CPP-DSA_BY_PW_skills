/*
Ques: Sort the array of 0's and 1's.
----------------
int n; 

|0|1|0|0|1|1|0|1|
<--noz-->

M-I : two pass method
    int noz = 0, 1,2 ,3 ,4
    int no0 = 0,1,2,3,4

    0 --> (noz-1)th => 0
    (noz)th => 1
    ------------------------
output : 
1 1 0 0 1 1 0 1 
0 0 0 1 1 1 1 1 
*/
#include<bits/stdc++.h>
#include<vector>
using namespace std; 
void sort01m1(vector<int>& v){
    int n = v.size();
    int no0 = 0;
    int noz = 0;
    for(int i=0; i<n; i++){
        if(v[i]==0){
            noz++;
        }
        else{
            no0++;
        }
    }
    // filling elements or overwrite.
    for(int i=0; i<n; i++){
        if(i<noz){
            v[i] = 0;
        }
        else{
            v[i] = 1;
        }
    }
}
int main(){
    vector<int>v;
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
    // here we doing something.
    sort01m1(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
// it is done by two pass method.
// total time taken => 2n