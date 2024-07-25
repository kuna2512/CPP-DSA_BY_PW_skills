#include<iostream>
using namespace std;
int main(){
    int x, y;
    x = 14;
    y = 4;
    int z = x+y; // 14+4= 18
    z +=10; // 18+10 = 28
    cout<<z<<endl;
    z -=20; // 28-20=8
    cout<<z<<endl;
    ++z; // 8+1=9
    cout<<z<<endl;
    z *=20; // 9*20=180
    cout<<z<<endl;
    int a = z+100; // 180+100=280
    a -=100; // 280-100=180;
    cout<<a<<endl;
    --a; // 180-1=179 is the final answer
    cout<<a<<endl;

}
/*
x++ post increment
++x pre increment
*/