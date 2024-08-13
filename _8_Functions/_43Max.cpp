/*
x = 12
y = 14
z = 4
Max in three no. is : 14
*/
#include<bits/stdc++.h>
using namespace std;
int maxINthree(int a, int b, int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }
}
int main(){
    int x,y,z;
    x=12;
    y=14;
    z=4;
    cout<<"x = "<<x<<endl<<"y = "<<y<<endl<<"z = "<<z<<endl<<"Max in three no. is : "<<maxINthree(x,y,z);
}