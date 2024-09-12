#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int> vec; // you need not mention the size;
    // insertin / input do not use [] .
    vec.push_back(3); // |3|
    vec.push_back(5); // |3|5|
    vec.push_back(2); // |3|5|2|
    vec.push_back(8); // |3|2|5|8|
    vec.push_back(7); // |3|2|5|8|7|
    vec.push_back(10);// |3|2|5|8|7|10|
    vec.push_back(32);// |3|2|5|8|7|10|32|
    cout<<vec[0]<<" ";
    cout<<vec[1]<<" ";
    cout<<vec[2]<<" ";
    cout<<vec[3]<<" ";
    cout<<vec[4]<<" ";
    cout<<vec[5]<<" ";
    cout<<vec[6]<<" ";
}