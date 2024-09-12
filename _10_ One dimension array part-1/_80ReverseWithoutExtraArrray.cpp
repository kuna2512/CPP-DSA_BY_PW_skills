/*
Ques: Write a program to reverse the array without using any extra array.
------------------------------
concept : 
   0 1 2 3 4 5 6 
v |3|4|2|7|8|9|1|
int i = 0;
int j = v.size()-1;
------------------------------
output :
2 5 3 7 9 8 
8 9 7 3 5 2
*/
#include<bits/stdc++.h>
using namespace std;
void display(vector<int>& a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reverse(vector<int>& vec){
    int i =0;
    int j = vec.size()-1;
    while(i<=j){
        int temp = vec[i];
        vec[i] = vec[j];
        vec[j] = temp;
        i++;
        j--;
    }
}
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(5);
    v.push_back(3);
    v.push_back(7);
    v.push_back(9);
    v.push_back(8);

    display(v);
    //reverse
    reverse(v);
    display(v);
}