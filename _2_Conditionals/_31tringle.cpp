// Take 3 numbers input and tell if they can be the sides of a triangle.
/*
condition :-
a+b>c
b+c>a
a+c>b
*/
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st side : ";
    cin>>a;
    cout<<"Enter 2nd side : ";
    cin>>b;
    cout<<"Enter 3rd side : ";
    cin>>c;
    if((a+b>c) && (b+c>a) && (a+c>b)){
        cout<<a<<" "<<b<<" "<<c<<" can be the sides of a tringle";
    }
    else{
        cout<<"Invaild Triangle";
    }
}