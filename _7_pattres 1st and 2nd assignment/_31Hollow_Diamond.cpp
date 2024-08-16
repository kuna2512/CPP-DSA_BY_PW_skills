/*
Enter no. of lines : 5
        * 
      *   * 
    *       * 
  *           * 
*               * 
  *           * 
    *       * 
      *   *
        *
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines : ";
    cin>>n;
    for(int i=1; i<=n-1; i++){
        cout<<"  ";
    }
    cout<<"* ";
    cout<<endl;
    // upper tringle
    for(int i=2; i<=n-1; i++){
        // spaces
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        // upper left stars
        cout<<"* ";
        // upper middle space
        for(int k=1; k<=2*(i-1)-1; k++){
            cout<<"  ";
        }
        // upper right stars.
        cout<<"* ";
        cout<<endl;
    }
    for( int i=1; i<=n-1; i++){
        //spaces
        for(int j=1; j<i; j++){
            cout<<"  ";
        }
        // left stars
        cout<<"* ";
        // spaces
        int m=2*(n-i);
        for(int i=1; i<m; i++){
            cout<<"  ";
        }
        cout<<"* ";
        cout<<endl;
    }
    for(int j=1; j<=n-1; j++){
        cout<<"  ";
    }
    // lower single star.
    cout<<"*";
}
// 57 minutes