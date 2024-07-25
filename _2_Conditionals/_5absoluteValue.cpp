// Given an integer. print the absolute value of that integer.
// ans :- convert any number into positive.
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter any value : ";
    cin>>x;
    if(x>0){
        cout<<x;
    }
    else{
        cout<<-x;
    }
}