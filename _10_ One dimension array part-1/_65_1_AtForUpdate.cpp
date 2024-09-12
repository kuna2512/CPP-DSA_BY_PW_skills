/*
at : the at() operator is used to access elements of a vector. 
A video lecture is available that explains the difference between using at() and 
the [] operator to access vector elements. The lecture covers how to access elements 
when the index is within range, as well as when the index is out of range.
====================
output :
Print element normally : 3 8 2 7 9 12 194 
Print after update : 55 15 2 18 9 12 115 
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>c;
    c.push_back(3);
    c.push_back(8);
    c.push_back(2);
    c.push_back(7);
    c.push_back(9);
    c.push_back(12);
    c.push_back(194);
    cout<<"Print element normally : ";
    for(int i=0; i<c.size(); i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;
    // update using at.
    c.at(1)=15;
    c.at(3)=18;
    c.at(6)=115;
    c.at(0)=55;
    cout<<"Print after update : ";
    for(int i=0; i<c.size(); i++){
        cout<<c[i]<<" ";
    }
}