// take positive integer input and tell if it is divisible by 5 or not.
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter positive no. :";
    cin>>x;
    if(x%5==0){
        cout<<"It is divisible by 5";
    }
    else{
        cout<<"It is not divisible by 5";
    }
}