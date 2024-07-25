// Multiple Conditions Using &&(Logical and) and ||(Logical or).
// && :- in this condition if 1st condition is false then it not check 2nd contion.
// || :- in thic condition if 1st condtion will be false then it check 2nd condition. But if condition 1st is true, then if not check 2nd conition. 
// Qes. Take positive integer input and tell if it is a three digit number or not.
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter no. : ";
    cin>>x;
    if(x>=100 && x<=999){
        cout<<"Enerted no. is 3 digit";
    }
    else{
        cout<<"Entered no. is not 3 digit";
    }
}