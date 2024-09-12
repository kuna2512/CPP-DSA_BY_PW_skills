/*
Same element : 3 8 2 7 9 12 194 
After Sorting the element is : 2 3 7 8 9 12 194 
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
    cout<<"Same element : ";
    for(int i=0; i<c.size(); i++){
        cout<<c.at(i)<<" ";
    }
    cout<<endl;
    cout<<"After Sorting the element is : ";
    // sort
    sort(c.begin(),c.end());
    for(int i=0; i<c.size(); i++){
        cout<<c.at(i)<<" ";
    }
    cout<<endl;

}