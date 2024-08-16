/*
Enter no. of lines : 5
* * * * * * * * * 
* * * *   * * * * 
* * *       * * * 
* *           * * 
*               * 
* *           * * 
* * *       * * *
* * * *   * * * *
* * * * * * * * *
--------------
upper half
n-i, 2*i-1, n-i

lower half :-
i, 2(n-i)-1, i
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines : ";
    cin>>n;
    // treating first row seprately
    for(int i=1; i<=2*n-1; i++){
        cout<<"* ";
    }
    cout<<endl;
    // upper half
    for(int i=1; i<=n-1; i++){
        // stars
        for(int j=1; j<=n-i; j++){
            cout<<"* ";
        }
        // spaces
        for(int k=1; k<=2*i-1; k++){
            cout<<"  ";
        }
        // stars
        for(int l=1; l<=n-i; l++){
            cout<<"* ";
        }
        cout<<endl;
    }
     // lower half
     for(int i=2; i<=n-1; i++){
        // stars
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        // space 
        for(int k=1; k<=2*(n-i)-1; k++){
            cout<<"  ";
        }
        // stars
        for(int l=1; l<=i; l++){
            cout<<"* ";
        }
        cout<<endl;
    }
    // treating last row seprately
    for(int i=1; i<=2*n-1; i++){
        cout<<"* ";
    }

}
// 1:54 hours