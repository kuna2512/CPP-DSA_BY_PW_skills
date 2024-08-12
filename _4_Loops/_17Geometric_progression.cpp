/*
Dispaly this GP - 1,2,4,8,16,32,....upto 'n' terms. 

conditon :-
an = a*r ka power n-1
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<i<<endl;
        i=i*2;

    }
}
