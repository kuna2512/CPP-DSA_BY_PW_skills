/*
if cost price and selling price of an item is input through the keyboard,
write a program to determine whether the seller has mode profit or
incurred loss. also detetmine how much profit he made or loss he incurred.

formula :- profit = sp-cp
           loss = cp-sp
*/
#include<iostream>
using namespace std;
int main(){
    int sp, cp;
    cout<<"Enter the sp : ";
    cin>>sp;
    cout<<"Enter the cp : ";
    cin>>cp;
    if(sp>cp){
        cout<<"profit : "<<sp-cp;
    }
    else if(sp==cp){ 
        cout<<"Not loss & Profit : "<<sp-cp;
    }
    else{
        cout<<"Loss : "<<sp-cp;
    }
    return 0;
}