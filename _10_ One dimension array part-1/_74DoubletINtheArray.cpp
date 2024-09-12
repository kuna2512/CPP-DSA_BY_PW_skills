/*
(Leetcode -1)(Two Sum)
Ques: Find the doublet in the array whose sum is equal to the given value x.
-----------------------------
concept : 
v |1|8|2|4|3|4|1|6|7|13|15|
   0 1 2 3 4 5 6 7 8 9  10
   x = 15; // (0,10) |
           // (1,8)  | doublets pair
           // (2,9)  |
=======================================
output : 
Enter targe : 10
Enter array size :10
Enter array Element : 1 5 7 3 2 8 4 6 0 10
Doubltes pair = (2,3)
Doubltes pair = (4,5)
Doubltes pair = (6,7)
Doubltes pair = (8,9)
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cout<<"Enter targe : ";
    cin>>x;
    vector<int>v;
    int n; 
    cout<<"Enter array size :";
    cin>>n;
    cout<<"Enter array Element : ";
    for(int i=0; i<n; i++){
        int q ;
        cin>>q;
        v.push_back(q);
    }
    for(int i=0; i<=v.size()-2; i++){ // here we write -2 to remove repetation of doublet pairs.
        for(int j=i+1; j<=v.size()-1; j++){
            if(v[i]+v[j]==x){
                cout<<"Doubltes pair = "<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}
// 1:40