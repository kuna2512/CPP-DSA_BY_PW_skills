#include<iostream>
using namespace std;
int main(){
    int x = 3;
    cout<<(x=7)<<endl; // it is not a comperation so it give output 7.
    cout<<(x==7); // now it is coperation so it gives output 0 or 1.
}