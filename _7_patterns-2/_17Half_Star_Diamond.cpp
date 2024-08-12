/*
        *
      ***
    *****
  *******
*********
  *******
    *****
      ***
        *
----------------------
outer loop concept:-
a. (i=1; i<=2*n-1; i) lines print line
b. nsp = n-1 ->nsp-- / nsp++
c. nst = 1 ->nst+=2 / nst-=2
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No. of rows : ";
    cin>>n;
    int nst = 1;
    int nsp = n-1;
    for(int i=1; i<=2*n-1; i++){
        // space
        for(int j=1; j<=nsp; j++){
            cout<<" "<<" ";
        }
        if(i<=n-1){
            nsp--;
        }
        else{
            nsp++;
        }
        for(int k=1; k<=nst; k++){
            cout<<"*";
        }
        if(i<=n-1){
            nst+=2;
        }
        else{
            nst-=2;
        }
        cout<<endl;
    }
    return 0;
}