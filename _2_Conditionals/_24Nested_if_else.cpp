// Take 3 positive integer input and print the greatest of them.
#include<iostream>
using namespace std;
int main (){
    int a,b,c;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;
    cout<<"Enter 3rd number : ";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<a<<" is greatest";
        }
        else{ // c>a, a>b -> c>a>b
            cout<<c<<" is greatest";
        }
    }
    else{ // b>a
        if(b>c){
        cout<<b<<" is greatest";
        }
        else{ // c>b>a
            cout<<c<<" is greatest";
        }
    }
}
// 1:48 hours
