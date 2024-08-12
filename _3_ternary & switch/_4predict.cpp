#include<iostream>
using namespace std;
int main(){
    int x;
    x = 5 > 8 ? 10 : 1!=2 < 5 ? 20 : 30 ;
    cout<<"value of x : "<<x;
    return 0;
}
/* 
    >, >= , <= < ka persidence is greater as compare to ==, != 
    x = 5 > 8 ? 10 : 1!=2 < 5 ? 20 : 30 ;
    solve :-
    1 != 2 < 5  => true
    1 != 1  => flase
    0
=>now x = 5 > 8 ? 10 : 30 ;
    x = 5 is not greater than 8 so answer will be 30 .

*/