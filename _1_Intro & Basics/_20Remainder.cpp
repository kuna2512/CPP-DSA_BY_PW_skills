#include<iostream>
using namespace std;
int main(){
    int a,b;
    a=76;
    b=3;
    int c = 100;
    cout<<a%b<<endl;
    cout<<a%c<<endl;
    cout<<99%-4<<endl;
    cout<<-99%4<<endl;  // here it follow heirarchy modulus.
}
// if a>b = a%b = remainder 
// if a=b = a%b = remainder
// if a<b = a%b = remainder is not possible in this codition when we using integer data type , solution is possible when we using float.
// if dividend is smaller than diviser in that condition dividend will make remainder.