#include<iostream>
using namespace std;
int main(){
    int i=2,j=3,k,l;
    float a,b;
    k=i/j*j; // 2/3*3=> 0*3 => 0
    l=j/i*i; // 3/2*2=> 1*2 => 2
    a=i/j*j; // 2/3*3=> 0*3 => 0
    b=j/i*i; // 3/2*2=> 1*2 => 2
    cout<<"k = "<<k<<endl<<"l = "<<l<<endl<<"a = "<<a<<endl<<"b = "<<b;
}