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
        if(c>a){
            cout<<"3rd number is greatest.";
        }
        else{
            cout<<"1st number is greatest.";
        }
    }
    else{
            cout<<"2nd number is greatest.";
    }
}