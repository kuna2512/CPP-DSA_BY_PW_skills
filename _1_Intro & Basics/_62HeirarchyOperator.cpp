#include<iostream>
using namespace std;
int main(){
    int num1;
    int p = 5, q=10;
    p += q -= p;
    cout<<p<<" "<<q<<endl;
    /*
    here it work right to left
    q-=p => q=q-p 
        => q = 10-5 => 5 answer
    p+=5 => p=5+5 => 10 answer
    */
}