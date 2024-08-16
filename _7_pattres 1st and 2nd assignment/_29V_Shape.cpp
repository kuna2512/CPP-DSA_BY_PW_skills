/*
Enter no. of lines : 5
 *       *
  *     *
   *   *
    * *
     *
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines : ";
    cin>>n;
    for( int i=1; i<=n-1; i++){
        //spaces
        for(int j=1; j<=i; j++){
            cout<<" ";
        }
        // left stars
        cout<<"*";
        // spaces
        int m=2*(n-i);
        for(int i=1; i<m; i++){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    for(int j=1; j<=n-1; j++){
        cout<<" ";
    }
    // lower single star.
    cout<<" *";
}