/*
Enter no. of lines : 8
              *
            * * *
          *   *   *
        *     *     *
      *       *       *       
    *         *         *     
  *           *           *   
* * * * * * * * * * * * * * *
  *           *           *   
    *         *         *
      *       *       *
        *     *     *
          *   *   *
            * * *
              *
-------------------------
concept:- n=6 => 0 to 10 indexing x-axis and y-axis.
1. (2n-1)*(2n-1)diamention.
2. print stars => m=2n-1 or m/2 (for first quardent)
3. if (j-i=m/2) then print middle side stars.
 (1,6)(2,7)(3,8)(4,9)
4. print left upper stars 
 (1,4)(2,3)(3,2)(4,1)
 . abs(i+j) = m/2 (for second quardent)
 . (i-j) = m/2 where m=2n-1.
 . (i+j) = 2n+3 for right lower stars.
 . abs(i-j) = 5 for left lower stars.
 -----------------------------------
* abs(i-j)==m/2
=> abs is a function. if we passing i-j in abs ans that value is postive then 
it can't make any empect on that. if passing value is positive in that condition
it convert value into positive of i-j . that means it focus only on magnitude.

we apply it like that :-
if(abs(i-j) == m/2){
    if(i-j == m/2 or j-i == m/2)
}

eg :-
1. abs(5) = 5
2. abs(-5) = 5
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines : ";
    cin>>n;
    int m = 2*n-1;
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            if(i==m/2 or j==m/2 or abs(i-j)==m/2 or i+j==m/2 or i+j==3*(n-1)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
