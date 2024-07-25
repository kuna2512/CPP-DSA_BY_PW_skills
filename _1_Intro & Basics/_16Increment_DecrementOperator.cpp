#include<iostream>
using namespace std;
int main(){
    int x ;
    x =5;
    cout<<++x<<endl;
    int y =6;
    cout<<y++<<endl;
    // if we using post increment method under the cout in that condition that is not word properly.
    // it print same value in output.
    // because it pint the value of varible before appying post increment(x++)
    // so solving this problem we need to again print the value of variable to get correct answer.
    cout<<y<<endl;
    int z=10;
    cout<<--z<<endl;
    cout<<z--<<endl;
    cout<<z;
}