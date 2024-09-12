#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(5,7); // initialize size = 5, each element has value 7.
    cout<<v[4];
    vector<int>vec(100,1000);
    cout<<vec[3]; // here we write any number under the square bricket that give output always 1000, because 1000 is initialize in the vector. 
}