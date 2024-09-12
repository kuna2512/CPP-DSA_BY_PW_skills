/*
Ques: Rotate the given array 'a' by k steps, where k is non-negative.
Note: k can be greater than mas well where n is the size of array 'a'.
-----------------------------------
concept : 
     0 1 2 3 4 5 
arr |1|6|2|3|7|4|

k=2
rotate |6|1|4|7|3|2|

k=4
rotate |3|2|6|1|4|7|

algorithm : Hint -> 1) reverse part of array.
     0 1 2 3 4 5 
arr |1|6|2|3|7|4|
2) k=3     
   rotate |3|7|4|1|6|2|
       3) divide rotate array into two parts
       |3|7|4|              |1|6|2|
       -------              -------
n-k elements(0, n-k-1,v);   k elements(n-k,n-1,v);
    4) reverse     reverse
 5) reverse and add both arrrays
       |4|7|3|+|2|6|1|

    => |4|7|3|2|6|1|
 6) now again reverse this array
    => |1|6|2|3|7|4|
--------------------
step-1 : reversePart(0,n-k-1,v);
step-2 : reversePart(n-k,n-1,v);
step-3 : reversePart(0,n-1,v);
--------------------------------
output :
Normal Array : 2 5 3 7 9 8 7 12 33 8 9 40 
Roate Array : 8 7 12 33 8 9 40 2 5 3 7 9

*/
#include<bits/stdc++.h>
using namespace std;
void display(vector<int>& a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversePart(int i, int j,vector<int>& b){
    while(i<=j){
        int temp=b[i];
        b[i]=b[j];
        b[j]=temp;
        i++;
        j--;
    }
    return;
}
int main(){
    cout<<"Normal Array : ";
    vector<int>v;
     v.push_back(2);
    v.push_back(5);
    v.push_back(3);
    v.push_back(7);
    v.push_back(9);
    v.push_back(8);
    v.push_back(7);
    v.push_back(12);
    v.push_back(33);
    v.push_back(8);
    v.push_back(9);
    v.push_back(40);
    display(v);
    int k=7;
    // rotate
    int n = v.size();
    cout<<"Roate Array : ";
    reversePart(0,n-k-1,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);
    display(v);

}