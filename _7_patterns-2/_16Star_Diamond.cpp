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
---------------------------
process:- n=4
i = 1 ->1+1=>2, 2 ->2+1=>3, 3 ->3+1=>4, 4 ->4+1=>5, 5  ->5+1=>6, 6, ->6+1=>7, 7
nsp =3 ->3-1=>1, 2 ->2-1=>1, 1 ->1-1=>-0, 0 ->0 else nsp++ -> 0+1=>1, 1->1+1=>2, 2 ->2+1=>3, 3 ->3+1=>4, 4
nst =1 ->1+2=>3, 3 ->3+2=>5, 5 ->5+2=>7, 7 else nst-- -> 7-2=>5, 5 -> 5-2=>3, 3-> 3-2=>1, 1 ->1-2=>-1, -1
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
            cout<<" ";
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