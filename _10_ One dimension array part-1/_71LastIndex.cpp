/*
Ques. Fing the last occurrence(it means showing the last index of x) of x in the array.
-------------------------------
concept :
int x;
vector<int>v;

v |1|3|2|4|3|4|1|6|7|13|17|
   0 1 2 3 4 5 6 7 8 9  10
  x=1;
  int idx = 0 , 1, 
  output : 6 
  // because 1 placed on the 0th index and also on 6th index so output will be 6. 
  ------------------------------
  output : Size of last index of element x : 10
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(23);
    v.push_back(15);
    v.push_back(34);
    v.push_back(14);
    v.push_back(18);    
    v.push_back(19);
    v.push_back(32);
    v.push_back(19);
    v.push_back(32);
    v.push_back(15);
    v.push_back(19);
    int x = 15;
    int idx = -1;
    for(int i=v.size()-1; i>=0; i--){ 
      if(v[i]==x){
        idx = i;
        break;
      }
    }
    cout<<"Size of last index of element x : "<<idx;
}