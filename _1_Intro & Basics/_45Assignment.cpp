#include<iostream>
using namespace std;
int main(){
    bool p = false;
    bool q = false;
    bool r = true;
    cout<<(p == q == r)<<endl;
    // hera firstly print p==q then output will be 1 ans again we applying ==r then 1==r we find output 1.
    cout<<(q == r);
}