/*
use of at in vector : 
---------------------
output : 
Print 2nd element : 2
Using at to print : 2
Print 4th element : 0
Using at to print : 9
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec;
    vec.push_back(3);
    vec.push_back(8);
    vec.push_back(2);
    vec.push_back(9);
    cout<<"Print 2nd element : "<<vec[2]<<endl;
    cout<<"Using at to print : "<<vec.at(2)<<endl;
    cout<<"Print 4th element : "<<vec[4]<<endl;
    cout<<"Using at to print : "<<vec.at(3);
}
// 1:25 hours