/*
#####*
#####**
#####***
#####****
#####*****
------------------
concept:-
  1 2 3 4 5
1 - - - - *
2 - - - * *
3 - - * * *
4 - * * * *
5 * * * * *
space & stars
  |       |
 loop    loop

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        // hashes 
        for(int j=1; j<=n+1-1; j++){
            cout<<"#";
        }
        // stars
        for(int k=1; k<=i; k++){
            cout<<"*";
        }
        cout<<endl;
    }
}