// Display this AP-100,97,94,... upto all terms which are positive.
#include<iostream>
using namespace std;
int main(){
    /*
    a=100, d= -3, an = ? make an positiove. so an>0
    => a+(n-1)d>0
    => 100+(n-1)(-3)>0
    => 100>3(n-1)
    => 100>3n-3
    => 103>3n
    => 3n<103
    => n<103/3
    => n>34.333333
    => n>34 this is last term positive is 34.

    so => a34 = a+(34-1)d
        a34=>100+(-3)33
        a34=> 1 last term
    */
    int a=100;
    for(int i=1; i<=34; i++){
        cout<<a<<endl;
        a=a-3;
    }
}