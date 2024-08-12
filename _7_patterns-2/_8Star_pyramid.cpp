/*
         *
        ***
       *****
      *******
     *********
    ***********
   *************
  ***************
 *****************
*******************
-------------------
here we using :-
1. nst & nsp method :- 
   a. no. of stars in each line.
   b. no. of spaces in each line.
above a & b point depends on i -> no. of lines.
-------------------------------------
concept:-
1. first line me 'n-1' spaces honge. & 'nsp--'
2. nst = 1, nst+=2
-------------------------------------
process:-

n=3
i = 1 ->1+1=>2, 2 ->2+1=>3, 3 ->3+1=>4, 4
nsp =2 ->2-1=>1, 1 ->1-1=>0, 0 ->0-1=>-1, -1
nst =1 ->1+3=>3, 3 ->3+2=>5, 5 ->5+2=>7, 7

output:-
- - *
- * * *
* * * * *  

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines : ";
    cin>>n;
    int nst =1;
    int nsp = n-1;
    for(int i=1; i<=n; i++){
        // spaces
        for(int j=1; j<=nsp; j++){
            cout<<" ";
        }
        nsp--;
        for(int k=1; k<=nst; k++){
            cout<<"*";
        }
        nst+=2;
        cout<<endl;
    }
    return 0; 
}
// 23 minutes