/*
                    1 
                  1 2 
                1 2 3 
              1 2 3 4 
            1 2 3 4 5 
          1 2 3 4 5 6 
        1 2 3 4 5 6 7 
      1 2 3 4 5 6 7 8 
    1 2 3 4 5 6 7 8 9
  1 2 3 4 5 6 7 8 9 10
------------------
concept:-
  1 2 3 4 5
1 - - - - 1
2 - - - 1 2
3 - - 1 2 3 
4 - 1 2 3 4
5 1 2 3 4 5 
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
- - 1
- 1 2
1 2 3

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        // hashes 
        for(int j=1; j<=n+1-i; j++){
            cout<<" "<<" ";
        }
        // stars
        for(int k=1; k<=i; k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
}
