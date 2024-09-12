/*
_63TakeInput.cpp: In function 'int main()':
_63TakeInput.cpp:14:22: error: invalid use of member 'std::vector<_Tp, _Alloc>::size_type std::vector<_Tp, _Alloc>::size() const [with _Tp = int; _Alloc = std::allocator<int>; std::vector<_Tp, _Alloc>::size_type = long long unsigned int]' (did you forget the '&' ?)
   14 |     for(int i=0; i<v.size; i++){ // it stat occer error.  
      |                    ~~^~~~
_63TakeInput.cpp:17:11: error: statement cannot resolve address of overloaded function
   17 |         v.push_back;
      |         ~~^~~~~~~~~
_63TakeInput.cpp:20:22: error: invalid use of member 'std::vector<_Tp, _Alloc>::size_type std::vector<_Tp, _Alloc>::size() const [with _Tp = int; _Alloc = std::allocator<int>; std::vector<_Tp, _Alloc>::size_type = long long unsigned int]' (did you forget the '&' ?)
   20 |     for(int i=0; i<v.size; i++){
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
    for(int i=0; i<v.size; i++){
        cout<<v[i]<<" ";
    }
}