/*
       *
      ***
     *****
    *******
   *********
  ***********
 *************
***************
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No. of rows : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        // for space
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        // for pyramid
        for(int k=1; k<=2*i-1; k++){
            cout<<"*";
        }
        cout<<endl;
    }
}