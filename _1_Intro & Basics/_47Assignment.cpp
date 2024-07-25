#include<iostream>
using namespace std;
int main(){
    int a = 1;
    int b = 2;
    int c = 2;
    cout<<(a == (b == c));
    // compare (b==c) -> 1 and then (a)==1 -> 1 answer
}
// 40 minutes