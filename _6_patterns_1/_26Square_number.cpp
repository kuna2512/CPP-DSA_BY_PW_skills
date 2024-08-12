/*
11111
00000
11111
00000
11111
---------------------
1. M-1 :- using extra variable.
2. if(i%2!=0) -> begining with 1.
    else -> begning with 0.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;
    int k =1;
    for(int i=1; i<=n; i++){
        if(i%2!=0){ 
            k=1; // row no. odd.
        }
        else{
            k=0; // row no. even.
        }
        for(int j=1; j<=n; j++){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}