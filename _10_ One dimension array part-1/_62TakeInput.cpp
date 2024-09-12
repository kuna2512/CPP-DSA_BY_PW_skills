/*
_62TakeInput.cpp:6:22: error: invalid use of member 'std::vector<_Tp, _Alloc>::size_type std::vector<_Tp, _Alloc>::size() const [with _Tp = int; _Alloc = std::allocator<int>; std::vector<_Tp, _Alloc>::size_type = long long unsigned int]' (did you forget the '&' ?)
    6 |     for(int i=0; i<v.size; i++){ // it stat occer error.  
      |                    ~~^~~~
_62TakeInput.cpp:9:11: error: statement cannot resolve address of overloaded function
    9 |         v.push_back;
      | 
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    cout<<"Enter the element : ";
    for(int i=0; i<v.size; i++){ // it stat occer error.
        int x;
        cin>>x;
        v.push_back;
    }
    cout<<"output is : ";
    for(int i=0; i<6; i++){
        cout<<v[i]<<" ";
    }
}