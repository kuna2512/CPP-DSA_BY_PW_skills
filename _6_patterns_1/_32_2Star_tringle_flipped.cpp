/*
                    *
                  * *
                * * *
              * * * *
            * * * * *
          * * * * * *
        * * * * * * *
      * * * * * * * *
    * * * * * * * * * 
  * * * * * * * * * *
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
-----------------------
proceduress:-
n=3  
i=1, 2, 3        (n-i=1, 0)
j= 1, 2, 3, 1, 2
k= 1, 2, 1

putput:-
- - *
- * *
* * *

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if((i+j)>=n+1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
