/*
                  1 
                1 2 1 
              1 2 3 2 1 
            1 2 3 4 3 2 1 
          1 2 3 4 5 4 3 2 1 
        1 2 3 4 5 6 5 4 3 2 1 
      1 2 3 4 5 6 7 6 5 4 3 2 1 
    1 2 3 4 5 6 7 8 7 6 5 4 3 2 1
  1 2 3 4 5 6 7 8 9 8 7 6 5 4 3 2 1
1 2 3 4 5 6 7 8 9 10 9 8 7 6 5 4 3 2 1
-----------------------------
concept:-
1.         1           1 - - - -  1. 1           1.
2.       1 2 1         2 - - -    2. 1 2         2. 1
3.     1 2 3 2 1    => 3 - -    + 3. 1 2 3    +  3. 2 1
4.   1 2 3 4 3 2 1     4 -        4. 1 2 3 4     4. 3 2 1
5. 1 2 3 4 5 4 3 2 1   5          5. 1 2 3 4 5   5. 4 3 2 1
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"NO. of rows : ";
    cin>>n;
     for(int i=1; i<=n; i++){
        // space printing
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int k=1; k<=i; k++){
            cout<<k<<" ";
        }
        for(int l=i-1; l>=1; l--){
            cout<<l<<" ";
        }
        cout<<endl;
    }
}