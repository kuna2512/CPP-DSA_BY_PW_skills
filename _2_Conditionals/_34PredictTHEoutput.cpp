#include<iostream>
using namespace std;
int main(){
    int a=5, b=4, c=3;
    if(a>b && a>c) cout<<"Number1."<<endl;
    if(b>a || b>c) cout<<"Number2."<<endl;
    if(c>a && c>b) cout<<"Number3."<<endl;
}